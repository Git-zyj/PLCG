/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62238
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) var_4);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_16 [i_3] = (+(((/* implicit */int) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_3])))))));
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_4 + 1])) - (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_2]))));
                                var_15 = ((/* implicit */long long int) var_5);
                                var_16 = ((/* implicit */unsigned int) ((unsigned short) arr_12 [i_4 - 1] [i_0 + 2] [i_0 + 1] [i_0]));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (arr_0 [i_0 - 1])));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((int) arr_12 [i_0 + 3] [i_6 - 1] [i_6 - 1] [i_5 + 3])))));
                        arr_24 [i_0] = arr_1 [i_5];
                        arr_25 [i_0] [i_0] [i_0] [i_0] = (((+(arr_3 [i_0 + 3] [i_0 + 3]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4610106429508649001LL)) && (var_8))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_29 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 + 1]));
                        arr_30 [i_7] [i_5] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20650)) ? (arr_5 [i_0 - 1] [i_5 + 1]) : (arr_5 [i_0 - 1] [i_5 + 1])));
                        arr_31 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 631826422)))) : ((+(var_3)))));
                        arr_32 [i_0] [i_1] [i_5] [i_7] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [(unsigned char)1] [i_5] [(unsigned char)1] [i_7] [i_5 - 1])) || (((var_7) == (((/* implicit */unsigned long long int) var_11))))));
                    }
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        arr_35 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [(signed char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) << (((((arr_13 [i_8] [i_5] [(unsigned short)15] [(unsigned short)15] [(unsigned short)15]) ? (((/* implicit */long long int) -781097669)) : (var_14))) + (781097673LL)))));
                        var_19 = ((/* implicit */unsigned short) arr_28 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_5]);
                        arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_5 - 4]))));
                    }
                    var_20 = ((/* implicit */unsigned char) ((short) arr_1 [i_0 + 1]));
                }
                for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (short i_11 = 4; i_11 < 20; i_11 += 3) 
                        {
                            {
                                arr_45 [i_0] [i_1] [(unsigned short)11] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (+(arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((int) arr_0 [i_0 - 1]))) : (min((((var_2) >> (((((/* implicit */int) arr_22 [i_1] [i_0])) + (6542))))), (((/* implicit */unsigned int) var_1))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) arr_5 [i_0] [i_11]))))) & (((/* implicit */int) arr_15 [i_11] [i_10] [i_9 - 1] [i_10] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_44 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_9 - 2] [i_9 + 2] [i_9 + 2] [i_11]) : (((/* implicit */unsigned int) arr_26 [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_9] [i_11]))) : (var_9)))) : (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_26 [i_0])))))) : (((/* implicit */unsigned long long int) ((arr_44 [i_0] [i_1] [(unsigned short)18] [i_10] [i_10] [i_10] [i_11]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [i_1] [i_9 - 2])) : (((/* implicit */int) arr_21 [i_1] [(short)1] [(short)21] [i_11]))))))))));
                            }
                        } 
                    } 
                    arr_46 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_9]))))) != (((/* implicit */int) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112)))))));
                    arr_47 [i_9] = ((/* implicit */short) (-(min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 21; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            {
                                arr_54 [i_13] [i_12 - 3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2985144516024337648ULL)) ? (-5348195608390718051LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20232)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28006))))) ? (18442908890808989677ULL) : (9223372036854775808ULL)))));
                                arr_55 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max(((unsigned char)245), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 571957152676052992ULL)) && (((/* implicit */_Bool) (unsigned short)43528)))))));
                            }
                        } 
                    } 
                    arr_56 [i_1] [i_1] [8U] = ((/* implicit */_Bool) ((unsigned char) ((short) var_10)));
                }
                arr_57 [i_0] [i_1] = ((/* implicit */short) arr_18 [i_0] [i_0] [i_0]);
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (((((/* implicit */_Bool) 2920203055069719533ULL)) ? (arr_18 [i_0] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
    {
        for (unsigned char i_15 = 1; i_15 < 9; i_15 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) arr_33 [i_15] [i_15] [i_15] [i_15]);
                var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)153))));
                arr_63 [i_14] [i_15] &= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}
