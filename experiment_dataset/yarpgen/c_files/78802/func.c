/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78802
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
    var_13 = (!(((/* implicit */_Bool) -405303810)));
    var_14 = ((/* implicit */short) (-(var_0)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_15 &= ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0]));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -405303807)) ? (786184372U) : (3508782924U)));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_13 [i_0] [5ULL] [i_0] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) * (12U)));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_12))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_2 + 3] [i_2] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (short)8464))));
                            arr_17 [i_0] [i_2] = ((/* implicit */long long int) arr_6 [i_1]);
                            var_17 = ((/* implicit */unsigned int) (unsigned short)19883);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_18 &= ((/* implicit */_Bool) (~(arr_10 [i_2] [i_3] [i_3] [i_0])));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(arr_12 [i_2 + 2] [i_2 - 1] [i_2] [i_5]))))));
                            var_20 = ((/* implicit */long long int) 3508782923U);
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2]))) : (arr_6 [i_2 - 1])));
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_6] [15] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2 - 3] [i_2]))) : ((-9223372036854775807LL - 1LL))));
                            arr_28 [i_2] [i_1] [i_2] = ((/* implicit */int) var_4);
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_6] [i_8])) ? (((/* implicit */int) arr_5 [i_8])) : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_29 [i_8 - 1] [i_6 + 2] [i_2 + 3] [i_1])) : (arr_2 [i_2 + 1])));
                            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7000108371026797226ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3508782924U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) 3508782924U))))));
                        }
                        arr_31 [i_2] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_35 [i_0] [i_1] [i_1] [i_0] [i_2] [i_9] = ((/* implicit */unsigned int) arr_22 [i_2] [i_2 + 1] [i_2] [i_2 - 2] [i_2 + 2]);
                        var_24 = ((/* implicit */unsigned char) var_5);
                        arr_36 [i_2] = ((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_1] [i_1] [i_2]);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        arr_39 [i_0] [i_1] [i_10] [(signed char)13] [i_2] [i_2] = ((/* implicit */long long int) arr_33 [i_0] [i_0] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 1; i_11 < 15; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 786184372U)) ? (((/* implicit */unsigned long long int) var_12)) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) (short)8973)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11860))) : (16730945913698507819ULL)))));
                            var_26 = ((/* implicit */unsigned long long int) var_8);
                        }
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 1; i_13 < 13; i_13 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_0] [i_1] [i_12 + 1] [i_12])) ? (((/* implicit */int) (short)-11865)) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_12 + 1]))));
                            arr_46 [i_2] [i_12] = ((((/* implicit */_Bool) arr_33 [i_2 - 3] [i_2 + 3] [i_12 + 1] [i_13 + 1])) ? ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_22 [i_2] [i_2] [i_2 - 2] [15ULL] [i_2])));
                            var_28 = ((/* implicit */unsigned int) ((arr_10 [i_0] [i_1] [i_2] [i_13]) <= (arr_10 [i_13 + 2] [i_2] [i_2] [i_1])));
                        }
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_29 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])) : (arr_2 [i_0])));
                    }
                }
            } 
        } 
        arr_47 [i_0] = ((/* implicit */unsigned short) arr_32 [i_0]);
        var_30 = ((/* implicit */unsigned int) arr_7 [i_0]);
    }
    for (long long int i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
    {
        var_31 = arr_32 [i_14];
        var_32 = ((/* implicit */_Bool) ((long long int) 3073820765U));
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
    {
        arr_53 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) 405303810)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1445616667U)));
        arr_54 [i_15] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-11869))));
        var_33 = ((/* implicit */long long int) var_3);
    }
}
