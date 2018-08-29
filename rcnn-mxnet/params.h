#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>
#include <vector>

class Params {
 public:
  uint32_t img_short_side = 600;
  uint32_t img_long_side = 1000;
  float rpn_feat_stride = 16;
  std::vector<float> rpn_anchor_scales{8.f, 16.f, 32.f};
  std::vector<float> rpn_anchor_ratios{0.5f, 1.f, 2.f};
  int rpn_pre_nms_topk = 12000;
  int rpn_post_nms_topk = 2000;
  float rpn_nms_thresh = 0.7f;
  int rpn_min_size = 16;
  int rpn_batch_rois = 256;
  int rpn_allowed_border = 0;
  float rpn_fg_fraction = 0.5f;
  float rpn_fg_overlap = 0.7f;
  float rpn_bg_overlap = 0.3f;
  int rcnn_num_classes = 21;
  int rcnn_feat_stride = 16;
  std::vector<float> rcnn_pooled_size{14, 14};
  int rcnn_batch_size = 1;
  int rcnn_batch_rois = 128;
  float rcnn_fg_fraction = 0.25f;
  float rcnn_fg_overlap = 0.5f;
  std::vector<float> rcnn_bbox_stds{0.1f, 0.1f, 0.2f, 0.2f};
};

#endif  // PARAMS_H
