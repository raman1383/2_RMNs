print("Hello from julia")
s = 12
z = "12"
x::BigFloat = 21.22222

# function quick_sort!(arr::Vector{T}, l::Int=1, r::Int=length(arr)) where {T}
#     if l >= r
#         return
#     end
#     mid = arr[(l+r)>>1]
#     l_pos = l
#     r_pos = r
#     while l_pos <= r_pos
#         while arr[l_pos] < mid
#             l_pos += 1
#         end
#         while arr[r_pos] > mid
#             r_pos -= 1
#         end
#         if l_pos <= r_pos
#             t = arr[l_pos]
#             arr[l_pos] = arr[r_pos]
#             arr[r_pos] = t
#             l_pos += 1
#             r_pos -= 1
#         end
#     end
#     if l < r_pos
#         quick_sort!(arr, l, r_pos)
#     end
#     if l_pos < r
#         quick_sort!(arr, l_pos, r)
#     end
# end



# function binary_search(list, query; rev=false, lt=<, by=identity)
#     if issorted(list) || issorted(list; rev=true)
#         low = !rev ? 1 : length(list)
#         high = !rev ? length(list) : 1
#         middle(l, h) = round(Int, (l + h) // 2)
#         query = by(query)

#         while !rev ? low <= high : high <= low
#             mid = middle(low, high)
#             by(list[mid]) === query && return mid:mid
#             if lt(by(list[mid]), query)
#                 low = !rev ? mid + 1 : mid - 1
#             else
#                 high = !rev ? mid - 1 : mid + 1
#             end
#         end
#         return !rev ? (low:high) : (high:low)

#     else
#         throw(error("List not sorted, unable to search value"))
#     end
# end

# # See Issue https://github.com/TheAlgorithms/Julia/issues/34
# """
#     binary_search(arr::AbstractArray{T,1}, l::T, r::T, x::T) where {T<:Real}
# The implementation of this binary Search is recursive and requires O(Log n) space. With iterative Binary Search, we need only O(1) space. Useful for the implementation of `exponential_search`.
# Contributed By:- [Ash](https://github.com/ashwani-rathee)
# """
# function binary_search(
#     arr::AbstractArray{T,1},
#     l::T,
#     r::T,
#     x::T,
# ) where {T<:Real}
#     if (r >= l)
#         mid = Int(ceil(l + (r - l) / 2))
#         # println(mid)
#         if (arr[mid] == x)
#             return "Element present at index $mid"
#         elseif (arr[mid] > x)
#             binary_search(arr, l, mid - 1, x)
#         else
#             binary_search(arr, mid + 1, r, x)
#         end
#     else
#         return "Element not present in array"
#     end
# end