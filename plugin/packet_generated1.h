// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PACKET1_KMEANS_H_
#define FLATBUFFERS_GENERATED_PACKET1_KMEANS_H_

#include "flatbuffers/flatbuffers.h"

namespace kmeans {

struct Packet;

struct Packet FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_DURATION = 4,
    VT_PROTOCOL_TYPE = 6,
    VT_SERVICE = 8,
    VT_FLAG = 10,
    VT_SRC_BYTES = 12,
    VT_DST_BYTES = 14,
    VT_LAND = 16,
    VT_WRONG_FRAGMENT = 18,
    VT_URGENT = 20,
    VT_HOT = 22,
    VT_COUNT = 24,
    VT_SRV_COUNT = 26,
    VT_SERROR_RATE = 28,
    VT_SRV_SERROR_RATE = 30,
    VT_RERROR_RATE = 32,
    VT_SRV_RERROR_RATE = 34,
    VT_SAME_SRV_RATE = 36,
    VT_DIFF_SRV_RATE = 38,
    VT_SRV_DIFF_HOST_RATE = 40,
    VT_DST_HOST_COUNT = 42,
    VT_DST_HOST_SRV_COUNT = 44,
    VT_DST_HOST_SAME_SRV_RATE = 46,
    VT_DST_HOST_DIFF_SRV_RATE = 48,
    VT_DST_HOST_SAME_SRC_PORT_RATE = 50,
    VT_DST_HOST_SRV_DIFF_HOST_RATE = 52,
    VT_DST_HOST_SERROR_RATE = 54,
    VT_DST_HOST_SRV_SERROR_RATE = 56,
    VT_DST_HOST_RERROR_RATE = 58,
    VT_DST_HOST_SRV_RERROR_RATE = 60
  };
  int32_t duration() const {
    return GetField<int32_t>(VT_DURATION, 0);
  }
  const flatbuffers::String *protocol_type() const {
    return GetPointer<const flatbuffers::String *>(VT_PROTOCOL_TYPE);
  }
  const flatbuffers::String *service() const {
    return GetPointer<const flatbuffers::String *>(VT_SERVICE);
  }
  const flatbuffers::String *flag() const {
    return GetPointer<const flatbuffers::String *>(VT_FLAG);
  }
  int32_t src_bytes() const {
    return GetField<int32_t>(VT_SRC_BYTES, 0);
  }
  int32_t dst_bytes() const {
    return GetField<int32_t>(VT_DST_BYTES, 0);
  }
  int32_t land() const {
    return GetField<int32_t>(VT_LAND, 0);
  }
  int32_t wrong_fragment() const {
    return GetField<int32_t>(VT_WRONG_FRAGMENT, 0);
  }
  int32_t urgent() const {
    return GetField<int32_t>(VT_URGENT, 0);
  }
  int32_t hot() const {
    return GetField<int32_t>(VT_HOT, 0);
  }
  int32_t count() const {
    return GetField<int32_t>(VT_COUNT, 0);
  }
  int32_t srv_count() const {
    return GetField<int32_t>(VT_SRV_COUNT, 0);
  }
  float serror_rate() const {
    return GetField<float>(VT_SERROR_RATE, 0.0f);
  }
  float srv_serror_rate() const {
    return GetField<float>(VT_SRV_SERROR_RATE, 0.0f);
  }
  float rerror_rate() const {
    return GetField<float>(VT_RERROR_RATE, 0.0f);
  }
  float srv_rerror_rate() const {
    return GetField<float>(VT_SRV_RERROR_RATE, 0.0f);
  }
  float same_srv_rate() const {
    return GetField<float>(VT_SAME_SRV_RATE, 0.0f);
  }
  float diff_srv_rate() const {
    return GetField<float>(VT_DIFF_SRV_RATE, 0.0f);
  }
  float srv_diff_host_rate() const {
    return GetField<float>(VT_SRV_DIFF_HOST_RATE, 0.0f);
  }
  int32_t dst_host_count() const {
    return GetField<int32_t>(VT_DST_HOST_COUNT, 0);
  }
  int32_t dst_host_srv_count() const {
    return GetField<int32_t>(VT_DST_HOST_SRV_COUNT, 0);
  }
  float dst_host_same_srv_rate() const {
    return GetField<float>(VT_DST_HOST_SAME_SRV_RATE, 0.0f);
  }
  float dst_host_diff_srv_rate() const {
    return GetField<float>(VT_DST_HOST_DIFF_SRV_RATE, 0.0f);
  }
  float dst_host_same_src_port_rate() const {
    return GetField<float>(VT_DST_HOST_SAME_SRC_PORT_RATE, 0.0f);
  }
  float dst_host_srv_diff_host_rate() const {
    return GetField<float>(VT_DST_HOST_SRV_DIFF_HOST_RATE, 0.0f);
  }
  float dst_host_serror_rate() const {
    return GetField<float>(VT_DST_HOST_SERROR_RATE, 0.0f);
  }
  float dst_host_srv_serror_rate() const {
    return GetField<float>(VT_DST_HOST_SRV_SERROR_RATE, 0.0f);
  }
  float dst_host_rerror_rate() const {
    return GetField<float>(VT_DST_HOST_RERROR_RATE, 0.0f);
  }
  float dst_host_srv_rerror_rate() const {
    return GetField<float>(VT_DST_HOST_SRV_RERROR_RATE, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_DURATION) &&
           VerifyOffset(verifier, VT_PROTOCOL_TYPE) &&
           verifier.Verify(protocol_type()) &&
           VerifyOffset(verifier, VT_SERVICE) &&
           verifier.Verify(service()) &&
           VerifyOffset(verifier, VT_FLAG) &&
           verifier.Verify(flag()) &&
           VerifyField<int32_t>(verifier, VT_SRC_BYTES) &&
           VerifyField<int32_t>(verifier, VT_DST_BYTES) &&
           VerifyField<int32_t>(verifier, VT_LAND) &&
           VerifyField<int32_t>(verifier, VT_WRONG_FRAGMENT) &&
           VerifyField<int32_t>(verifier, VT_URGENT) &&
           VerifyField<int32_t>(verifier, VT_HOT) &&
           VerifyField<int32_t>(verifier, VT_COUNT) &&
           VerifyField<int32_t>(verifier, VT_SRV_COUNT) &&
           VerifyField<float>(verifier, VT_SERROR_RATE) &&
           VerifyField<float>(verifier, VT_SRV_SERROR_RATE) &&
           VerifyField<float>(verifier, VT_RERROR_RATE) &&
           VerifyField<float>(verifier, VT_SRV_RERROR_RATE) &&
           VerifyField<float>(verifier, VT_SAME_SRV_RATE) &&
           VerifyField<float>(verifier, VT_DIFF_SRV_RATE) &&
           VerifyField<float>(verifier, VT_SRV_DIFF_HOST_RATE) &&
           VerifyField<int32_t>(verifier, VT_DST_HOST_COUNT) &&
           VerifyField<int32_t>(verifier, VT_DST_HOST_SRV_COUNT) &&
           VerifyField<float>(verifier, VT_DST_HOST_SAME_SRV_RATE) &&
           VerifyField<float>(verifier, VT_DST_HOST_DIFF_SRV_RATE) &&
           VerifyField<float>(verifier, VT_DST_HOST_SAME_SRC_PORT_RATE) &&
           VerifyField<float>(verifier, VT_DST_HOST_SRV_DIFF_HOST_RATE) &&
           VerifyField<float>(verifier, VT_DST_HOST_SERROR_RATE) &&
           VerifyField<float>(verifier, VT_DST_HOST_SRV_SERROR_RATE) &&
           VerifyField<float>(verifier, VT_DST_HOST_RERROR_RATE) &&
           VerifyField<float>(verifier, VT_DST_HOST_SRV_RERROR_RATE) &&
           verifier.EndTable();
  }
};

struct PacketBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_duration(int32_t duration) {
    fbb_.AddElement<int32_t>(Packet::VT_DURATION, duration, 0);
  }
  void add_protocol_type(flatbuffers::Offset<flatbuffers::String> protocol_type) {
    fbb_.AddOffset(Packet::VT_PROTOCOL_TYPE, protocol_type);
  }
  void add_service(flatbuffers::Offset<flatbuffers::String> service) {
    fbb_.AddOffset(Packet::VT_SERVICE, service);
  }
  void add_flag(flatbuffers::Offset<flatbuffers::String> flag) {
    fbb_.AddOffset(Packet::VT_FLAG, flag);
  }
  void add_src_bytes(int32_t src_bytes) {
    fbb_.AddElement<int32_t>(Packet::VT_SRC_BYTES, src_bytes, 0);
  }
  void add_dst_bytes(int32_t dst_bytes) {
    fbb_.AddElement<int32_t>(Packet::VT_DST_BYTES, dst_bytes, 0);
  }
  void add_land(int32_t land) {
    fbb_.AddElement<int32_t>(Packet::VT_LAND, land, 0);
  }
  void add_wrong_fragment(int32_t wrong_fragment) {
    fbb_.AddElement<int32_t>(Packet::VT_WRONG_FRAGMENT, wrong_fragment, 0);
  }
  void add_urgent(int32_t urgent) {
    fbb_.AddElement<int32_t>(Packet::VT_URGENT, urgent, 0);
  }
  void add_hot(int32_t hot) {
    fbb_.AddElement<int32_t>(Packet::VT_HOT, hot, 0);
  }
  void add_count(int32_t count) {
    fbb_.AddElement<int32_t>(Packet::VT_COUNT, count, 0);
  }
  void add_srv_count(int32_t srv_count) {
    fbb_.AddElement<int32_t>(Packet::VT_SRV_COUNT, srv_count, 0);
  }
  void add_serror_rate(float serror_rate) {
    fbb_.AddElement<float>(Packet::VT_SERROR_RATE, serror_rate, 0.0f);
  }
  void add_srv_serror_rate(float srv_serror_rate) {
    fbb_.AddElement<float>(Packet::VT_SRV_SERROR_RATE, srv_serror_rate, 0.0f);
  }
  void add_rerror_rate(float rerror_rate) {
    fbb_.AddElement<float>(Packet::VT_RERROR_RATE, rerror_rate, 0.0f);
  }
  void add_srv_rerror_rate(float srv_rerror_rate) {
    fbb_.AddElement<float>(Packet::VT_SRV_RERROR_RATE, srv_rerror_rate, 0.0f);
  }
  void add_same_srv_rate(float same_srv_rate) {
    fbb_.AddElement<float>(Packet::VT_SAME_SRV_RATE, same_srv_rate, 0.0f);
  }
  void add_diff_srv_rate(float diff_srv_rate) {
    fbb_.AddElement<float>(Packet::VT_DIFF_SRV_RATE, diff_srv_rate, 0.0f);
  }
  void add_srv_diff_host_rate(float srv_diff_host_rate) {
    fbb_.AddElement<float>(Packet::VT_SRV_DIFF_HOST_RATE, srv_diff_host_rate, 0.0f);
  }
  void add_dst_host_count(int32_t dst_host_count) {
    fbb_.AddElement<int32_t>(Packet::VT_DST_HOST_COUNT, dst_host_count, 0);
  }
  void add_dst_host_srv_count(int32_t dst_host_srv_count) {
    fbb_.AddElement<int32_t>(Packet::VT_DST_HOST_SRV_COUNT, dst_host_srv_count, 0);
  }
  void add_dst_host_same_srv_rate(float dst_host_same_srv_rate) {
    fbb_.AddElement<float>(Packet::VT_DST_HOST_SAME_SRV_RATE, dst_host_same_srv_rate, 0.0f);
  }
  void add_dst_host_diff_srv_rate(float dst_host_diff_srv_rate) {
    fbb_.AddElement<float>(Packet::VT_DST_HOST_DIFF_SRV_RATE, dst_host_diff_srv_rate, 0.0f);
  }
  void add_dst_host_same_src_port_rate(float dst_host_same_src_port_rate) {
    fbb_.AddElement<float>(Packet::VT_DST_HOST_SAME_SRC_PORT_RATE, dst_host_same_src_port_rate, 0.0f);
  }
  void add_dst_host_srv_diff_host_rate(float dst_host_srv_diff_host_rate) {
    fbb_.AddElement<float>(Packet::VT_DST_HOST_SRV_DIFF_HOST_RATE, dst_host_srv_diff_host_rate, 0.0f);
  }
  void add_dst_host_serror_rate(float dst_host_serror_rate) {
    fbb_.AddElement<float>(Packet::VT_DST_HOST_SERROR_RATE, dst_host_serror_rate, 0.0f);
  }
  void add_dst_host_srv_serror_rate(float dst_host_srv_serror_rate) {
    fbb_.AddElement<float>(Packet::VT_DST_HOST_SRV_SERROR_RATE, dst_host_srv_serror_rate, 0.0f);
  }
  void add_dst_host_rerror_rate(float dst_host_rerror_rate) {
    fbb_.AddElement<float>(Packet::VT_DST_HOST_RERROR_RATE, dst_host_rerror_rate, 0.0f);
  }
  void add_dst_host_srv_rerror_rate(float dst_host_srv_rerror_rate) {
    fbb_.AddElement<float>(Packet::VT_DST_HOST_SRV_RERROR_RATE, dst_host_srv_rerror_rate, 0.0f);
  }
  explicit PacketBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PacketBuilder &operator=(const PacketBuilder &);
  flatbuffers::Offset<Packet> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Packet>(end);
    return o;
  }
};

inline flatbuffers::Offset<Packet> CreatePacket(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t duration = 0,
    flatbuffers::Offset<flatbuffers::String> protocol_type = 0,
    flatbuffers::Offset<flatbuffers::String> service = 0,
    flatbuffers::Offset<flatbuffers::String> flag = 0,
    int32_t src_bytes = 0,
    int32_t dst_bytes = 0,
    int32_t land = 0,
    int32_t wrong_fragment = 0,
    int32_t urgent = 0,
    int32_t hot = 0,
    int32_t count = 0,
    int32_t srv_count = 0,
    float serror_rate = 0.0f,
    float srv_serror_rate = 0.0f,
    float rerror_rate = 0.0f,
    float srv_rerror_rate = 0.0f,
    float same_srv_rate = 0.0f,
    float diff_srv_rate = 0.0f,
    float srv_diff_host_rate = 0.0f,
    int32_t dst_host_count = 0,
    int32_t dst_host_srv_count = 0,
    float dst_host_same_srv_rate = 0.0f,
    float dst_host_diff_srv_rate = 0.0f,
    float dst_host_same_src_port_rate = 0.0f,
    float dst_host_srv_diff_host_rate = 0.0f,
    float dst_host_serror_rate = 0.0f,
    float dst_host_srv_serror_rate = 0.0f,
    float dst_host_rerror_rate = 0.0f,
    float dst_host_srv_rerror_rate = 0.0f) {
  PacketBuilder builder_(_fbb);
  builder_.add_dst_host_srv_rerror_rate(dst_host_srv_rerror_rate);
  builder_.add_dst_host_rerror_rate(dst_host_rerror_rate);
  builder_.add_dst_host_srv_serror_rate(dst_host_srv_serror_rate);
  builder_.add_dst_host_serror_rate(dst_host_serror_rate);
  builder_.add_dst_host_srv_diff_host_rate(dst_host_srv_diff_host_rate);
  builder_.add_dst_host_same_src_port_rate(dst_host_same_src_port_rate);
  builder_.add_dst_host_diff_srv_rate(dst_host_diff_srv_rate);
  builder_.add_dst_host_same_srv_rate(dst_host_same_srv_rate);
  builder_.add_dst_host_srv_count(dst_host_srv_count);
  builder_.add_dst_host_count(dst_host_count);
  builder_.add_srv_diff_host_rate(srv_diff_host_rate);
  builder_.add_diff_srv_rate(diff_srv_rate);
  builder_.add_same_srv_rate(same_srv_rate);
  builder_.add_srv_rerror_rate(srv_rerror_rate);
  builder_.add_rerror_rate(rerror_rate);
  builder_.add_srv_serror_rate(srv_serror_rate);
  builder_.add_serror_rate(serror_rate);
  builder_.add_srv_count(srv_count);
  builder_.add_count(count);
  builder_.add_hot(hot);
  builder_.add_urgent(urgent);
  builder_.add_wrong_fragment(wrong_fragment);
  builder_.add_land(land);
  builder_.add_dst_bytes(dst_bytes);
  builder_.add_src_bytes(src_bytes);
  builder_.add_flag(flag);
  builder_.add_service(service);
  builder_.add_protocol_type(protocol_type);
  builder_.add_duration(duration);
  return builder_.Finish();
}

inline flatbuffers::Offset<Packet> CreatePacketDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t duration = 0,
    const char *protocol_type = nullptr,
    const char *service = nullptr,
    const char *flag = nullptr,
    int32_t src_bytes = 0,
    int32_t dst_bytes = 0,
    int32_t land = 0,
    int32_t wrong_fragment = 0,
    int32_t urgent = 0,
    int32_t hot = 0,
    int32_t count = 0,
    int32_t srv_count = 0,
    float serror_rate = 0.0f,
    float srv_serror_rate = 0.0f,
    float rerror_rate = 0.0f,
    float srv_rerror_rate = 0.0f,
    float same_srv_rate = 0.0f,
    float diff_srv_rate = 0.0f,
    float srv_diff_host_rate = 0.0f,
    int32_t dst_host_count = 0,
    int32_t dst_host_srv_count = 0,
    float dst_host_same_srv_rate = 0.0f,
    float dst_host_diff_srv_rate = 0.0f,
    float dst_host_same_src_port_rate = 0.0f,
    float dst_host_srv_diff_host_rate = 0.0f,
    float dst_host_serror_rate = 0.0f,
    float dst_host_srv_serror_rate = 0.0f,
    float dst_host_rerror_rate = 0.0f,
    float dst_host_srv_rerror_rate = 0.0f) {
  auto protocol_type__ = protocol_type ? _fbb.CreateString(protocol_type) : 0;
  auto service__ = service ? _fbb.CreateString(service) : 0;
  auto flag__ = flag ? _fbb.CreateString(flag) : 0;
  return kmeans::CreatePacket(
      _fbb,
      duration,
      protocol_type__,
      service__,
      flag__,
      src_bytes,
      dst_bytes,
      land,
      wrong_fragment,
      urgent,
      hot,
      count,
      srv_count,
      serror_rate,
      srv_serror_rate,
      rerror_rate,
      srv_rerror_rate,
      same_srv_rate,
      diff_srv_rate,
      srv_diff_host_rate,
      dst_host_count,
      dst_host_srv_count,
      dst_host_same_srv_rate,
      dst_host_diff_srv_rate,
      dst_host_same_src_port_rate,
      dst_host_srv_diff_host_rate,
      dst_host_serror_rate,
      dst_host_srv_serror_rate,
      dst_host_rerror_rate,
      dst_host_srv_rerror_rate);
}

inline const kmeans::Packet *GetPacket(const void *buf) {
  return flatbuffers::GetRoot<kmeans::Packet>(buf);
}

inline const kmeans::Packet *GetSizePrefixedPacket(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<kmeans::Packet>(buf);
}

inline bool VerifyPacketBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<kmeans::Packet>(nullptr);
}

inline bool VerifySizePrefixedPacketBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<kmeans::Packet>(nullptr);
}

inline void FinishPacketBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<kmeans::Packet> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedPacketBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<kmeans::Packet> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace kmeans

#endif  // FLATBUFFERS_GENERATED_PACKET1_KMEANS_H_
