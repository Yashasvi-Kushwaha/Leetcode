class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        Newheight=heights.copy()
        heights.sort()
        i=0
        count=0
        while(i<len(heights)):
            if(heights[i]!=Newheight[i]):
                count=count+1
            i+=1
        return count