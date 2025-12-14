/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62089
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
    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) (short)32761))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((/* implicit */int) var_10))))) ? (((var_12) << (((arr_3 [i_0] [(_Bool)1] [(signed char)6]) - (1744340563))))) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0]))))) : (224474181)));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_8 [i_2] &= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) : (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) * (var_13))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (short)32753)) / (224474181)))), (arr_7 [i_0] [i_0] [i_0]))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_12))));
                }
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    arr_13 [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) var_8)) - (38285)))));
                    var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 1972052810U)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) < (var_12))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_5)), (arr_18 [i_5 - 2] [i_5 - 1] [i_5]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_18 [i_5 - 1] [i_5 + 1] [i_5 - 1]))))));
                arr_19 [i_4] [i_5] = ((/* implicit */_Bool) arr_18 [(_Bool)1] [(_Bool)1] [i_5]);
                var_19 = ((/* implicit */long long int) (+((-((+(((/* implicit */int) var_1))))))));
                var_20 = ((/* implicit */long long int) var_13);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            {
                var_21 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-32761))))) > (((/* implicit */int) arr_15 [i_7]))))), (min((((/* implicit */unsigned int) (short)-11990)), ((~(var_9)))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */short) arr_0 [i_6]))))))))));
            }
        } 
    } 
}
