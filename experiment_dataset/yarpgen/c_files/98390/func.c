/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98390
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
    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)181))));
    var_16 = ((/* implicit */int) (unsigned char)58);
    var_17 = (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_18 = ((unsigned char) var_4);
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(arr_4 [i_1])))) & ((~(((/* implicit */int) (unsigned char)255))))));
            var_20 = ((/* implicit */_Bool) (-((~(arr_5 [i_0] [i_0])))));
            var_21 = ((/* implicit */unsigned char) ((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        }
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2]))));
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_0 [i_2]), (((/* implicit */unsigned short) var_8)))))));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 2958237733U)) ? (1336729574U) : (((/* implicit */unsigned int) 412411969)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2]))))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_27 |= ((/* implicit */unsigned char) ((0LL) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_3] [i_4] [i_3] [i_3])) && (((/* implicit */_Bool) var_0)))))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((((/* implicit */int) (unsigned char)195)) != (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (2958237733U))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((var_1) - (((/* implicit */unsigned int) arr_16 [i_7] [i_5] [i_7] [i_7] [i_3] [i_2])))))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5]))) : (3373665108U)))) ? (arr_21 [i_2] [i_7] [i_4] [i_7] [i_4] [i_7]) : (((/* implicit */long long int) ((arr_19 [i_7]) & (((/* implicit */int) arr_2 [i_5]))))))))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2958237711U))))) | (((/* implicit */int) arr_1 [i_2])))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((arr_14 [i_2] [(unsigned short)12] [i_2] [i_2] [i_8]) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))))))));
                            var_34 = ((/* implicit */short) (~(arr_20 [i_2] [i_2] [i_4] [i_5] [i_8])));
                            var_35 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_25 [i_2] [i_3] [i_4] [i_4] [i_2])))) - (((/* implicit */int) arr_25 [i_2] [i_3] [i_4] [i_5] [i_4]))));
                            var_36 = ((/* implicit */unsigned int) arr_3 [i_8] [i_4] [i_4]);
                        }
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_37 &= ((/* implicit */signed char) ((_Bool) var_5));
                            var_38 = ((/* implicit */_Bool) arr_5 [i_9] [i_3]);
                            var_39 = ((((/* implicit */_Bool) ((int) arr_13 [i_2] [i_3] [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_4] [i_5] [i_5] [i_5] [i_2]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_4)))));
                            var_40 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) (_Bool)1)))) << (((((var_11) & (var_11))) - (742180114U)))));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-94))))) != (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_5] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2] [i_3] [i_5] [i_5] [i_9]))) : (arr_21 [i_2] [i_3] [i_4] [i_5] [i_5] [i_9])))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_42 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_2] [i_2]))));
                            var_43 &= ((/* implicit */int) 158796826U);
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1889042551)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))));
                            var_45 &= ((/* implicit */unsigned int) (unsigned char)58);
                        }
                        var_46 = ((/* implicit */unsigned char) arr_18 [i_2] [i_3] [i_3] [i_3] [i_4] [i_4] [i_5]);
                        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) (-(((/* implicit */int) arr_25 [i_2] [i_3] [i_4] [i_4] [i_5])))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_12 = 3; i_12 < 17; i_12 += 2) 
                        {
                            var_48 = ((/* implicit */unsigned char) ((int) arr_22 [i_3] [i_3] [i_4] [i_11] [i_12] [i_3] [i_3]));
                            var_49 = (+(((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3])) ? (var_10) : (var_10))));
                        }
                        var_50 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(4136170491U)))) ? (((/* implicit */int) ((unsigned short) arr_26 [i_3] [i_3] [i_4] [i_3] [i_3]))) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_4] [i_11])))), (((((/* implicit */int) arr_8 [i_11] [i_4])) - (((/* implicit */int) arr_1 [i_3]))))));
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((min((arr_5 [i_2] [i_2]), (((/* implicit */int) var_8)))), (((((/* implicit */int) arr_6 [i_2] [i_11])) | (arr_19 [i_3])))))) - (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_3] [i_4] [i_11])) ? (158796805U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 1) 
                    {
                        var_52 = ((/* implicit */signed char) min((((unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (_Bool)1))));
                        var_53 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) max((arr_30 [i_2] [i_3] [i_3] [i_2] [i_4] [i_4]), (arr_11 [i_2] [i_3] [i_3] [i_3])))), (arr_2 [i_3]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 2; i_14 < 16; i_14 += 1) 
                    {
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49680)) << (((long long int) (_Bool)1))));
                        var_55 += ((/* implicit */signed char) ((unsigned char) arr_17 [i_14] [i_14] [i_14] [i_14] [i_14 + 3] [8U]));
                        var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((unsigned char) (unsigned short)49701)))));
                    }
                }
            } 
        } 
    }
}
