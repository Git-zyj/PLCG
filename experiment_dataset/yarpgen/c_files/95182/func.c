/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95182
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), ((~(2305843008676823040ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_9);
        var_12 = ((/* implicit */_Bool) max((((/* implicit */int) var_0)), ((+(((/* implicit */int) min(((unsigned char)91), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))))));
    }
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 6ULL)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_7)) | (((/* implicit */int) (signed char)-100))))))));
}
