#ifndef _CRYPTOAPI_H_
#define _CRYPTOAPI_H_

int SSL_CTX_use_CryptoAPI_certificate(SSL_CTX *ssl_ctx, const char *cert_prop);

int SSL_CTX_use_CryptoAPI_certificate_ntls(SSL_CTX* ssl_ctx, const char* sign_cert_prop, const char* enc_cert_prop);

#endif /* !_CRYPTOAPI_H_ */
