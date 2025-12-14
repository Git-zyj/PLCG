/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71590
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
    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-16734))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_0] [(unsigned char)1] [i_0] = ((((/* implicit */_Bool) arr_2 [(short)6] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 1])) : (arr_0 [i_0] [i_1]));
            arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_0 [i_0] [i_1 - 1])) == (arr_4 [i_1 - 1] [i_1 + 1])));
            var_21 = ((/* implicit */long long int) (+(arr_4 [i_1 + 1] [i_0])));
            arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -8546448278151530763LL))))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)249)) || (((/* implicit */_Bool) 9223372036854775807LL)))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1]))));
        }
        var_23 = ((/* implicit */int) ((var_4) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_6 [i_0]))) : (((/* implicit */long long int) arr_4 [i_0] [i_0]))));
        arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) ? (arr_6 [12]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [20ULL] [20ULL])))))) ? (arr_6 [2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_15 [i_2] = ((/* implicit */short) arr_11 [i_2] [i_2]);
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_6 [(unsigned char)8]))));
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_19 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 9223372036854775798LL)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)127)))) ^ (((arr_17 [i_3]) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) arr_18 [i_3]))))));
        arr_20 [i_3] = ((/* implicit */unsigned char) ((var_19) | (((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) arr_18 [i_3]))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_19))));
        arr_21 [i_3] = ((/* implicit */unsigned long long int) arr_17 [(unsigned short)18]);
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        arr_25 [i_4] = ((/* implicit */long long int) arr_3 [(_Bool)1]);
        /* LoopSeq 1 */
        for (int i_5 = 2; i_5 < 20; i_5 += 3) 
        {
            arr_28 [6U] [14LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) arr_17 [i_5 + 1])) : (((/* implicit */int) var_18))))) ? (((/* implicit */int) var_10)) : (arr_24 [i_4])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_1 [i_4])))) | (((/* implicit */int) arr_1 [i_4])))))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [i_4] [i_4])) ? (arr_11 [i_4] [i_4]) : (arr_23 [i_7] [i_6]))) / (arr_11 [(unsigned short)16] [i_4])))) || (((((/* implicit */int) arr_34 [i_5] [(unsigned short)19] [i_5 + 2] [i_5] [i_5] [7])) <= (((/* implicit */int) arr_34 [9] [i_5] [i_5 - 2] [9] [13] [9]))))));
                        var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_4])) ? (arr_4 [i_4] [i_5 - 1]) : (((/* implicit */unsigned int) arr_11 [i_4] [i_4]))))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_4])) ^ (arr_23 [i_5 + 2] [i_6]))) / (((/* implicit */int) arr_29 [i_5 + 2] [i_5 - 2] [i_5 - 2]))))) : (((((((/* implicit */_Bool) arr_3 [i_5])) || (arr_29 [i_4] [i_5] [i_6]))) ? (arr_6 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5 - 2] [i_5])))))));
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_31 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5]) / (arr_23 [i_5] [(_Bool)1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_5 - 2])) ? (((/* implicit */int) arr_5 [i_4] [i_5 + 2])) : (((/* implicit */int) arr_5 [i_4] [i_5 - 1]))))) : (arr_6 [i_4])));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_14 [i_4]))));
                    }
                } 
            } 
            arr_35 [20] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_27 [i_5]))))))) ? (((((arr_4 [i_4] [i_5]) >= (((/* implicit */unsigned int) var_12)))) ? (((((/* implicit */_Bool) var_14)) ? (arr_32 [i_4]) : (((/* implicit */unsigned long long int) arr_0 [i_4] [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4])) / (arr_11 [i_5 + 2] [i_4]))))));
            arr_36 [i_4] [i_4] = ((/* implicit */short) arr_23 [i_4] [i_5 - 2]);
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_4] [(unsigned short)11] [i_5 + 2]))))) ? (((/* implicit */int) arr_29 [6U] [i_5] [i_5 - 1])) : ((~(((/* implicit */int) arr_29 [(short)0] [i_5 + 2] [i_5 + 1]))))));
        }
        arr_37 [i_4] [i_4] |= ((/* implicit */signed char) arr_22 [2LL] [2LL]);
        var_33 -= ((/* implicit */signed char) ((((/* implicit */long long int) arr_13 [i_4])) != (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_4] [i_4] [i_4]))) : (arr_26 [i_4] [i_4] [i_4])))));
    }
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_7)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_18))));
    var_35 = ((/* implicit */int) ((var_5) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_11)) + (((var_10) ? (var_17) : (((/* implicit */unsigned int) var_19)))))))));
}
