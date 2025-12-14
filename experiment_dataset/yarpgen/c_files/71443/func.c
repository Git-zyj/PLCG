/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71443
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
    var_20 *= ((/* implicit */signed char) max((min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_13)), (var_0)))), (((((/* implicit */_Bool) 580788566)) ? (392891580U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3072))))))), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0 + 1] [i_2] &= ((/* implicit */signed char) max((((/* implicit */int) max((var_0), (arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_0 + 1])))), ((~(((/* implicit */int) arr_8 [i_0 + 2] [i_2] [i_2] [18]))))));
                    var_21 ^= ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)8)), (8U)));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_3 = 1; i_3 < 24; i_3 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (short i_6 = 3; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_22 ^= ((/* implicit */_Bool) min((max((arr_17 [i_6 - 3] [i_3] [i_4] [(signed char)0] [i_6 - 2]), (((/* implicit */unsigned int) arr_14 [i_6 - 2] [i_4 + 4] [(unsigned char)16] [i_3 - 1] [i_0] [i_0 + 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [(unsigned char)16] [i_0] [i_0 + 3] [i_0] [i_0])) ? (arr_0 [(short)4]) : (((/* implicit */int) arr_14 [i_3 + 1] [i_3] [i_3 + 1] [i_0 + 1] [i_0] [i_0])))))));
                            arr_20 [i_0] [i_0] [i_4] [i_5] [i_6] [i_6 - 3] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) var_19)) >= (((/* implicit */int) arr_8 [i_0 + 1] [i_3 + 1] [i_0] [i_6]))))), (max((min((arr_7 [i_6 - 3] [(_Bool)1] [i_0]), (((/* implicit */int) arr_19 [i_0] [i_0] [9] [i_0] [i_0] [i_0 + 1] [i_0 - 1])))), (((/* implicit */int) var_0))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((arr_12 [i_0]) + (9223372036854775807LL))) >> (((((((var_7) ? (((/* implicit */int) arr_15 [2U] [i_5] [i_4] [(signed char)6] [(signed char)6] [2U])) : (arr_7 [2LL] [i_5] [i_0]))) | (((/* implicit */int) arr_10 [(unsigned char)0])))) - (498925552))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_8))));
            var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (var_5)))))))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (-(2U))))));
            var_27 &= ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [2LL] [(_Bool)1] [i_3])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_3] [i_3 + 1] [(short)8])) : (((/* implicit */int) arr_14 [24U] [i_0] [i_0] [i_3] [i_0] [i_3 - 1]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_8 [i_0] [i_0] [10] [i_0])), (var_16)))) : (((4294967274U) % (27U)))))));
        }
        for (short i_7 = 1; i_7 < 24; i_7 += 2) /* same iter space */
        {
            var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [(unsigned char)3] [i_0] [i_0 + 1])) >= (((/* implicit */int) arr_19 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1]))))) : (((/* implicit */int) max((arr_19 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0] [i_0 - 1]), (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 + 2]))))));
            var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((unsigned short) 2U))) : (((/* implicit */int) var_12))));
            var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 2] [i_0] [i_0])) ? (var_9) : (var_16)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((var_19) ? (33U) : (10U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_17))))))) : (max((6021456263640720842LL), (((/* implicit */long long int) 4294967274U)))));
        }
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            arr_25 [i_0] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (arr_0 [18LL]))), (((/* implicit */int) max((arr_1 [i_0] [i_8]), (var_13))))))), (max(((-(7247834475306971390ULL))), (((/* implicit */unsigned long long int) ((var_5) + (var_5)))))))))));
        }
    }
    for (int i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967280U)))))) : (-1254347453443070965LL)));
        var_33 = max((arr_17 [i_9] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) var_3)));
    }
}
