/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88315
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (unsigned short)23993)))))) ? (min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)116)))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_2)))))) : (((((/* implicit */int) var_15)) / (((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)96)))))));
        var_18 = ((/* implicit */signed char) (-(((long long int) 981189335266161921ULL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_19 = ((/* implicit */long long int) var_14);
            var_20 = ((/* implicit */unsigned char) (((_Bool)1) ? (5638243583703216161ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5))))));
        }
        var_21 = ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) : (((unsigned long long int) (short)2188))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((signed char) min(((-(4294967295U))), (((9U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)84)) | (((/* implicit */int) ((short) var_6)))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((/* implicit */long long int) (short)-32741)), (-1LL))))));
    }
}
