/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67796
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0])))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) ((signed char) (short)-13259));
                    var_21 = ((/* implicit */signed char) min((arr_5 [i_0] [(signed char)17]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_3))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = var_15;
                                var_23 = ((/* implicit */signed char) max((((/* implicit */int) arr_13 [i_3] [i_3] [i_3 - 2])), (((((/* implicit */_Bool) 63)) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_13 [i_4] [i_3 - 1] [i_3 - 1]))))));
                                var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [(short)11]))));
                                var_25 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_1])));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) (signed char)80);
                }
                for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    arr_18 [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */int) (signed char)2)) > ((-(((/* implicit */int) (signed char)14))))));
                    var_27 = ((/* implicit */short) var_7);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_28 = ((/* implicit */int) min((((unsigned int) arr_11 [i_6] [i_6] [i_0] [i_0])), (((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (((int) 4294967295U)))))));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6] [i_0])) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_13 [i_8] [i_8] [i_7 + 4]))))) ? (((/* implicit */unsigned int) ((arr_17 [i_1] [i_6] [i_7] [i_6]) % (((int) arr_23 [i_0] [i_1] [i_6] [i_7 + 3]))))) : (max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (106095267U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5978))))), (((/* implicit */unsigned int) var_6)))))))));
                                var_30 = ((/* implicit */unsigned char) (+(max(((~(7340032U))), (((/* implicit */unsigned int) var_4))))));
                                arr_25 [i_7] [i_0] [i_0] = ((/* implicit */_Bool) arr_13 [i_6] [i_1] [i_1]);
                            }
                        } 
                    } 
                }
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (max((max((arr_16 [i_0] [i_0]), (((/* implicit */long long int) arr_23 [i_0] [i_1] [i_0] [i_1])))), (((/* implicit */long long int) (-(((/* implicit */int) var_18))))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                    {
                        var_32 += ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-1)), (arr_32 [i_0] [i_0] [i_9] [i_10])))))));
                        var_33 = ((/* implicit */unsigned short) var_19);
                    }
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_11])) ? (((/* implicit */int) arr_35 [i_11] [(unsigned char)8] [i_1] [i_0])) : (((/* implicit */int) (signed char)-26))))), (arr_16 [i_0] [i_9]))) & (((/* implicit */long long int) max((((((/* implicit */int) var_0)) / (((/* implicit */int) var_0)))), (((/* implicit */int) var_4)))))));
                        var_35 = ((/* implicit */short) arr_9 [i_0] [i_0] [i_1] [i_9] [i_11]);
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 1; i_12 < 15; i_12 += 3) 
                        {
                            var_36 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_35 [i_12] [i_0] [i_1] [i_0])))), ((-(((/* implicit */int) (unsigned short)0))))));
                            var_37 = ((((/* implicit */_Bool) ((arr_9 [i_12] [i_12 - 1] [i_12 + 3] [i_1] [i_1]) % (arr_9 [i_12] [i_12 - 1] [i_12 + 3] [i_1] [12])))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (9223372036854775807LL));
                            var_38 = ((/* implicit */_Bool) var_6);
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_39 = var_0;
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)89)) << (((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) + (69)))));
                            arr_40 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((((/* implicit */int) arr_36 [i_0] [i_1] [i_9] [i_11] [i_11])) & (((/* implicit */int) var_6))))));
                            var_41 = ((/* implicit */_Bool) var_18);
                        }
                        arr_41 [i_11] [i_11] [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) min((arr_21 [i_0]), (var_13)))), (((((/* implicit */_Bool) arr_36 [i_0] [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9]))) : (arr_16 [i_0] [i_0])))));
                    }
                    for (signed char i_14 = 2; i_14 < 18; i_14 += 2) 
                    {
                        var_42 = ((/* implicit */signed char) ((unsigned short) (-(arr_23 [i_0] [i_1] [i_9] [i_14]))));
                        arr_45 [i_0] [i_0] [i_0] [i_9] [i_14] = ((/* implicit */unsigned int) var_18);
                        var_43 = ((/* implicit */_Bool) min((arr_37 [i_0] [i_1] [i_1] [i_0] [(signed char)16] [i_9] [i_1]), (((/* implicit */long long int) ((((/* implicit */int) ((arr_14 [i_1] [i_1] [i_9]) || (((/* implicit */_Bool) (unsigned char)185))))) & ((~(arr_42 [i_1]))))))));
                        arr_46 [i_9] [i_9] [i_9] [i_14] [i_9] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_0 [i_14]))));
                    }
                    var_44 += (+(((/* implicit */int) ((((int) arr_11 [i_0] [i_0] [i_0] [(unsigned char)9])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_9] [i_9])))))))));
                }
            }
        } 
    } 
    var_45 = ((/* implicit */signed char) min((min((2769562947U), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
    {
        for (signed char i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            {
                var_46 &= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)59539))));
                /* LoopNest 3 */
                for (short i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (signed char i_19 = 1; i_19 < 12; i_19 += 3) 
                        {
                            {
                                var_47 = ((/* implicit */signed char) 7340032U);
                                var_48 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_20 [i_16] [i_17] [i_17])))), (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
