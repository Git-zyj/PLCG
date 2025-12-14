/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93643
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
    var_12 = ((/* implicit */short) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */long long int) (short)-8555)), (var_5))))))));
    var_13 = ((/* implicit */int) var_8);
    var_14 = (unsigned short)17894;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((arr_0 [i_0 - 2]) + (((/* implicit */int) arr_2 [i_0] [i_0 + 1])))) | (((/* implicit */int) (unsigned short)54208))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (~((~(9223372036854775805LL)))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2972936571U)) ? (((/* implicit */int) arr_8 [i_4 + 3] [i_4] [i_4] [i_4 + 3] [i_3 + 1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_4] [3LL] [i_4] [i_4 - 1] [i_3 + 1] [i_0 + 2]))))) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (var_5))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2854)) ? (((/* implicit */int) (short)-2854)) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-124)) < (((/* implicit */int) (signed char)3)))))) : (max((1322030725U), (((/* implicit */unsigned int) (unsigned char)128))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned short) var_0);
}
