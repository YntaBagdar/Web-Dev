def same_first_last(nums):
  while len(nums)>=1:
    if nums[0] == nums[-1]:
      return True
    else:
      return False
  return False