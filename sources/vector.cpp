#include <algorithm>
#include <cassert>

#include "vector.hpp"

vector_t::vector_t()
{
	elements_=nullptr;
	size_=0;
	capacity_=0;
}

vector_t::vector_t(vector_t const & other)
{
	size_=other.size_;
	capacity_=other.capacity_;
	elements_= new int [capacity_];
	for(unsigned int i = 0; i<size_;i++)
	{
		elements_[i]=other.elements_[i];
	}
}

vector_t & vector_t::operator =(vector_t const & other)
{
	if (this->elements_==other.elements_) return *this;
	else 
	{
		delete [] elements_;
		size_= other.size_;
		capacity_ = other.capacity_;
		elements_ = new int [capacity_];
		for (unsigned int i=0; i< size_; i++) 
		{
			elements_[i] =other.elements_[i];
		}
	}
	return *this;
}

bool vector_t::operator ==(vector_t const & other) const
{
	bool flag=true;
	if (size_!=other.size_) flag=1;
	else 
	{
		for (unsigned int i=0; i< size_; i++) 
		{
		if (elements_[i] !=other.elements_[i]) flag =false;
		}
	}
	return flag;
}

vector_t::~vector_t()
{
	if (elements_ != nullptr) 
		delete [] elements_;
	size_=0;
	capacity_=0;
	
}

std::size_t vector_t::size() const
{
    return size_;
}

std::size_t vector_t::capacity() const
{
    return capacity_;
}

void vector_t::push_back(int value)
{
}

void vector_t::pop_back()
{
}

int & vector_t::operator [](std::size_t index)
{
	return elements_[0];
}

int vector_t::operator [](std::size_t index) const
{
	return 0;
}

bool operator !=(vector_t const & lhs, vector_t const & rhs)
{
	return true;
}
