bool canJump(vector<int> &nums)
{
    int reach = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (reach < i)
            break;
        reach = max(reach, i + nums[i]);
        if (reach >= nums.size() - 1)
            return true;
    }
    return false;
}