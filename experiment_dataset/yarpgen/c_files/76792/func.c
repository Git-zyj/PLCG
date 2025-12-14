/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76792
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
    var_12 = var_0;
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (var_9) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65527)))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) var_8);
                var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (((((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (8704924504483601555ULL) : (arr_3 [i_1]))) ^ (var_5))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                arr_12 [i_3] = var_1;
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_14 ^= ((/* implicit */signed char) ((unsigned long long int) arr_14 [i_2] [i_2] [i_5] [i_2]));
                                arr_20 [i_2] [i_3] [i_4] [i_2] [i_4] = (~(((/* implicit */int) (short)7984)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    var_15 -= ((/* implicit */_Bool) min((9741819569225950061ULL), (((/* implicit */unsigned long long int) ((int) (+(arr_6 [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 4) 
                    {
                        for (signed char i_9 = 3; i_9 < 7; i_9 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (~(5ULL)));
                                arr_31 [i_8] [4U] [i_8] [i_7] [i_3] [i_8] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [(signed char)6] [i_8] [8ULL] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((signed char) 9741819569225950060ULL)), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)8001)) || (((/* implicit */_Bool) var_1))))))))) : ((~(var_9)))));
                                arr_32 [i_2] [i_3] [(signed char)2] [i_3] [i_3] [i_3] [i_3 + 1] &= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [(signed char)6] [i_2] [(signed char)6])) ? (((/* implicit */int) arr_25 [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)128))))), (8704924504483601554ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_25 [i_3] [i_3] [i_9])) >= (arr_24 [i_2] [i_2] [i_2] [i_2])))) > (((/* implicit */int) min((arr_9 [i_2] [i_8]), (((/* implicit */unsigned short) arr_19 [(_Bool)1] [(signed char)2] [i_2] [i_2] [i_2]))))))))));
                                var_17 = ((/* implicit */unsigned short) 4294967295U);
                                arr_33 [i_3] [i_7] [i_8] [i_3] = ((/* implicit */unsigned int) ((unsigned short) arr_10 [i_2]));
                            }
                        } 
                    } 
                    arr_34 [i_3] [i_3 + 1] [i_2] = ((/* implicit */short) ((_Bool) min((arr_16 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 1]), (arr_16 [i_3 + 1] [i_3 + 1] [i_3] [(_Bool)1] [i_3 + 1]))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        for (signed char i_11 = 2; i_11 < 9; i_11 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_22 [i_3] [i_7] [i_3])), (arr_17 [i_3] [i_3 + 1] [i_3] [i_3] [i_3])))) ? (((long long int) (unsigned short)10778)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_22 [i_2] [i_10] [i_3])) : (((/* implicit */int) arr_22 [i_3 + 1] [4LL] [i_3])))))));
                                var_19 = ((/* implicit */int) min((var_19), (((int) ((long long int) ((unsigned long long int) 9741819569225950035ULL))))));
                                var_20 = ((((arr_36 [i_2] [i_2] [i_2] [i_2]) / (arr_36 [i_7] [i_7] [(unsigned short)0] [(unsigned short)0]))) * (((/* implicit */unsigned long long int) ((long long int) ((_Bool) 9741819569225950061ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)113)) ? (arr_13 [i_3 + 1] [i_12 - 1]) : (8704924504483601556ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (1452816136U) : (3124352073U))))));
                                arr_45 [i_2] [i_3] [i_2] [i_12] [i_2] [i_3] [i_2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) (short)7985))))) ? (arr_17 [i_2] [i_3] [i_3] [i_2] [i_13]) : (((/* implicit */long long int) 1840142451U)))));
                            }
                        } 
                    } 
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) arr_14 [8] [i_3] [i_3] [8]);
                    /* LoopNest 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 1; i_16 < 6; i_16 += 3) 
                        {
                            {
                                arr_53 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((int) 9741819569225950072ULL));
                                var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 6049812507094941778ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_3 + 1] [i_3])))) % (((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) arr_27 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1])) : (arr_2 [i_3] [i_3 + 1])))));
                                arr_54 [i_14] [i_14] [i_3] [i_14] [i_14] [(signed char)9] = ((((arr_29 [i_3 + 1] [i_14] [i_15] [i_15] [i_3]) != (arr_29 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]))) ? (((((/* implicit */_Bool) arr_37 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2] [i_3 + 1] [i_14] [i_15] [i_15]))))) : (((/* implicit */unsigned long long int) arr_48 [i_16] [i_16] [i_16] [i_16 - 1])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 1; i_17 < 7; i_17 += 4) 
                    {
                        arr_58 [i_17] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (9741819569225950059ULL)))));
                        arr_59 [i_3] [i_2] [i_3 + 1] [i_14] [i_17] = min(((~(9741819569225950059ULL))), (((/* implicit */unsigned long long int) -2695901791245553814LL)));
                        arr_60 [i_3] [(signed char)0] [(signed char)0] [(signed char)4] = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_2] [(unsigned short)9] [i_3] [i_17 - 1]))) ^ (1023U)))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_3 + 1] [i_17] [i_17 - 1] [i_3]))) + (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_14] [i_3]))) : (var_1))))));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (signed char)8))));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        var_25 = arr_24 [i_2] [i_3 + 1] [i_14] [i_18];
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((unsigned int) var_4)))));
                    }
                    /* vectorizable */
                    for (signed char i_19 = 1; i_19 < 9; i_19 += 1) 
                    {
                        arr_66 [i_19] [i_19 + 1] [i_19 + 1] [i_19 + 1] [(signed char)9] [i_3] = (!(((/* implicit */_Bool) arr_41 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3])));
                        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_19])))))));
                        arr_67 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) var_10);
                        arr_68 [i_3] [i_3] = ((/* implicit */long long int) (-((+(arr_41 [i_14] [i_14] [i_14] [1ULL] [i_14])))));
                        /* LoopSeq 1 */
                        for (int i_20 = 1; i_20 < 8; i_20 += 1) 
                        {
                            arr_71 [i_3] = ((/* implicit */unsigned long long int) arr_61 [i_2] [i_2] [i_14] [i_2]);
                            arr_72 [i_2] [i_2] [i_2] &= (~(((/* implicit */int) arr_47 [i_19 + 1] [i_20 + 2] [i_3 + 1])));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((6004962648347145835ULL) | ((+(var_9))))))));
                            arr_73 [i_2] [i_3] [i_14] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_24 [i_19 - 1] [(unsigned char)1] [i_19 - 1] [i_19])) | (8704924504483601544ULL)));
                        }
                    }
                }
                arr_74 [i_2] [i_3] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_41 [i_2] [i_3 + 1] [i_2] [(short)8] [i_2])) * (13607378053680730656ULL)))) ? ((-(9741819569225950045ULL))) : (((/* implicit */unsigned long long int) ((arr_25 [i_2] [i_3] [i_3]) ? (var_6) : (((/* implicit */long long int) -18116956))))))));
            }
        } 
    } 
}
