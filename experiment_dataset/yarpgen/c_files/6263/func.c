/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6263
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (((~(36028792723996672ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 4])) <= (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2] [(short)18]))))))));
                    var_16 |= ((/* implicit */unsigned int) arr_8 [(unsigned char)7] [i_1] [i_2] [i_2]);
                    var_17 ^= ((/* implicit */unsigned int) arr_3 [i_2] [i_1 + 1]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((unsigned short) var_7));
    var_19 ^= var_15;
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((long long int) 4294967295U)))));
}
