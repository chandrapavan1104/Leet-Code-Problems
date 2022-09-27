<h2><a href="https://leetcode.com/problems/number-of-substrings-with-only-1s/">1513. Number of Substrings With Only 1s</a></h2><h3>Medium</h3><hr><div><p>Given a binary string <code>s</code>, return <em>the number of substrings with all characters</em> <code>1</code><em>'s</em>. Since the answer may be too large, return it modulo <code>10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: s = &quot;0110111&quot;
Output: 9
Explanation: There are 9 substring in total with only 1's characters.
&quot;1&quot; -> 5 times.
&quot;11&quot; -> 3 times.
&quot;111&quot; -> 1 time." data-snippet-id="ext.69f962fc80c05eb6ae13dc46c000b9c8" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> s = "0110111"
<strong>Output:</strong> 9
<strong>Explanation:</strong> There are 9 substring in total with only 1's characters.
"1" -&gt; 5 times.
"11" -&gt; 3 times.
"111" -&gt; 1 time.</pre>

<p><strong>Example 2:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: s = &quot;101&quot;
Output: 2
Explanation: Substring &quot;1&quot; is shown 2 times in s.
" data-snippet-id="ext.e6979596b7d5904e8c456a273d3767d2" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> s = "101"
<strong>Output:</strong> 2
<strong>Explanation:</strong> Substring "1" is shown 2 times in s.
</pre>

<p><strong>Example 3:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: s = &quot;111111&quot;
Output: 21
Explanation: Each substring contains only 1's characters.
" data-snippet-id="ext.a4eacc7a5e4d62a5b4abc1c86265c716" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> s = "111111"
<strong>Output:</strong> 21
<strong>Explanation:</strong> Each substring contains only 1's characters.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s[i]</code> is either <code>'0'</code> or <code>'1'</code>.</li>
</ul>
</div>