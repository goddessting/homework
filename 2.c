#卓越女生计划面试作业
###作业一：*实验室组织方案*
	
	###作业二：*写给技术小白的HTML初级教程*
	###		《HTML初级教程》
	####导语：
	> Hi，Cindy! 欢迎使用此教程！学习之前，我向你大致介绍一下HTML，它是一门非常简单有趣的标记语言语言。即使零基础，学起来也是相当的轻松哦！所以，要对自己充满信心，毕竟有我在！（嘻嘻，我不是认真的！你才是主角嘛！）好啦，话不多说，我们开始学习了！加油，加油，加油！
	####一. HTML简介
	>1.  什么是HTML？
	HTML是用来描述网页的一种语言
	* HTML是指超文本标记语言
	* HTML不是一种编程语言，而是标记语言
	* HTML使用标记标记标签来描述网页

	> 2.  HTML标签
	*  HTML 标签是由尖括号包围的关键词，比如 <html>
	* HTML 标签通常是成对出现的，比如 <b> 和 </b>
	* 标签对中的第一个标签是开始标签，第二个标签是结束标签
	* 开始和结束标签也被称为开放标签和闭合标签

	> 3. HTML文档=网页
	* HTML 文档描述网页
	* HTML 文档包含 HTML 标签和纯文本
	* HTML 文档也被称为网页

	####二. HTML文档的结构

		<!DOCTYPE> 用来指定页面所使用的XHTML或HTML的版本
			<html>
					<head>
								头部内容：定义标题式样等
										</head>
												<body>
															主题内容：网页要显示的各种信息，包括文本超链接，图像，动画等
																	</body>
																		</html>

																		####三.简单的HTML标签

																			<h# align="left"|"center"|"right">  </h#>

																			语法解释：
																			> 设置标题，‘#’ 取1~6，字体依次变小；
																			> align是设置标题的对齐属性；

																				<hr width="" size="" color="" align="" noshade> 
																				语法解释：
																				> 添加水平分割线
																				> width设置水平分割线的宽度，默认情况下为100%，单位为百分比或像素；
																				> size设置水平分割线的高度，单位必须为像素；
																				> align设置水平分割线的对齐方式：left，right，center;
																				> noshade设置水平分割线不出现阴影；

																					<ul type="">
																							<li>项目名称</li>
																									<li>项目名称</li>
																											<li>项目名称</li>
																													.
																															.
																																	.
																																		</ul>
																																		语法解释：
																																		>无序列表
																																		>type属性指定出现在列表项前的项目符号的样式，取值如下：
																																		* disc:实心圆圈
																																		* circle:空心圆圈
																																		* square:实心方块

																																				<ol type="">
																																							<li>项目名称</li>
																																										<li>项目名称</li>
																																													<li>项目名称</li>
																																																.
																																																			.
																																																						.
																																																								</ol>
																																																								语法解释：
																																																								>有序列表
																																																								>type属性指定出现在列表项前的项目符号的样式，取值如下：
																																																								* 1
																																																								* a
																																																								* A
																																																								* i:小写罗马数字
																																																								* I：大写罗马数字

																																																										<img src="url">
																																																										语法解释：
																																																										>添加图片；
																																																										>src属性值为所引用的url地址（必须的哦），url可以是绝对地址，也可以是相对地址(别着急，绝对地址与相对地址在后边的内容中将会作详细的介绍的哦！)
																																																										>其他属性：
																																																												
																																																												| 属性   | 功能说明          | 
																																																												| ------------- |:-------------:| 
																																																												| src   | 指定图片的url路径 | 
																																																												| width     | 指定图片的显示宽度   | 
																																																												| height | 指定图片的显示高度      | 
																																																												| hspace | 指定图片的水平间距 | 
																																																												| vspace | 指定图片的垂直间距 |   
																																																												| align  |  指定图片的对齐方式 |
																																																												|border| 指定图片的边框大小| 
																																																												|alt| 显示图片的说明文字|


