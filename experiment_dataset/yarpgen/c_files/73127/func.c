/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73127
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0] [i_1]) ? (var_9) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1] [i_0]))))) ? (((/* implicit */int) (!(arr_2 [i_0] [i_1 - 2] [i_0])))) : ((~(var_9)))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max(((~(15728640LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)3)) | (var_5))))));
                arr_5 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((var_3) << (((var_11) - (6372758576802476157LL)))))) || (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) arr_3 [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 3; i_3 < 9; i_3 += 2) /* same iter space */
        {
            arr_12 [i_3] [(unsigned char)3] = arr_7 [i_2];
            var_16 = ((/* implicit */signed char) (((+(((((/* implicit */int) arr_11 [i_2] [i_3])) % (((/* implicit */int) var_1)))))) >> (((((((/* implicit */_Bool) arr_8 [2LL] [i_3 - 1])) ? (arr_8 [i_2] [i_3 - 1]) : (arr_8 [i_2] [i_3 - 1]))) + (1776703622)))));
            var_17 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_3 - 2] [i_3] [i_3])) / (var_6)))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_9 [i_3 - 2] [i_3]))));
        }
        for (long long int i_4 = 3; i_4 < 9; i_4 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_9)))))))));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) max((arr_2 [i_4 - 1] [i_4] [i_4 - 2]), (arr_2 [i_4 - 3] [i_4] [i_4])))) + (var_6))))));
        }
        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            arr_18 [i_2] [i_5] = ((/* implicit */unsigned char) (((-(arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1]))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_11 [i_2] [i_5])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_23 [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */int) arr_13 [i_2])) >= (((/* implicit */int) (signed char)9)))) && (((/* implicit */_Bool) var_4))));
                arr_24 [i_2] [i_2] [i_6] [i_6] = ((/* implicit */signed char) ((short) var_3));
            }
            /* vectorizable */
            for (int i_7 = 1; i_7 < 8; i_7 += 2) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -747754230)) : (10LL)))) ? (((/* implicit */unsigned long long int) ((int) var_4))) : (var_2)));
                arr_28 [(unsigned char)1] [i_2] [i_5] [i_7] = ((/* implicit */int) ((arr_19 [i_2] [i_5] [i_7]) << (((((unsigned int) arr_19 [i_2] [i_2] [i_7 + 2])) - (402905873U)))));
                var_21 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_26 [i_2] [i_5 + 1] [i_5] [i_8])))) ? ((~(((/* implicit */int) arr_0 [i_7])))) : (var_9)));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) (~((+(((/* implicit */int) var_10))))));
                        arr_33 [i_9] [i_5] [i_9] [i_7] [i_8] [i_9] [i_7] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_5 - 2])) : (((/* implicit */int) arr_0 [i_5 + 1])));
                    }
                    for (short i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) arr_32 [i_7] [i_7] [i_5] [i_7]);
                        arr_36 [i_2] [i_2] [i_7 - 1] [i_7] [i_10] [i_7] [i_5] = ((/* implicit */unsigned long long int) arr_30 [i_2] [i_5] [3U] [(short)6] [i_10]);
                    }
                    arr_37 [i_2] [i_5] [i_7 + 2] [(unsigned short)7] [i_7] [i_7] = ((/* implicit */int) (~(arr_16 [i_2] [i_5 + 1] [i_7])));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_25 [i_5 - 1] [i_7 - 1]) : (arr_25 [i_5 - 2] [i_7 + 2])));
                }
                for (int i_11 = 2; i_11 < 8; i_11 += 2) 
                {
                    arr_41 [i_7] [i_7] [i_7] [i_11] = ((/* implicit */unsigned long long int) (+((+(28U)))));
                    arr_42 [i_2] [i_7] [i_7] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((int) var_12)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [(_Bool)1])) >= (((/* implicit */int) (signed char)-16)))))));
                }
            }
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_35 [i_2])) * (((/* implicit */int) arr_35 [i_2])))))) && (((/* implicit */_Bool) (~(arr_25 [i_5 - 2] [i_5 - 2])))))))));
        }
        arr_43 [i_2] = ((/* implicit */long long int) (unsigned char)196);
    }
}
