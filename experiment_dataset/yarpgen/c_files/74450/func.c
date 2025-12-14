/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74450
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
    var_13 = ((/* implicit */signed char) min((var_13), (var_12)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_0 + 1])) >> (((arr_1 [i_0 + 1] [i_0]) - (12679159880718093017ULL))))) << ((((+(((/* implicit */int) var_10)))) - (37909)))));
        var_15 = ((/* implicit */long long int) ((unsigned short) arr_3 [i_0 + 1]));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_16 += ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) (short)-16800)))));
            var_17 = ((/* implicit */unsigned short) (short)-16803);
            var_18 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 + 1]);
            arr_6 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) var_2)))));
        }
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) arr_15 [i_0] [i_0 + 1] [i_3] [i_0] [i_0 + 1] [i_2 - 1]));
                        arr_18 [i_0] [(unsigned char)8] [i_3] [(unsigned char)11] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-16809)) + (2147483647))) >> (((((/* implicit */int) (short)16782)) - (16760)))));
                        var_20 = ((/* implicit */int) var_9);
                    }
                } 
            } 
            arr_19 [i_0] [i_2 - 1] = ((/* implicit */unsigned short) arr_8 [i_0]);
            var_21 = arr_4 [i_0] [i_2 + 1] [14ULL];
        }
        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0 + 1]))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            arr_22 [8ULL] [(short)4] [i_5] = ((/* implicit */int) ((arr_21 [i_0 + 1]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5])))));
            var_23 ^= ((/* implicit */int) arr_11 [(signed char)4] [14] [i_0] [(signed char)4]);
        }
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)16813)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)64049)))) % (((/* implicit */int) var_9))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
