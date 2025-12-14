/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7674
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
    var_20 = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) (unsigned char)19))))))));
    var_21 += var_2;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [11] = ((int) 2147483647);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_22 = (-(((((/* implicit */int) var_11)) >> (((arr_5 [i_2] [i_0]) + (6027820729964912013LL))))));
                    arr_7 [13LL] [i_1] [i_1] [13LL] = ((/* implicit */unsigned char) var_16);
                }
            } 
        } 
    }
    var_23 ^= ((/* implicit */int) var_19);
    var_24 = ((/* implicit */_Bool) ((long long int) ((_Bool) var_15)));
}
