    public String maximumOddBinaryNumber(String s) {
        return "1".repeat((s.chars().map(x -> x - 48).sum()) - 1) + "0".repeat(s.length() - (s.chars().map(x -> x - 48).sum())) + "1";
    }

//One line java solution. Very inefficient 
