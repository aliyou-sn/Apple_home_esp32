#pragma once
const char FILE_BROWSE_HTML[] PROGMEM  =   "<html><head>\r\n"
"<meta http-equiv=\"content-type\" content=\"text/html; charset=utf-8\">\r\n"
"<style>\r\n"
"body {font-family: \"lucida grande\",\"Segoe UI\",Arial, sans-serif; font-size: 14px;width:1024;padding:1em;margin:0;}\r\n"
"th {font-weight: normal; color: #1F75CC; background-color: #F0F9FF; padding:.5em 1em .5em .2em; \r\n"
"  text-align: left;cursor:pointer;user-select: none;}\r\n"
"th .indicator {margin-left: 6px }\r\n"
"thead {border-top: 1px solid #82CFFA; border-bottom: 1px solid #96C4EA;border-left: 1px solid #E7F2FB;\r\n"
" border-right: 1px solid #E7F2FB; }\r\n"
"#top {height:52px;}\r\n"
"#mkdir {display:inline-block;float:right;padding-top:16px;}\r\n"
"label { display:block; font-size:11px; color:#555;}\r\n"
"#file_drop_target {width:100%; padding:12px 0; border: 4px dashed #ccc;font-size:12px;color:#ccc;\r\n"
" text-align: center;float:right;margin-right:20px;}\r\n"
"#file_drop_target.drag_over {border: 4px dashed #96C4EA; color: #96C4EA;}\r\n"
"#upload_progress {padding: 4px 0;}\r\n"
"#upload_progress .error {color:#a00;}\r\n"
"#upload_progress > div { padding:3px 0;}\r\n"
".no_write #mkdir, .no_write #file_drop_target {display: none}\r\n"
".progress_track {display:inline-block;width:200px;height:10px;border:1px solid #333;margin: 0 4px 0 10px;}\r\n"
".progress {background-color: #82CFFA;height:10px; }\r\n"
"footer {font-size:11px; color:#bbbbc5; padding:4em 0 0;text-align: left;}\r\n"
"footer a, footer a:visited {color:#bbbbc5;}\r\n"
"#breadcrumb { padding-top:34px; font-size:15px; color:#aaa;display:inline-block;float:left;}\r\n"
"#folder_actions {width: 50%;float:right;}\r\n"
"a, a:visited { color:#00c; text-decoration: none}\r\n"
"a:hover {text-decoration: underline}\r\n"
".sort_hide{ display:none;}\r\n"
"table {border-collapse: collapse;width:100%;}\r\n"
"thead {max-width: 1024px}\r\n"
"td { padding:.2em 1em .2em .2em; border-bottom:1px solid #def;height:30px; font-size:12px;white-space: nowrap;}\r\n"
"td.first {font-size:14px;white-space: normal;}\r\n"
"td.empty { color:#777; font-style: italic; text-align: center;padding:3em 0;}\r\n"
".is_dir .size {color:transparent;font-size:0;}\r\n"
".is_dir .size:before {content: \"--\"; font-size:14px;color:#333;}\r\n"
".is_dir .download{visibility: hidden}\r\n"
"a.delete {display:inline-block;\r\n"
" background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAABGdBTUEAAK/INwWK6QAAABl0RVh0U29mdHdhcmUAQWRvYmUgSW1hZ2VSZWFkeXHJZTwAAADtSURBVHjajFC7DkFREJy9iXg0t+EHRKJDJSqRuIVaJT7AF+jR+xuNRiJyS8WlRaHWeOU+kBy7eyKhs8lkJrOzZ3OWzMAD15gxYhB+yzAm0ndez+eYMYLngdkIf2vpSYbCfsNkOx07n8kgWa1UpptNII5VR/M56Nyt6Qq33bbhQsHy6aR0WSyEyEmiCG6vR2ffB65X4HCwYC2e9CTjJGGok4/7Hcjl+ImLBWv1uCRDu3peV5eGQ2C5/P1zq4X9dGpXP+LYhmYz4HbDMQgUosWTnmQoKKf0htVKBZvtFsx6S9bm48ktaV3EXwd/CzAAVjt+gHT5me0AAAAASUVORK5CYII=) no-repeat scroll 0 2px;\r\n"
" color:#d00; margin-left: 15px;font-size:11px;padding:0 0 0 13px;\r\n"
"}\r\n"
".name {\r\n"
" background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAYAAADgdz34AAABAklEQVRIie2UMW6DMBSG/4cYkJClIhauwMgx8CnSC9EjJKcwd2HGYmAwEoMREtClEJxYakmcoWq/yX623veebZmWZcFKWZbXyTHeOeeXfWDN69/uzPP8x1mVUmiaBlLKsxACAC6cc2OPd7zYK1EUYRgGZFkG3/fPAE5fIjcCAJimCXEcGxKnAiICERkSIcQmeVoQhiHatoWUEkopJEkCAB/r+t0lHyVN023c9z201qiq6s2ZYA9jDIwx1HW9xZ4+Ihta69cK9vwLvsX6ivYf4FGIyJj/rg5uqwccd2Ar7OUdOL/kPyKY5/mhZJ53/2asgiAIHhLYMARd16EoCozj6EzwCYrrX5dC9FQIAAAAAElFTkSuQmCC) no-repeat scroll 0px 12px;\r\n"
" padding:15px 0 10px 40px;\r\n"
"}\r\n"
".is_dir .name {\r\n"
" background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAYAAABzenr0AAAABHNCSVQICAgIfAhkiAAAAAlwSFlzAAADdgAAA3YBfdWCzAAAABl0RVh0U29mdHdhcmUAd3d3Lmlua3NjYXBlLm9yZ5vuPBoAAAI0SURBVFiF7Vctb1RRED1nZu5977VQVBEQBKZ1GCDBEwy+ISgCBsMPwOH4CUXgsKQOAxq5CaKChEBqShNK222327f79n0MgpRQ2qC2twKOGjE352TO3Jl76e44S8iZsgOww+Dhi/V3nePOsQRFv679/qsnV96ehgAeWvBged3vXi+OJewMW/Q+T8YCLr18fPnNqQq4fS0/MWlQdviwVqNpp9Mvs7l8Wn50aRH4zQIAqOruxANZAG4thKmQA8D7j5OFw/iIgLXvo6mR/B36K+LNp71vVd1cTMR8BFmwTesc88/uLQ5FKO4+k4aarbuPnq98mbdo2q70hmU0VREkEeCOtqrbMprmFqM1psoYAsg0U9EBtB0YozUWzWpVZQgBxMm3YPoCiLpxRrPaYrBKRSUL5qn2AgFU0koMVlkMOo6G2SIymQCAGE/AGHRsWbCRKc8VmaBN4wBIwkZkFmxkWZDSFCwyommZSABgCmZBSsuiHahA8kA2iZYzSapAsmgHlgfdVyGLTFg3iZqQhAqZB923GGUgQhYRVElmAUXIGGVgedQ9AJJnAkqyClCEkkfdM1Pt13VHdxDpnof0jgxB+mYqO5PaCSDRIAbgDgdpKjtmwm13irsnq4ATdKeYcNvUZAt0dg5NVwEQFKrJlpn45lwh/LpbWdela4K5QsXEN61tytWr81l5YSY/n4wdQH84qjd2J6vEz+W0BOAGgLlE/AMAPQCv6e4gmWYC/QF3d/7zf8P/An4AWL/T1+B2nyIAAAAASUVORK5CYII=) no-repeat scroll 0px 10px;\r\n"
" padding:15px 0 10px 40px;\r\n"
"}\r\n"
".download {\r\n"
" background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAB2klEQVR4nJ2ST2sTQRiHn5mdmj92t9XmUJIWJGq9NHrRgxQiCtqbl97FqxgaL34CP0FD8Qv07EHEU0Ew6EXEk6ci8Q9JtcXEkHR3k+zujIdUqMkmiANzmJdnHn7vzCuIWbe291tSkvhz1pr+q1L2bBwrRgvFrcZKKinfP9zI2EoKmm7Azstf3V7fXK2Wc3ujvIqzAhglwRJoS2ImQZMEBjgyoDS4hv8QGHA1WICvp9yelsA7ITBTIkwWhGBZ0Iv+MUF+c/cB8PTHt08snb+AGAACZDj8qIN6bSe/uWsBb2qV24/GBLn8yl0plY9AJ9NKeL5ICyEIQkkiZenF5XwBDAZzWItLIIR6LGfk26VVxzltJ2gFw2a0FmQLZ+bcbo/DPbcd+PrDyRb+GqRipbGlZtX92UvzjmUpEGC0JgpC3M9dL+qGz16XsvcmCgCK2/vPtTNzJ1x2kkZIRBSivh8Z2Q4+VkvZy6O8HHvWyGyITvA1qndNpxfguQNkc2CIzM0xNk5QLedCEZm1VKsf2XrAXMNrA2vVcq4ZJ4DhvCSAeSALXASuLBTW129U6oPrT969AK4Bq0AeWARs4BRgieMUEkgDmeO9ANipzDnH//nFB0KgAxwATaAFeID5DQNatLGdaXOWAAAAAElFTkSuQmCC) no-repeat scroll 0px 5px;\r\n"
" padding:4px 0 4px 20px;\r\n"
"}\r\n"
"</style>\r\n"
"<script src=\"//ajax.googleapis.com/ajax/libs/jquery/1.8.2/jquery.min.js\"></script>\r\n"
"<script> var curURL = '//'+location.hostname + location.pathname; </script>\r\n"
"<script>\r\n"
"(function($){\r\n"
" $.fn.tablesorter = function() {\r\n"
"   var $table = this;\r\n"
"   this.find('th').click(function() {\r\n"
"     var idx = $(this).index();\r\n"
"     var direction = $(this).hasClass('sort_asc');\r\n"
"     $table.tablesortby(idx,direction);\r\n"
"   });\r\n"
"   return this;\r\n"
" };\r\n"
" $.fn.tablesortby = function(idx,direction) {\r\n"
"   var $rows = this.find('tbody tr');\r\n"
"   function elementToVal(a) {\r\n"
"     var $a_elem = $(a).find('td:nth-child('+(idx+1)+')');\r\n"
"     var a_val = $a_elem.attr('data-sort') || $a_elem.text();\r\n"
"     return (a_val == parseInt(a_val) ? parseInt(a_val) : a_val);\r\n"
"   }\r\n"
"   $rows.sort(function(a,b){\r\n"
"     var a_val = elementToVal(a), b_val = elementToVal(b);\r\n"
"     return (a_val > b_val ? 1 : (a_val == b_val ? 0 : -1)) * (direction ? 1 : -1);\r\n"
"   })\r\n"
"   this.find('th').removeClass('sort_asc sort_desc');\r\n"
"   $(this).find('thead th:nth-child('+(idx+1)+')').addClass(direction ? 'sort_desc' : 'sort_asc');\r\n"
"   for(var i =0;i<$rows.length;i++)\r\n"
"     this.append($rows[i]);\r\n"
"   this.settablesortmarkers();\r\n"
"   return this;\r\n"
" }\r\n"
" $.fn.retablesort = function() {\r\n"
"   var $e = this.find('thead th.sort_asc, thead th.sort_desc');\r\n"
"   if($e.length)\r\n"
"     this.tablesortby($e.index(), $e.hasClass('sort_desc') );\r\n"
"   \r\n"
"   return this;\r\n"
" }\r\n"
" $.fn.settablesortmarkers = function() {\r\n"
"   this.find('thead th span.indicator').remove();\r\n"
"   this.find('thead th.sort_asc').append('<span class=\"indicator\">&darr;<span>');\r\n"
"   this.find('thead th.sort_desc').append('<span class=\"indicator\">&uarr;<span>');\r\n"
"   return this;\r\n"
" }\r\n"
"})(jQuery);\r\n"
"$(function(){\r\n"
" var XSRF = (document.cookie.match('(^|; )_sfm_xsrf=([^;]*)')||0)[2];\r\n"
" var MAX_UPLOAD_SIZE = 2500000;\r\n"
" var $tbody = $('#list');\r\n"
" $(window).bind('hashchange',list).trigger('hashchange');\r\n"
" $('#table').tablesorter();\r\n"
" \r\n"
" $('.delete').live('click',function(data) {\r\n"
"     var r = confirm('Do you Want to Delete '+ $(this).attr('data-file') + '?');\r\n"
"        if(r==true){\r\n"
"    var baseuri = window.location.protocol + \"//\" + window.location.host + \"/\";\r\n"
"      var uri = baseuri + 'browse'; //YK\r\n"
"     $.post(uri,{'do':'delete',file:$(this).attr('data-file'),xsrf:XSRF},function(response){\r\n"
"     list();\r\n"
"   },'json');\r\n"
"   }\r\n"
"   return false;\r\n"
" });\r\n"
" $('#mkdir').submit(function(e) {\r\n"
"   var hashval = window.location.hash.substr(1),\r\n"
"     $dir = $(this).find('[name=name]');\r\n"
"   e.preventDefault();\r\n"
"   $dir.val().length && $.post('?',{'do':'mkdir',name:$dir.val(),xsrf:XSRF,file:hashval},function(data){\r\n"
"     list();\r\n"
"   },'json');\r\n"
"   $dir.val('');\r\n"
"   return false;\r\n"
" });\r\n"
" // file upload stuff\r\n"
" $('#file_drop_target').bind('dragover',function(){\r\n"
"   $(this).addClass('drag_over');\r\n"
"   return false;\r\n"
" }).bind('dragend',function(){\r\n"
"   $(this).removeClass('drag_over');\r\n"
"   return false;\r\n"
" }).bind('drop',function(e){\r\n"
"   e.preventDefault();\r\n"
"   var files = e.originalEvent.dataTransfer.files;   \r\n"
"   uploadFile(files,0);\r\n"
"   $(this).removeClass('drag_over');\r\n"
" });\r\n"
" $('input[type=file]').change(function(e) {\r\n"
"   e.preventDefault();           \r\n"
"   uploadFile(this.files,0);\r\n"
" });\r\n"
" function uploadFile(files,i) {    //uploads all files one at a time!\r\n"
"   var folder = window.location.hash.substr(1);\r\n"
"   if(folder==\"\")\r\n"
"     folder=$('#upltargetfolder').val();\r\n"
"   if(i >= files.length) {\r\n"
"        //$('#message').text('Done!');\r\n"
"   list();     //rerun list()\r\n"
"        return;\r\n"
"    }\r\n"
"        var file = files[i]; \r\n"
"   if(file.size > MAX_UPLOAD_SIZE) {\r\n"
"     var $error_row = renderFileSizeErrorRow(file,folder);\r\n"
"     $('#upload_progress').append($error_row);\r\n"
"     window.setTimeout(function(){$error_row.fadeOut();},5000);\r\n"
"     return false;\r\n"
"   }\r\n"
"   \r\n"
"   var $row = renderFileUploadRow(file,folder);\r\n"
"   $('#upload_progress').append($row);\r\n"
"   var fd = new FormData();\r\n"
"   fd.append('file_data',file);\r\n"
"   fd.append('file',folder);\r\n"
"   fd.append('dir',folder);\r\n"
"   fd.append('xsrf',XSRF);\r\n"
"   fd.append('do','upload');\r\n"
"   var xhr = new XMLHttpRequest();\r\n"
"   \r\n"
"   xhr.open('POST', '/upload?dir='+folder);   \r\n"
"   xhr.onload = function() {\r\n"
"     $row.remove();        \r\n"
"     uploadFile(files,i+1);  //upload nex file...\r\n"
"     };\r\n"
"   xhr.upload.onprogress = function(e){\r\n"
"     if(e.lengthComputable) {\r\n"
"       $row.find('.progress').css('width',(e.loaded/e.total*100 | 0)+'%' );\r\n"
"     }\r\n"
"   };\r\n"
"     xhr.send(fd);   \r\n"
" }\r\n"
" function renderFileUploadRow(file,folder) {\r\n"
"   return $row = $('<div/>')\r\n"
"     .append( $('<span class=\"fileuploadname\" />').text( (folder ? folder+'/':'')+file.name))\r\n"
"     .append( $('<div class=\"progress_track\"><div class=\"progress\"></div></div>')  )\r\n"
"     .append( $('<span class=\"size\" />').text(formatFileSize(file.size)) )\r\n"
" };\r\n"
" function renderFileSizeErrorRow(file,folder) {\r\n"
"   return $row = $('<div class=\"error\" />')\r\n"
"     .append( $('<span class=\"fileuploadname\" />').text( 'Error: ' + (folder ? folder+'/':'')+file.name))\r\n"
"     .append( $('<span/>').html(' file size - <b>' + formatFileSize(file.size) + '</b>'\r\n"
"       +' exceeds max upload size of <b>' + formatFileSize(MAX_UPLOAD_SIZE) + '</b>')  );\r\n"
" }\r\n"
" function list() {\r\n"
"     var baseuri = window.location.protocol + \"//\" + window.location.host + \"/\";\r\n"
"     var uri = baseuri + 'browse'; //YK\r\n"
"   var hashval = window.location.hash.substr(1);\r\n"
"     $.get(uri+'?',{'do':'list','file':hashval},function(data) { //YK\r\n"
"         $tbody.empty();\r\n"
"         var datajs ;\r\n"
"     if( (typeof data == \"object\")){\r\n"
"       datajs=data;\r\n"
"     }else{\r\n"
"       datajs= JSON.parse(data); //yk\r\n"
"     }\r\n"
"     \r\n"
"     $('#breadcrumb').empty().html(renderBreadcrumbs(hashval));\r\n"
"     if (datajs.success) { //yk\r\n"
"         $.each(datajs.results, function (k, v) {\r\n"
"         $tbody.append(renderFileRow(v));\r\n"
"       });\r\n"
"         !datajs.results.length && $tbody.append('<tr><td class=\"empty\" colspan=5>This folder is empty</td></tr>')\r\n"
"         datajs.is_writable ? $('body').removeClass('no_write') : $('body').addClass('no_write'); //yk\r\n"
"     } else {\r\n"
"         console.warn(\"error reading file list\");//\"datajs.error.msg); //yk\r\n"
"     }\r\n"
"     $('#table').retablesort();\r\n"
"   },'json');\r\n"
" }\r\n"
" function renderFileRow(data) {\r\n"
"   var $link = $('<a class=\"name\" />')\r\n"
"     .attr('href',encodeURIComponent(data.name))\r\n"
"     .text(data.name);\r\n"
"   var $dl_link = $('<a/>').attr('href',encodeURIComponent(data.name)+'?download=true')\r\n"
"     .addClass('download').text('download');\r\n"
"        var $flash_avrlink = $('    <a/>').attr('href','flashavr?fname='+encodeURIComponent(data.name))\r\n"
"     .addClass('download').text('Flash AVR');\r\n"
"   var $flash_esplink = $('    <a/>').attr('href','flashesp?fname='+encodeURIComponent(data.name))\r\n"
"     .addClass('download').text('Flash ESP');\r\n"
"     \r\n"
"         \r\n"
"   var $delete_link = $('<a href=\"#\" />').attr('data-file',data.name).addClass('delete').text('delete');\r\n"
"   var perms = [];\r\n"
"   if(data.is_readable) perms.push('read');\r\n"
"   if(data.is_writable) perms.push('write');\r\n"
"   if(data.is_executable) perms.push('exec');\r\n"
"   var $html = $('<tr />')\r\n"
"     .addClass(data.is_dir ? 'is_dir' : '')\r\n"
"     .append( $('<td class=\"first\" />').append($link) )\r\n"
"     .append( $('<td/>').attr('data-sort',data.is_dir ? -1 : data.size)\r\n"
"       .html($('<span class=\"size\" />').text(formatFileSize(data.size))) ) \r\n"
"     .append( $('<td/>').attr('data-sort',data.mtime).text(formatTimestamp(data.mtime)) )\r\n"
"     .append( $('<td/>').text(perms.join('+')) )\r\n"
"     .append( $('<td/>').append($dl_link).append( data.is_deleteable ? $delete_link : '')\r\n"
"     .append( data.name.indexOf('.avr') > 0 ? $flash_avrlink : ''  )\r\n"
"     .append( data.name.indexOf('.bin') > 0 ? $flash_esplink : ''  ))\r\n"
"   return $html;\r\n"
" }\r\n"
" function renderBreadcrumbs(path) {\r\n"
"   var base = \"\",\r\n"
"     $html = $('<div/>').append( $('<a href=#>Home</a></div>') );\r\n"
"   $.each(path.split('/'),function(k,v){\r\n"
"     if(v) {\r\n"
"       $html.append( $('<span/>').text(' ? ') )\r\n"
"         .append( $('<a/>').attr('href','#'+base+v).text(v) );\r\n"
"       base += v + '/';\r\n"
"     }\r\n"
"   });\r\n"
"   return $html;\r\n"
" }\r\n"
" function formatTimestamp(unix_timestamp) {\r\n"
"   var m = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'];\r\n"
"   var d = new Date(unix_timestamp*1000);\r\n"
"   return [m[d.getMonth()],' ',d.getDate(),', ',d.getFullYear(),\" \",\r\n"
"     (d.getHours() % 12 || 12),\":\",(d.getMinutes() < 10 ? '0' : '')+d.getMinutes(),\r\n"
"     \" \",d.getHours() >= 12 ? 'PM' : 'AM'].join('');\r\n"
" }\r\n"
" function formatFileSize(bytes) {\r\n"
"   var s = ['bytes', 'KB','MB','GB','TB','PB','EB'];\r\n"
"   for(var pos = 0;bytes >= 1000; pos++,bytes /= 1024);\r\n"
"   var d = Math.round(bytes*10);\r\n"
"   return pos ? [parseInt(d/10),\".\",d%10,\" \",s[pos]].join('') : bytes + ' bytes';\r\n"
" }\r\n"
"})\r\n"
"</script>\r\n"
"</head><body>\r\n"
"<div id=\"top\">\r\n"
" <div>\r\n"
" <b>Target folder </b>\r\n"
" <input type=\"text\" id=\"upltargetfolder\" />\r\n"
" </div>\r\n"
" <div id=\"file_drop_target\">\r\n"
"   Drag Files Here To Upload\r\n"
"   <b>or</b>\r\n"
"   <input type=\"file\" multiple />\r\n"
" </div>\r\n"
" <div id=\"breadcrumb\">&nbsp;</div>\r\n"
"</div>\r\n"
"<div id=\"upload_progress\"></div>\r\n"
"<table id=\"table\"><thead><tr>\r\n"
" <th>Name</th>\r\n"
" <th>Size</th>\r\n"
" <th>Modified</th>\r\n"
" <th>Permissions</th>\r\n"
" <th>Actions</th>\r\n"
"</tr></thead><tbody id=\"list\">\r\n"
"</tbody></table>\r\n"
"<br><br>\r\n"
"<input type=button onClick=\"location.href='../restartesp'\" value='Press to Restart (when finished)'>\r\n"
"<footer>Simple ESP8266 SPIFFs filemanager</footer>\r\n"
"</body></html>\r\n";