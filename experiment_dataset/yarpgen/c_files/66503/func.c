/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66503
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), ((+(3440382551U)))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((arr_1 [2]) ? (((/* implicit */int) arr_5 [i_1] [i_2 - 1])) : (var_9)))) / (((long long int) var_5))));
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (+(3440382551U)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 8; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((var_1) ^ (((/* implicit */int) ((arr_10 [i_0] [i_3] [i_4] [(signed char)6]) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))));
                        var_21 *= ((/* implicit */short) (~((~(1940994394U)))));
                        var_22 &= (~(arr_7 [i_4 + 3]));
                        arr_13 [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(2353972906U)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_0 - 2]))));
                    }
                    arr_14 [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_3])) : (((/* implicit */int) arr_5 [i_3] [i_4 + 2]))));
                    var_23 = ((/* implicit */int) (+(((arr_0 [i_4]) & (((/* implicit */unsigned long long int) arr_7 [i_0]))))));
                    var_24 |= ((/* implicit */unsigned char) (-(((var_13) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 1])) : (arr_11 [i_3] [i_0])))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */short) arr_11 [i_0 + 1] [i_0]);
    }
    var_25 = ((/* implicit */_Bool) var_6);
    var_26 = ((/* implicit */int) var_5);
}
