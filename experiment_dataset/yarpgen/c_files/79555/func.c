/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79555
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
    var_14 = ((/* implicit */int) var_1);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_15 |= ((/* implicit */long long int) ((unsigned int) arr_2 [i_0]));
        var_16 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [(unsigned short)16])))), (((/* implicit */int) var_12)))) >> (((var_9) + (6509689953270938705LL)))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_5 [10] &= ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) (short)17083)) ? (var_8) : (((/* implicit */int) var_10)))), (((/* implicit */int) min((((/* implicit */signed char) arr_3 [(unsigned short)7])), (arr_0 [i_1]))))))));
        var_17 = ((/* implicit */_Bool) (unsigned char)86);
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 = arr_2 [i_2];
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2 - 1])) >> (((var_5) + (5716793595285306LL))))))));
        var_20 *= ((((/* implicit */_Bool) arr_4 [(unsigned char)2])) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */int) arr_3 [(short)14])) - (((/* implicit */int) var_13)))));
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 - 1])) : (((/* implicit */int) var_10))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (((/* implicit */int) arr_0 [i_3 - 1])) : (((/* implicit */int) arr_6 [i_3 - 1])))));
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((((((/* implicit */int) (short)16877)) >> (((((/* implicit */int) (signed char)125)) - (123))))) ^ (((/* implicit */int) var_12))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                arr_17 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) 8399910276894309288LL)) || (((/* implicit */_Bool) (short)-12375))))) < (((((/* implicit */_Bool) (short)12374)) ? (((/* implicit */int) (short)12360)) : (((/* implicit */int) (short)-12375)))))) ? ((((!(((/* implicit */_Bool) (short)-12366)))) ? (((/* implicit */int) min((var_7), (var_7)))) : (((/* implicit */int) var_0)))) : ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_3]))))))));
                /* LoopSeq 1 */
                for (signed char i_6 = 3; i_6 < 17; i_6 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0))))));
                    arr_20 [i_3] [i_3] [16] [i_6] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_11), (((/* implicit */short) arr_8 [i_3] [i_5 + 2]))))) ^ (((/* implicit */int) ((short) (unsigned char)1)))));
                    arr_21 [i_3] [i_3] = ((/* implicit */unsigned short) arr_13 [(unsigned char)20] [i_6]);
                }
            }
        }
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) var_2)))))));
            var_24 = var_13;
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (short i_9 = 1; i_9 < 18; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (_Bool)0))));
                        var_26 = ((/* implicit */unsigned short) var_1);
                        arr_33 [(short)7] [i_8] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_8 + 1])) + (((/* implicit */int) var_4))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9)))) ? ((~(((/* implicit */int) arr_14 [i_3] [i_8 + 1] [i_3])))) : (((/* implicit */int) arr_23 [i_3] [i_3]))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_3 - 1])) * (((/* implicit */int) arr_1 [i_3 - 1])))))));
                    }
                } 
            } 
            arr_34 [i_3] [i_3] = ((/* implicit */int) var_9);
            var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)12375)) ? (((/* implicit */int) (short)12352)) : (((/* implicit */int) (short)12375))));
        }
    }
}
