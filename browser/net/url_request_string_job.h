// Copyright (c) 2013 GitHub, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "net/url_request/url_request_simple_job.h"

#ifndef ATOM_BROWSER_NET_URL_REQUEST_STRING_JOB_H_
#define ATOM_BROWSER_NET_URL_REQUEST_STRING_JOB_H_

namespace atom {

class URLRequestStringJob : public net::URLRequestSimpleJob {
 public:
  URLRequestStringJob(net::URLRequest* request,
                      net::NetworkDelegate* network_delegate,
                      const std::string& mime_type,
                      const std::string& charset,
                      const std::string& data);

  // URLRequestSimpleJob:
  virtual int GetData(std::string* mime_type,
                      std::string* charset,
                      std::string* data,
                      const net::CompletionCallback& callback) const OVERRIDE;

 private:
  std::string mime_type_;
  std::string charset_;
  std::string data_;

  DISALLOW_COPY_AND_ASSIGN(URLRequestStringJob);
};

}  // namespace atom

#endif  // ATOM_BROWSER_NET_URL_REQUEST_STRING_JOB_H_
