/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97439
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 6428192892096853834LL))))) << (((((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))) - (7663005557382827141ULL))))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7160880320233322908ULL)) ? (((/* implicit */int) (short)19497)) : (((/* implicit */int) (unsigned char)10)))) << (((max((var_4), (arr_3 [i_1] [i_0] [i_1]))) - (3126818003U))))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((short) arr_1 [0] [i_1]))) : (((/* implicit */int) ((signed char) arr_3 [i_0] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_3 + 2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((2436970885U), (arr_7 [i_3] [i_3 + 2] [17LL] [i_2 - 2])))) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                            {
                                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [(short)15] [20U] [i_1])) ? (((/* implicit */int) arr_9 [10U] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))))));
                                var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]))) : (var_4)))));
                                arr_16 [i_0] [i_0] [(unsigned char)21] [17U] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (((~(((6428192892096853810LL) | (((/* implicit */long long int) ((/* implicit */int) var_8))))))) | (min((((var_17) | (-6428192892096853834LL))), (((long long int) var_7))))));
                                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)190)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) -7550931004466384249LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_15 [i_0] [i_2 - 1] [i_2] [i_3] [i_4] [i_0] [i_0]))) <= (arr_3 [i_3 + 2] [i_4] [i_2 - 2]))))) : (max((var_7), (var_4)))));
                            }
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_6 [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [(short)13])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_6 [i_6] [i_5])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_10 [i_5] [8LL] [i_5] [i_5] [14ULL] [i_5]))) : (((/* implicit */unsigned long long int) max((7550931004466384249LL), (((/* implicit */long long int) var_2)))))))));
                var_24 ^= ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-19497)) >= (((/* implicit */int) arr_13 [18LL] [i_6] [i_6] [18LL] [18LL]))))))), (((/* implicit */unsigned int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)19502))))), (arr_0 [i_6]))))));
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    arr_28 [i_5] [i_6] [i_5] = ((((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_7])) ? (var_3) : (arr_21 [i_5] [i_5] [i_5]))) >> (((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), (((var_9) <= (arr_18 [i_5] [i_5])))))));
                    arr_29 [i_5] [i_5] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (arr_14 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) var_3))))))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_1 [i_5] [i_5]))))), (arr_4 [i_5] [i_5])))));
                }
                for (long long int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                {
                    arr_32 [i_6] [i_6] [i_8] [i_6] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)3260))) <= (-6428192892096853834LL)));
                    arr_33 [i_5] [i_8] = ((((/* implicit */_Bool) ((((min((var_17), (((/* implicit */long long int) arr_21 [i_8] [i_6] [i_5])))) + (9223372036854775807LL))) << (((min((var_17), (-9223372036854775807LL))) - (-9223372036854775807LL)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)19497))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_6] [(signed char)19])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (arr_14 [i_8] [(short)18] [(short)18]))))));
                }
            }
        } 
    } 
}
