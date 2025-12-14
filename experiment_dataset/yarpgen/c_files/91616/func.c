/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91616
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
    var_17 *= var_8;
    var_18 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) var_0);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_0 + 2]))));
                                arr_14 [i_0 + 1] [i_1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) (unsigned short)7785)))) : (((/* implicit */int) arr_0 [i_1]))));
                                var_20 += ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [(_Bool)1])) != (((/* implicit */int) arr_5 [i_1])))))));
                            }
                            var_21 ^= ((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1] [0ULL]));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) var_16);
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_0 - 2] [i_1])), (arr_10 [i_1])))) ? (arr_8 [i_1] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_0 - 1])), (arr_10 [i_1])))))));
            }
        } 
    } 
}
