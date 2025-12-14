/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84344
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
    var_15 &= ((/* implicit */_Bool) ((unsigned long long int) var_10));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) (~(arr_3 [i_0] [i_1 + 3] [i_1])));
                var_17 = ((/* implicit */int) var_3);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(16612542672408905754ULL)));
                arr_7 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_5 [i_1] [8LL] [i_0])))))), (((((/* implicit */_Bool) 16612542672408905754ULL)) ? (((/* implicit */int) arr_5 [i_1] [i_1 + 3] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1 + 3] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_2]) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2]))))) ? ((-(((/* implicit */int) arr_8 [i_2])))) : (((((/* implicit */int) arr_8 [i_2])) * (((/* implicit */int) arr_9 [i_2]))))));
        arr_11 [i_2] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) 12911320152153728482ULL)))));
        var_19 = ((/* implicit */unsigned short) arr_10 [i_2]);
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) max((12839656809526549049ULL), (((/* implicit */unsigned long long int) (short)15653))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(((/* implicit */int) max((arr_8 [i_2]), (arr_8 [i_2])))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_3]))));
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3]))));
        var_22 = ((/* implicit */unsigned long long int) (-(1357223052U)));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */int) var_12);
        var_23 ^= ((/* implicit */unsigned int) ((arr_0 [i_4 + 1] [i_4 + 1]) ? (((/* implicit */int) arr_0 [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_0 [i_4 + 1] [i_4 + 1]))));
    }
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (signed char i_6 = 3; i_6 < 12; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    arr_26 [(short)6] [(short)6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_5 [i_6] [i_6] [i_6 - 3]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [i_5]))) >= (arr_19 [i_5]))))))) >= (((/* implicit */int) (!(var_12))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (~(((int) arr_8 [12U]))))) : (min((((long long int) arr_9 [i_5])), (((/* implicit */long long int) arr_21 [i_6] [i_6] [i_7]))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_6 - 1] [i_6 - 1]))))) ? (((((/* implicit */_Bool) arr_1 [i_6 - 1] [(short)5])) ? (((/* implicit */int) arr_1 [i_6 - 3] [(unsigned char)4])) : (((/* implicit */int) arr_1 [i_6 + 1] [i_6 + 1])))) : (((((/* implicit */int) arr_1 [i_6 - 3] [i_6 - 2])) + (((/* implicit */int) arr_1 [i_6 + 1] [i_6 + 1]))))));
                }
            } 
        } 
    } 
}
