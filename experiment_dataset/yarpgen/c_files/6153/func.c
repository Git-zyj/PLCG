/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6153
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_17 |= max((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0 - 2])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((((/* implicit */int) arr_3 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_3 [(signed char)12])) + (26246))) - (26))))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) arr_3 [i_0])) + (26223))))))));
        arr_4 [(signed char)1] = ((/* implicit */unsigned char) ((unsigned short) ((arr_0 [i_0 + 1]) == (arr_0 [i_0 - 1]))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            arr_11 [i_1] [(short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) arr_2 [i_1] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 - 2]))));
            arr_12 [i_1] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_2])) <= (((/* implicit */int) arr_5 [i_1])))) || (((/* implicit */_Bool) arr_6 [i_2 - 3]))));
        }
        for (signed char i_3 = 3; i_3 < 7; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_5 [i_1]))));
            arr_17 [i_1] [i_1] [i_3] |= ((/* implicit */int) (~(arr_14 [i_3 + 1])));
        }
        /* LoopSeq 4 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned int) arr_9 [i_1] [(unsigned short)5])))));
            arr_20 [3LL] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_1] [i_4]), (arr_2 [i_1] [(short)17])))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_1] [i_4]))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_4]))))));
            var_20 |= ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_4]))) <= (arr_9 [i_1] [4LL])))));
            var_21 = ((/* implicit */long long int) arr_19 [i_1] [i_1] [i_4]);
        }
        /* vectorizable */
        for (short i_5 = 3; i_5 < 8; i_5 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [14])) * (((/* implicit */int) arr_1 [i_1]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_1] [i_5 + 1] [i_5])))))));
            var_23 = ((/* implicit */unsigned short) arr_13 [i_1]);
            arr_24 [3] [i_1] = ((/* implicit */unsigned char) ((int) arr_6 [i_5 - 1]));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_6 + 1] [i_6 + 1]))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6 + 1]))) - (((((/* implicit */_Bool) arr_9 [i_1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 + 1]))) : (arr_26 [i_1] [i_6] [i_6])))))));
            arr_27 [i_1] [i_1] |= ((/* implicit */unsigned short) arr_10 [i_6]);
        }
        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            var_25 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_1] [i_7])) ? (arr_9 [i_1] [i_7]) : (arr_9 [i_1] [i_7]))) >> (((((/* implicit */int) arr_16 [i_7])) - (24817)))));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_21 [1LL]))) | (((((/* implicit */_Bool) arr_21 [i_1])) ? (((/* implicit */int) arr_21 [i_1])) : (((/* implicit */int) arr_21 [i_7])))))))));
        }
        arr_31 [i_1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_29 [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_30 [i_1] [i_1] [i_1])))));
    }
    var_27 |= ((/* implicit */unsigned char) var_4);
}
