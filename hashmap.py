stud_attendance = dict()

def insert_data(roll_no, class_attended):
    stud_attendance[roll_no] = class_attended

insert_data("Sai",100)
insert_data("Nanish",200)
insert_data("Gaurav",300)

print(stud_attendance)

def update_data(roll_no, class_attended):
    stud_attendance[roll_no] = class_attended

update_data("Sai",1000)
print(stud_attendance)

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i in range(len(nums)):
            if nums[i] in seen:
                return [seen[nums[i]],i]
            else:
                seen[target-nums[i]]=i
        
        
        
        # for i in range(len(nums)):
        #     for j in range(i+1, len(nums)):
        #         if(nums[i]+nums[j]==target):
        #             return [i,j]