/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60937
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    var_20 = ((/* implicit */int) var_11);
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((var_3) ? (arr_1 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((/* implicit */int) var_17)))))));
                }
                var_22 = ((/* implicit */int) ((max((((long long int) arr_1 [i_1 - 1] [i_1])), (((/* implicit */long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_0))))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [6U] [i_1])) : (arr_5 [i_0 - 3] [i_1 + 2] [i_1]))))));
                /* LoopNest 3 */
                for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((((arr_12 [i_0 + 1] [i_3] [i_1 + 1]) | (arr_7 [i_0 - 3]))), (((/* implicit */int) var_17))));
                                arr_16 [i_0] [(unsigned char)9] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) var_15);
                                var_24 *= ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_1 + 2]))), (((((/* implicit */int) arr_14 [i_0 - 1] [i_0] [i_1 - 1])) + (((/* implicit */int) arr_14 [i_0 - 2] [i_0] [i_1 - 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_13))));
    var_26 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1452681476)) ? (((/* implicit */int) (unsigned char)0)) : (-1452681460)))) / (((unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))));
}
