#ifndef CPR_SSLOPTIONS_H
#define CPR_SSLOPTIONS_H

#include <string>

namespace cpr {

class VerifySsl {
  public:
    VerifySsl() {}
    VerifySsl(bool verify);

    operator bool() const;

  private:
    bool verify_ = true;
};

class SslKey {
public:
	SslKey(std::string key) noexcept : key_(std::move(key)) {
	}

	const std::string& Key() const noexcept {
		return key_;
	}
private:
	const std::string key_;
};

class SslCert {
public:
	SslCert(std::string cert) noexcept : cert_(std::move(cert)) {
	}

	const std::string& Certificate() const noexcept {
		return cert_;
	}
private:
	const std::string cert_;
};

class CA {
public:
	CA(std::string auth) noexcept : auth_(std::move(auth)) {
	}

	const std::string& Auth() const noexcept {
		return auth_;
	}
private:
	const std::string auth_;
};

} // namespace cpr

#endif
