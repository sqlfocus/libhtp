本文档摘录libhtp的处理流程


* 处理request请求数据
--htp_connp_req_data()
  --htp_connp_REQ_IDLE()
  --htp_connp_REQ_LINE()
  --htp_connp_REQ_PROTOCOL()
  --htp_connp_REQ_HEADERS()
  --htp_connp_REQ_BODY_DETERMINE()
  --htp_connp_REQ_FINALIZE()

* 处理response应答数据
--htp_connp_res_data()
  --htp_connp_RES_IDLE()
