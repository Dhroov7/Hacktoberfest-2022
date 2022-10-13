<script>
function areDistinct(str, i, j)
{
	var visited = new [26];

	for(var k = i; k <= j; k++)
	{
		if (visited[str.charAt(k) - 'a'] == true)
			return false;
			
		visited[str.charAt(k) - 'a'] = true;
	}
	return true;
}

function longestUniqueSubsttr(str)
{
	var n = str.length();
	
	// Result
	var res = 0;
	
	for(var i = 0; i < n; i++)
		for(var j = i; j < n; j++)
			if (areDistinct(str, i, j))
				res = Math.max(res, j - i + 1);
				
	return res;
}

	var str = "geeksforgeeks";
	document.write("The input string is " + str);

	var len = longestUniqueSubsttr(str);
	
	document.write("The length of the longest " +
					"non-repeating character " +
					"substring is " + len);

</script>
