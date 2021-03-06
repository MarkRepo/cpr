#ifndef CPR_DIGEST_H
#define CPR_DIGEST_H

#include "cpr/auth.h"

namespace cpr {

class Digest : public Authentication {
  public:
    Digest(const std::string&& username, const std::string&& password)
            : Authentication{std::move(username), std::move(password)} {}

    ~Digest() override = default;

    const char* GetAuthString() const noexcept;
};

} // namespace cpr

#endif
