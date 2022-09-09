<h2><a href="https://leetcode.com/problems/goal-parser-interpretation/">1678. Goal Parser Interpretation</a></h2><h3>Easy</h3><hr><div><p>You own a <strong>Goal Parser</strong> that can interpret a string <code>command</code>. The <code>command</code> consists of an alphabet of <code>"G"</code>, <code>"()"</code> and/or <code>"(al)"</code> in some order. The Goal Parser will interpret <code>"G"</code> as the string <code>"G"</code>, <code>"()"</code> as the string <code>"o"</code>, and <code>"(al)"</code> as the string <code>"al"</code>. The interpreted strings are then concatenated in the original order.</p>

<p>Given the string <code>command</code>, return <em>the <strong>Goal Parser</strong>'s interpretation of </em><code>command</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: command = &quot;G()(al)&quot;
Output: &quot;Goal&quot;
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is &quot;Goal&quot;.
" data-snippet-id="ext.d6e27efaec2b9bc18b4f55d5da5b78b5" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> command = "G()(al)"
<strong>Output:</strong> "Goal"
<strong>Explanation:</strong>&nbsp;The Goal Parser interprets the command as follows:
G -&gt; G
() -&gt; o
(al) -&gt; al
The final concatenated result is "Goal".
</pre>

<p><strong>Example 2:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: command = &quot;G()()()()(al)&quot;
Output: &quot;Gooooal&quot;
" data-snippet-id="ext.980997642d6f15b05b9aed9643cc54a5" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> command = "G()()()()(al)"
<strong>Output:</strong> "Gooooal"
</pre>

<p><strong>Example 3:</strong></p>

<div class="top-box hide"><div class="alert-info"></div></div><pre data-original-code="Input: command = &quot;(al)G(al)()()G&quot;
Output: &quot;alGalooG&quot;
" data-snippet-id="ext.aca38b929c0afc9fcb269951f1e246f4" data-snippet-saved="false" data-codota-status="done"><strong>Input:</strong> command = "(al)G(al)()()G"
<strong>Output:</strong> "alGalooG"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= command.length &lt;= 100</code></li>
	<li><code>command</code> consists of <code>"G"</code>, <code>"()"</code>, and/or <code>"(al)"</code> in some order.</li>
</ul>
</div>