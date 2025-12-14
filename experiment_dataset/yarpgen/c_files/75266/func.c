/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75266
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_0 [0LL] [0LL]))) - (((/* implicit */int) ((((/* implicit */_Bool) 10317393648594858402ULL)) || (((/* implicit */_Bool) var_19)))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */int) arr_1 [i_0])) << ((((-(8129350425114693223ULL))) - (10317393648594858381ULL))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((unsigned short) (-(((/* implicit */int) arr_3 [(unsigned char)5] [i_1]))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_22 = arr_7 [i_1] [i_1];
            /* LoopSeq 3 */
            for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    var_23 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)8476)) ? (((/* implicit */int) arr_12 [(unsigned char)3] [(_Bool)1] [i_3] [(unsigned char)3] [i_4])) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_13 [i_2] [i_2] [(unsigned short)8] [i_3 - 2] [i_3 - 2] [i_3 + 1]))));
                    var_24 = ((arr_10 [i_1] [(signed char)4] [i_3] [i_3 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) ((10317393648594858404ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))))))));
                    arr_15 [1] [1] = ((/* implicit */unsigned char) (!(((_Bool) (-9223372036854775807LL - 1LL)))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 8129350425114693213ULL))))) << (((((((((/* implicit */_Bool) 8129350425114693217ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)25366)))) - (-2147483646))) + (24)))));
                    arr_16 [i_1] [i_1] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((812872659) * (((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_4] [i_3 - 1]))));
                }
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    arr_20 [i_5] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) (unsigned short)0));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        arr_23 [i_1] [i_2] [i_3] [i_1] [4] = ((/* implicit */signed char) arr_7 [i_2] [i_3 - 1]);
                        arr_24 [(_Bool)1] [i_2] [i_2] = ((((/* implicit */_Bool) -157432534)) || (((/* implicit */_Bool) 8129350425114693213ULL)));
                        arr_25 [i_1] [i_1] [i_3 + 1] [i_5] [i_6] [i_6] = ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_1] [(signed char)0]))))) * (3600189358U));
                    }
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) ((10317393648594858404ULL) % (8129350425114693213ULL)));
                        var_27 += ((((/* implicit */int) (!(((/* implicit */_Bool) 1993321410))))) * (((/* implicit */int) ((signed char) 10317393648594858379ULL))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_28 -= ((/* implicit */unsigned char) ((arr_27 [i_8] [i_3 + 1] [i_3] [i_3] [(unsigned short)7] [i_3]) > (((/* implicit */int) arr_3 [i_1] [i_3 + 1]))));
                        arr_30 [i_1] [i_1] [i_1] [i_5] [i_8] = ((/* implicit */int) ((unsigned int) -1653243037));
                        var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_3 - 2] [i_3] [i_3] [(signed char)9]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), (((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 694777935U))))) != (arr_7 [i_1] [i_1])))));
                        arr_34 [i_1] [5] [i_3] [i_5] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_31 [i_1] [i_9])) : (((/* implicit */int) var_12)))) < (((int) var_9))));
                        arr_35 [i_1] [i_2] [i_3 - 1] [i_5] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1] [(unsigned char)8])))));
                    }
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [(_Bool)1] [i_2] [i_3] [i_5] [i_10])) ^ (((/* implicit */int) arr_13 [i_1] [i_2] [i_3 - 2] [i_1] [i_10] [i_3 - 2]))))) && (arr_36 [i_3] [i_3 + 1] [0] [20] [i_3] [i_3 + 1])));
                        var_32 = ((/* implicit */unsigned short) ((int) var_6));
                    }
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_5] [i_5])) ? (((/* implicit */int) arr_26 [(unsigned short)12] [i_3 + 1] [(unsigned short)8] [i_3 + 1] [i_3 + 1] [(signed char)18])) : (((/* implicit */int) arr_26 [i_2] [i_3 - 1] [i_3] [i_3 - 1] [i_5] [19]))));
                }
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [(_Bool)0] [i_2] [i_3] [i_3 - 1] [i_3])))))));
                var_35 -= ((/* implicit */unsigned short) var_3);
            }
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
            {
                var_36 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) -1302477848)) ? (((/* implicit */int) arr_8 [i_11])) : ((((_Bool)0) ? (((/* implicit */int) arr_22 [(signed char)18] [i_1] [(unsigned short)20] [i_2] [i_2] [i_11])) : (((/* implicit */int) (_Bool)1))))));
                var_37 -= ((/* implicit */signed char) 10317393648594858384ULL);
                /* LoopNest 2 */
                for (long long int i_12 = 2; i_12 < 17; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((short) var_12)))));
                            var_39 = ((/* implicit */int) ((1830504562U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162)))));
                        }
                    } 
                } 
            }
            for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) /* same iter space */
            {
                arr_49 [19U] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((arr_27 [i_2] [(unsigned char)10] [i_14] [i_1] [i_1] [i_2]) == (arr_27 [i_1] [i_2] [i_1] [i_2] [i_2] [12LL])));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */int) 680983415U);
                            var_41 = ((/* implicit */_Bool) max((var_41), ((!(((/* implicit */_Bool) arr_28 [i_1] [(unsigned char)8] [i_14] [i_16] [(unsigned char)8] [i_16] [i_16]))))));
                        }
                    } 
                } 
                arr_56 [i_1] [(unsigned short)19] [i_14] [i_14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_14])) ? (18275785788899107990ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [17U] [(short)0])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) 4667732393660881156ULL)))));
            }
            var_42 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (signed char)109)) * (((/* implicit */int) (short)-12238)))));
        }
        arr_57 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [(unsigned short)13] [i_1] [(unsigned short)13])) || (((/* implicit */_Bool) arr_17 [i_1] [16] [16]))));
        arr_58 [i_1] [i_1] = ((/* implicit */long long int) ((short) (short)768));
    }
    var_43 = ((/* implicit */int) max(((-(10317393648594858404ULL))), (((((/* implicit */_Bool) max((2371395571U), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22111))) : (((unsigned long long int) 812872667))))));
}
