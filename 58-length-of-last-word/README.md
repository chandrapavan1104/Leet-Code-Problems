<h2><a href="https://leetcode.com/problems/length-of-last-word/">58. Length of Last Word</a></h2><h3>Easy</h3><hr><div><p>Given a string <code>s</code> consisting of words and spaces, return <em>the length of the <strong>last</strong> word in the string.</em></p>

<p>A <strong>word</strong> is a maximal substring consisting of non-space characters only.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: s = &quot;Hello World&quot;
Output: 5
Explanation: The last word is &quot;World&quot; with length 5.
" data-snippet-id="ext.837fcb05220023ba51c15dcdb2b64b85" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> s = "Hello World"
<strong>Output:</strong> 5
<strong>Explanation:</strong> The last word is "World" with length 5.
</pre>

<p><strong>Example 2:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: s = &quot;   fly me   to   the moon  &quot;
Output: 4
Explanation: The last word is &quot;moon&quot; with length 4.
" data-snippet-id="ext.05d668b128e42605416a38380aa6c388" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> s = "   fly me   to   the moon  "
<strong>Output:</strong> 4
<strong>Explanation:</strong> The last word is "moon" with length 4.
</pre>

<p><strong>Example 3:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: s = &quot;luffy is still joyboy&quot;
Output: 6
Explanation: The last word is &quot;joyboy&quot; with length 6.
" data-snippet-id="ext.2424e2433e5e61657c8bd50a9b5b91e9" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> s = "luffy is still joyboy"
<strong>Output:</strong> 6
<strong>Explanation:</strong> The last word is "joyboy" with length 6.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> consists of only English letters and spaces <code>' '</code>.</li>
	<li>There will be at least one word in <code>s</code>.</li>
</ul>
</div>