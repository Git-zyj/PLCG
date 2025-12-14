/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9727
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_6)))) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (var_6))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */short) var_0);
                    arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_3 [i_0] [i_0]) : ((+(((/* implicit */int) var_1))))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_8))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)14397)) == (((/* implicit */int) (short)8191))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_14 -= ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_2] [i_3]))));
                        var_15 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                        arr_12 [i_0] [(signed char)5] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [2U])) : (var_5)))));
                        arr_13 [i_1] [i_1] [i_1] = (~(arr_3 [i_2] [i_3]));
                        var_16 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0]))));
                    }
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_14 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [0LL])) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    }
    /* vectorizable */
    for (short i_4 = 2; i_4 < 14; i_4 += 1) 
    {
        arr_17 [(signed char)8] |= ((/* implicit */short) (~(((((/* implicit */_Bool) var_8)) ? (arr_6 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        arr_18 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4]))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((unsigned int) ((((unsigned int) var_2)) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
        var_19 = ((/* implicit */unsigned long long int) var_7);
        var_20 += ((/* implicit */unsigned int) var_2);
        arr_21 [i_5] [i_5] = ((/* implicit */signed char) arr_20 [8U] [8U]);
        var_21 -= ((/* implicit */unsigned char) var_9);
    }
    var_22 -= ((/* implicit */unsigned long long int) var_3);
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */unsigned short) var_3)), (var_0))))));
}
