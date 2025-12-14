/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90820
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
    var_10 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)45675))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_8 [i_2 - 3] [i_2 - 3] [i_2 - 4] [i_2])) ? (arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 4] [i_2]) : (((/* implicit */int) var_7)))));
                    var_12 = ((/* implicit */unsigned long long int) (~(-2015827288)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) var_5);
    var_14 -= 18446744073709551615ULL;
    var_15 = ((/* implicit */unsigned char) var_8);
}
