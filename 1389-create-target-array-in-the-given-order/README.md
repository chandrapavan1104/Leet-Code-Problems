<h2><a href="https://leetcode.com/problems/create-target-array-in-the-given-order/">1389. Create Target Array in the Given Order</a></h2><h3>Easy</h3><hr><div><p>Given two arrays of integers&nbsp;<code>nums</code> and <code>index</code>. Your task is to create <em>target</em> array under the following rules:</p>

<ul>
	<li>Initially <em>target</em> array is empty.</li>
	<li>From left to right read nums[i] and index[i], insert at index <code>index[i]</code>&nbsp;the value <code>nums[i]</code>&nbsp;in&nbsp;<em>target</em> array.</li>
	<li>Repeat the previous step until there are no elements to read in <code>nums</code> and <code>index.</code></li>
</ul>

<p>Return the <em>target</em> array.</p>

<p>It is guaranteed that the insertion operations will be valid.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: nums = [0,1,2,3,4], index = [0,1,2,2,1]
Output: [0,4,1,3,2]
Explanation:
nums       index     target
0            0        [0]
1            1        [0,1]
2            2        [0,1,2]
3            2        [0,1,3,2]
4            1        [0,4,1,3,2]
" data-snippet-id="ext.d1ae62003a999db6e56557a1bc879091" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> nums = [0,1,2,3,4], index = [0,1,2,2,1]
<strong>Output:</strong> [0,4,1,3,2]
<strong>Explanation:</strong>
nums       index     target
0            0        [0]
1            1        [0,1]
2            2        [0,1,2]
3            2        [0,1,3,2]
4            1        [0,4,1,3,2]
</pre>

<p><strong>Example 2:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: nums = [1,2,3,4,0], index = [0,1,2,3,0]
Output: [0,1,2,3,4]
Explanation:
nums       index     target
1            0        [1]
2            1        [1,2]
3            2        [1,2,3]
4            3        [1,2,3,4]
0            0        [0,1,2,3,4]
" data-snippet-id="ext.5564efee857ee00a14a9d1282f8d7f75" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> nums = [1,2,3,4,0], index = [0,1,2,3,0]
<strong>Output:</strong> [0,1,2,3,4]
<strong>Explanation:</strong>
nums       index     target
1            0        [1]
2            1        [1,2]
3            2        [1,2,3]
4            3        [1,2,3,4]
0            0        [0,1,2,3,4]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1], index = [0]
<strong>Output:</strong> [1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length, index.length &lt;= 100</code></li>
	<li><code>nums.length == index.length</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 100</code></li>
	<li><code>0 &lt;= index[i] &lt;= i</code></li>
</ul>
</div>