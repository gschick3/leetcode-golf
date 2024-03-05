class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        return len(pattern) == len(s.split()) and len(set(pattern)) * 2 == len(set(zip(pattern, s.split()))) + len(set(s.split()))