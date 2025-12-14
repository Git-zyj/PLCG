/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87220
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) arr_1 [i_1]);
                    var_22 = ((/* implicit */long long int) arr_5 [i_2] [i_1]);
                }
                for (long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3] [i_0])) ? (((/* implicit */long long int) arr_8 [i_3] [i_1] [i_0] [i_0])) : (-9223372036854775805LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1])))));
                    arr_10 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_1] [i_0])) ? (42431788115955226ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_3])))))))))));
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((arr_4 [i_4] [i_6]) >> (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_6] [i_5] [i_4] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_4] [i_5] [i_6]))) : (((((/* implicit */_Bool) 42431788115955226ULL)) ? (arr_13 [i_0] [i_1]) : (((/* implicit */long long int) var_14))))));
                                arr_18 [i_0] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) / (arr_0 [i_4])));
                                arr_19 [i_6] [i_5] [i_4] [i_5] [i_0] = ((/* implicit */signed char) ((arr_4 [i_5] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) (signed char)76);
                }
                var_26 = ((((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1])) > (((int) (-(((/* implicit */int) (unsigned char)23))))));
            }
        } 
    } 
}
