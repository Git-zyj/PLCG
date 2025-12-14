/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68211
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 -= ((/* implicit */unsigned long long int) 365295851U);
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */int) (~(((18446744073709551600ULL) & (18446744073709551615ULL)))));
                }
            } 
        } 
        var_13 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? ((+(3338152427U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))), (arr_8 [i_0] [i_0])));
    }
}
