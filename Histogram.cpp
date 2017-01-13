#include "Histogram.h"
#include <cstdint>

namespace utl
{
	template<typename _T>
	void histogram_template_create(const std::vector<_T>& src, const std::vector<_T>& range, std::vector<int>& out)
	{
		out.resize(range.size() - 1);
		std::fill(out.begin(), out.end(), 0);
		for (const _T& element : src)
		{
			for (auto itr = range.cbegin(), itrend = range.cend() - 1; itr != itrend; itr++)
			{
				if (element >= *itr && element < *(itr + 1))
				{
					out[itr - range.cbegin()] ++;
					break;
				}
			}
		}
	}

	template<>
	void Histogram::create(const std::vector<int8_t>& src, const std::vector<int8_t>& range, std::vector<int>& out)
	{
		histogram_template_create(src, range, out);
	}

	template<>
	void Histogram::create(const std::vector<int16_t>& src, const std::vector<int16_t>& range, std::vector<int>& out)
	{
		histogram_template_create(src, range, out);
	}

	template<>
	void Histogram::create(const std::vector<int32_t>& src, const std::vector<int32_t>& range, std::vector<int>& out)
	{
		histogram_template_create(src, range, out);
	}

	template<>
	void Histogram::create(const std::vector<int64_t>& src, const std::vector<int64_t>& range, std::vector<int>& out)
	{
		histogram_template_create(src, range, out);
	}

	template<>
	void Histogram::create(const std::vector<uint8_t>& src, const std::vector<uint8_t>& range, std::vector<int>& out)
	{
		histogram_template_create(src, range, out);
	}

	template<>
	void Histogram::create(const std::vector<uint16_t>& src, const std::vector<uint16_t>& range, std::vector<int>& out)
	{
		histogram_template_create(src, range, out);
	}

	template<>
	void Histogram::create(const std::vector<uint32_t>& src, const std::vector<uint32_t>& range, std::vector<int>& out)
	{
		histogram_template_create(src, range, out);
	}

	template<>
	void Histogram::create(const std::vector<uint64_t>& src, const std::vector<uint64_t>& range, std::vector<int>& out)
	{
		histogram_template_create(src, range, out);
	}

	template<>
	void Histogram::create(const std::vector<float>& src, const std::vector<float>& range, std::vector<int>& out)
	{
		histogram_template_create(src, range, out);
	}

	template<>
	void Histogram::create(const std::vector<double>& src, const std::vector<double>& range, std::vector<int>& out)
	{
		histogram_template_create(src, range, out);
	}

}