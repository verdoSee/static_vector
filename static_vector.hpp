#pragma once

#include <cstddef>
#include <iostream>

template <typename TType, size_t TSize>
struct static_vector {
   private:
	TType data[TSize];
	size_t idx_Curr;

   public:
	template <typename... Args>
	requires(sizeof...(Args) <= TSize) constexpr static_vector(Args&&... args) noexcept
		: data{args...} {
		idx_Curr += sizeof...(args);
	}

	void emplace_back(const TType& val) noexcept {
		data[idx_Curr] = val;
		idx_Curr++;
	}

	void pop_back() noexcept { idx_Curr--; }

	[[nodiscard]] inline TType& operator[](size_t index) noexcept { return data[index]; }
};
