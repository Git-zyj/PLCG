/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76779
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-4214728139431552291LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 4396517929276163651LL)) ? (2939762494U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2]))))))))) ? (max((((arr_1 [i_1] [i_2 - 2]) + (18014123631575040LL))), (((/* implicit */long long int) var_9)))) : (min((-1209162292902972276LL), (((/* implicit */long long int) (unsigned char)136))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) >> (((179277375) - (179277364)))))) || (((/* implicit */_Bool) ((arr_8 [i_2 + 2] [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_16))))))), ((-(-1209162292902972265LL)))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] = arr_10 [i_0] [i_0] [i_3];
                        var_21 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_3 + 1] [i_0])) || (((/* implicit */_Bool) arr_10 [i_0] [i_3 + 1] [i_0]))))), (arr_10 [i_0] [i_3 + 1] [i_0]));
                        var_22 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1]))));
                        arr_13 [i_3 + 1] [i_0] [i_0] = ((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_6 [i_2 - 2] [i_2 - 1] [i_2 + 1]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_5 = 2; i_5 < 12; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                            arr_18 [i_2] [6] |= ((/* implicit */int) ((((/* implicit */_Bool) ((-5350243770745794514LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58)))))) || (((/* implicit */_Bool) var_4))));
                            var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(unsigned char)14] [i_1] [i_1])) ? (arr_16 [i_0] [i_1] [i_2] [i_4] [i_5 - 1] [11LL] [i_0]) : (arr_17 [i_0] [(_Bool)0] [(_Bool)0] [i_0] [2LL] [i_0])));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            var_26 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((var_7) + (2147483647))) >> ((((-(arr_10 [i_0] [i_2] [i_0]))) - (863500517499895800LL)))))) : (((/* implicit */unsigned int) ((((var_7) + (2147483647))) >> ((((((-(arr_10 [i_0] [i_2] [i_0]))) - (863500517499895800LL))) - (6034967529210758561LL))))));
                            arr_21 [5U] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0] [i_0]))));
                            arr_22 [i_0] = ((/* implicit */int) ((_Bool) arr_11 [i_0] [i_1] [i_2 - 2] [i_4] [i_6]));
                            var_27 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2] [i_0] [(unsigned char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_4] [i_6]))) : (var_1))));
                            arr_23 [(unsigned char)12] [(unsigned char)12] &= var_4;
                        }
                    }
                    var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (-1209162292902972253LL) : (-1209162292902972237LL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_29 &= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_28 [i_8] [i_7] [i_8])))), (((arr_28 [i_8] [i_7] [8]) ? (((/* implicit */int) arr_28 [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_2 [i_7]))))));
                            var_30 = ((/* implicit */_Bool) var_8);
                            var_31 = ((/* implicit */_Bool) (-(((var_19) * (((/* implicit */long long int) ((/* implicit */int) arr_29 [9LL])))))));
                        }
                    } 
                } 
                var_32 &= ((long long int) (-(((/* implicit */int) var_17))));
                var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1732829140)) ? (((/* implicit */int) arr_6 [i_7] [i_7] [i_8])) : ((~(((/* implicit */int) arr_26 [10U] [i_8]))))))) ? (((long long int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_8])) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_7] [i_7] [i_7])) >> (((/* implicit */int) arr_32 [i_8] [8U] [i_8]))))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_8] [i_7]))) | (arr_24 [i_8])))))));
            }
        } 
    } 
}
