/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81584
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
    var_14 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    var_15 += ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(8270516972588124283LL)))))) ? ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [(unsigned short)8] [i_1])) : (((/* implicit */int) arr_5 [i_0])))))) : (((/* implicit */int) (!(arr_3 [i_1 - 1] [i_0 + 4]))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8270516972588124292LL)) ? (((/* implicit */unsigned long long int) 2147483647)) : (18446744073709551615ULL)))) ? (((unsigned int) arr_1 [i_0 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))))))));
                }
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_17 ^= ((/* implicit */short) -2282693629969208827LL);
                    var_18 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-103))))) : (((((/* implicit */_Bool) 4ULL)) ? (arr_2 [i_0]) : (arr_2 [i_0]))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 - 1])))));
                    arr_8 [i_1] [i_1] [i_1] = ((unsigned int) 4294967287U);
                }
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_3 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_9);
}
