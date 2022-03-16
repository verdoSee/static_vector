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
	requires(sizeof...(Args) <= TSize) constexpr static_vector(Args &&...args) noexcept : data{args...} {
		idx_Curr = sizeof...(args);
	}

	constexpr static_vector() noexcept : idx_Curr(0) {}

	auto emplace_back(const TType &val) noexcept {
		data[idx_Curr] = val;
		idx_Curr++;
	}

	auto pop_back() noexcept {
		idx_Curr--;
	}

	[[nodiscard]] inline decltype(auto) operator[](size_t index) noexcept {
		return data[index];
	}
};
