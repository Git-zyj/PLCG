/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74261
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
    var_20 ^= ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_18)), (arr_2 [i_1] [i_0])))) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) arr_0 [i_0]))))));
                arr_8 [i_0] [i_1] [5ULL] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) var_17)) : ((-(((/* implicit */int) var_0))))))) : ((-((-(var_15)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    for (short i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        {
                            arr_18 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_12 [i_2] [i_2])), (max((max((((/* implicit */unsigned long long int) var_13)), (var_10))), (((/* implicit */unsigned long long int) ((2992213076U) | (1302754201U))))))));
                            /* LoopSeq 1 */
                            for (signed char i_6 = 2; i_6 < 13; i_6 += 2) 
                            {
                                var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((arr_20 [i_5] [i_5] [i_5 + 1] [2LL] [i_5 + 2]), (((/* implicit */unsigned short) arr_19 [i_5] [i_5] [i_5 + 1] [i_5] [(unsigned short)3] [5U] [i_5 + 1]))))), (((var_10) & (((/* implicit */unsigned long long int) min((arr_21 [i_2] [i_2] [(_Bool)1] [i_2] [13]), (((/* implicit */unsigned int) var_19)))))))));
                                arr_22 [i_2] [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6 + 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (var_11) : (((/* implicit */long long int) var_15))))), (min((((/* implicit */unsigned long long int) arr_15 [i_3])), (arr_16 [i_2] [i_3] [i_4] [i_5 + 2]))))))));
                            }
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((((/* implicit */int) arr_15 [i_2])) & (((/* implicit */int) arr_15 [i_3])))))))));
            }
        } 
    } 
}
