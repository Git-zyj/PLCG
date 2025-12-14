/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71153
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) arr_0 [i_0 + 2])))), (((((/* implicit */_Bool) max((arr_5 [(unsigned short)17] [i_1] [i_0]), (arr_5 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_2 [12U]))))) : (((((/* implicit */int) arr_0 [(short)8])) + (((/* implicit */int) var_3)))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [(signed char)19] [i_2] [(signed char)9] [i_1] [(unsigned short)21] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_7 [i_0 + 2] [i_1])))));
                            var_14 -= ((arr_2 [i_2]) ? (((unsigned int) max((((/* implicit */unsigned int) var_5)), (arr_1 [15])))) : (((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0 + 1]) : (max((arr_1 [(signed char)1]), (((/* implicit */unsigned int) var_0)))))));
                        }
                    } 
                } 
                var_15 += ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-72))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) arr_3 [i_4 + 3] [i_4] [i_4 + 4]);
                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4] [4U])) ? (((arr_7 [i_4] [2]) ? ((~(((/* implicit */int) arr_9 [i_4] [(unsigned short)23] [i_4] [20ULL])))) : (((/* implicit */int) min((((/* implicit */signed char) arr_2 [i_4])), (arr_15 [i_5] [14U] [4U])))))) : (((/* implicit */int) ((unsigned short) 3238377407U)))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (max((var_7), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1449447839)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-77))))) : (3238377399U))))));
}
