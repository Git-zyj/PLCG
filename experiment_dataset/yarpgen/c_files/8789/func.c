/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8789
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((((long long int) (unsigned short)52164)), (((/* implicit */long long int) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0 + 1]))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            arr_7 [i_0] [i_1 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) 410707893708720288LL)) ? (arr_0 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11))))));
            var_15 = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0]);
            arr_8 [i_0] [i_1] = ((/* implicit */_Bool) var_0);
        }
        /* vectorizable */
        for (short i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_2 - 1] [(short)10] [i_0]))));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((-11LL) + (9223372036854775807LL))) >> (((-25LL) + (33LL))))))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_8)) : ((-(var_0)))));
            arr_12 [21] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((arr_11 [i_0 + 1] [(short)15]) ? (((/* implicit */int) arr_11 [(short)19] [i_2])) : (((/* implicit */int) arr_6 [i_0])))));
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_6 [i_0]))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */_Bool) arr_2 [(signed char)16]);
                        arr_23 [i_0 - 2] [i_3] [i_0] [i_5] = ((/* implicit */_Bool) ((arr_11 [i_0] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -11LL)) && (((/* implicit */_Bool) max((arr_19 [i_0] [i_4]), (((/* implicit */long long int) arr_21 [(short)16] [i_5]))))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_0 - 3] [i_3])))) ^ (arr_0 [i_0 - 2])))));
                        var_21 = ((/* implicit */short) arr_6 [i_0]);
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_14 [i_0 - 1] [i_6]))), (((/* implicit */unsigned int) (((~(arr_14 [i_6] [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [(unsigned char)0])) != (((/* implicit */int) var_8)))))))))))));
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_13 [i_6] [i_6] [i_0]))));
            arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [i_0 + 1] [i_6]);
        }
    }
    for (short i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned short) arr_26 [12LL]);
        var_25 |= ((/* implicit */unsigned short) ((int) ((14LL) + (((/* implicit */long long int) ((/* implicit */int) arr_24 [(signed char)20] [(signed char)20]))))));
        arr_31 [i_7] = ((/* implicit */int) ((unsigned short) ((arr_25 [(unsigned char)9] [i_7] [(short)6]) <= (arr_25 [i_7] [i_7] [6LL]))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 1; i_8 < 19; i_8 += 3) 
    {
        arr_34 [i_8] = ((/* implicit */unsigned int) var_8);
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_8 + 1] [(unsigned char)18] [i_8 - 1])) / (((/* implicit */int) arr_5 [i_8 - 1] [i_8] [i_8 + 1]))));
        var_27 = ((/* implicit */unsigned int) var_2);
    }
    var_28 = ((/* implicit */unsigned char) min((var_13), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((unsigned char) var_3)))))));
    var_29 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_12)) : (8LL))));
}
