/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74310
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((9536415015430343117ULL), (((unsigned long long int) max(((unsigned short)23271), (((/* implicit */unsigned short) (_Bool)0)))))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) (~(min((9536415015430343117ULL), (8910329058279208512ULL)))));
            var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)37)) ? (4243141644U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-87)) / (((/* implicit */int) (short)-15775))));
}
