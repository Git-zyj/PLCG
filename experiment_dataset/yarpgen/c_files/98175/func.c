/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98175
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_10 [i_0] [0LL] [0LL] [i_2] [i_0] [i_0] = ((/* implicit */int) var_7);
                        arr_11 [i_0] [i_0] [(unsigned char)3] [i_3] = (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_3)) : (-816967113)))));
                    }
                    arr_12 [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) 816967122))))), (((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_6 [i_0] [i_1] [(signed char)9]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_1] [(signed char)20] [i_0] = max((max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))))), (var_5))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)8))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 2; i_5 < 20; i_5 += 2) 
                        {
                            arr_18 [(unsigned char)10] [10U] [i_2 + 2] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_12), (var_12))))));
                            arr_19 [i_5] [(signed char)14] [i_1] [i_1] [12] [i_0] = ((/* implicit */unsigned int) max(((!((!(((/* implicit */_Bool) 18446744073709551599ULL)))))), (((arr_7 [i_2 - 1] [i_2]) <= (((/* implicit */int) max((var_4), (var_9))))))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) 816967133));
                            arr_24 [i_0] [i_4] [i_2 - 2] [i_1 + 2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2 + 2] [i_6 - 1]))));
                        }
                    }
                    for (unsigned int i_7 = 3; i_7 < 19; i_7 += 3) 
                    {
                        arr_27 [i_7] [i_2 + 3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)50)) & (((/* implicit */int) (_Bool)1))));
                        arr_28 [i_1] [i_2 + 4] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_16 [i_1] [i_7 - 1] [i_7 - 3] [i_1] [i_7 - 3])) == (((/* implicit */int) arr_2 [i_0]))))));
                        arr_29 [(unsigned char)3] [i_1] [i_2] [i_0] = var_13;
                        arr_30 [i_0] [i_1] [(unsigned short)16] [i_0] = ((/* implicit */unsigned char) (-2147483647 - 1));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        arr_33 [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (17886093455031823851ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            arr_36 [8] [i_0] [i_2] [i_8] [(_Bool)0] [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)202)) ? (536862720ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)5842))))))));
                            arr_37 [i_0] [i_1 - 2] [(unsigned char)19] [i_0] [i_8] [1LL] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0])) << (((((/* implicit */int) arr_0 [i_1 + 3] [i_0])) - (153)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0])) << (((((((((/* implicit */int) arr_0 [i_1 + 3] [i_0])) - (153))) + (86))) - (13))))));
                        }
                        arr_38 [(signed char)18] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 8839538192393504601LL)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        arr_39 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                        /* LoopSeq 2 */
                        for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            arr_42 [3] [0U] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_0] [i_1])) && (((/* implicit */_Bool) arr_25 [i_1 - 2] [i_2] [i_2 + 1] [i_2 + 4]))));
                            arr_43 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                            arr_44 [i_10] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0])) ? (((/* implicit */int) arr_26 [i_0])) : (((/* implicit */int) arr_0 [i_2 + 1] [i_2]))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_49 [i_1] [i_1] [i_1] [i_0] [i_11] = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) | (((/* implicit */int) (signed char)-1))))));
                            arr_50 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2U))));
                        }
                    }
                    for (unsigned short i_12 = 3; i_12 < 20; i_12 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 1; i_13 < 20; i_13 += 1) 
                        {
                            arr_56 [i_12] [i_12] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_0)))) ? (((/* implicit */int) ((((/* implicit */int) arr_52 [i_1] [i_0] [i_1] [i_0] [i_1])) >= (((/* implicit */int) arr_52 [3] [i_0] [i_2] [i_0] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_12] [i_0] [(signed char)18] [i_0] [i_0])))))));
                            arr_57 [i_13] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_46 [i_0] [i_1] [i_2] [i_0] [i_0]);
                            arr_58 [i_0] [i_13] [6] [6U] [i_13] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((72057591890444288ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (816967107) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)51)))))));
                            arr_59 [i_0] = ((/* implicit */int) 5U);
                            arr_60 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (arr_34 [i_0] [i_0] [i_0] [6U] [i_0]))))))), (((311235905U) << (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 4) 
                        {
                            arr_63 [i_0] [(short)16] [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_34 [i_0] [i_0] [i_1 - 1] [i_12] [i_14])))) && (((/* implicit */_Bool) max((((/* implicit */short) var_3)), (arr_8 [i_0] [i_1 - 1] [(signed char)16] [(_Bool)1] [i_2])))));
                            arr_64 [i_0] [(short)16] [(short)20] = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) arr_8 [i_0] [i_12 + 1] [i_2 + 3] [i_2 - 1] [i_0])) : (((/* implicit */int) var_11)))))));
                        }
                        arr_65 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_51 [i_1] [i_2] [i_1] [i_1] [i_0] [i_0]))) << (((/* implicit */int) min((arr_40 [i_0] [i_1]), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (_Bool)1))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 2; i_15 < 17; i_15 += 2) 
                        {
                            arr_68 [(unsigned char)17] [i_1] [i_2] [i_12 + 1] [i_0] [i_15] = ((((/* implicit */int) (!(var_8)))) + (((/* implicit */int) ((unsigned char) max((0U), (((/* implicit */unsigned int) var_13)))))));
                            arr_69 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_13 [i_0] [i_1 + 4] [i_0] [i_12] [i_2] [i_0]))))));
                            arr_70 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_25 [i_12 - 2] [i_1] [i_1] [i_12]), (((/* implicit */unsigned char) var_5))))) ? (((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_5)))))));
                        }
                    }
                    arr_71 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) 10U)) && (((/* implicit */_Bool) (signed char)-16))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_0] [i_1] [i_2 + 4] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)145)) >= (((/* implicit */int) var_4))))) : (((/* implicit */int) ((unsigned char) -7603685420904434334LL))))) >= (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (unsigned int i_16 = 1; i_16 < 19; i_16 += 3) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                {
                    arr_81 [i_17] [i_16] [i_17] = ((/* implicit */int) (!((!(((/* implicit */_Bool) -1LL))))));
                    arr_82 [i_16] [i_16] [i_16] [i_16 + 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) min((max((var_4), ((unsigned char)98))), (((/* implicit */unsigned char) ((2305843009213689856LL) > (var_12)))))))));
    /* LoopNest 3 */
    for (short i_19 = 0; i_19 < 19; i_19 += 2) 
    {
        for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
        {
            for (unsigned short i_21 = 1; i_21 < 18; i_21 += 2) 
            {
                {
                    arr_92 [i_21] [i_21] = ((unsigned char) max((arr_66 [i_21 - 1] [i_21] [i_21 + 1] [i_21] [i_21 - 1] [i_21] [i_21 - 1]), (max((1325595322U), (((/* implicit */unsigned int) (signed char)-56))))));
                    arr_93 [i_19] [i_20] [i_21] [i_19] = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
}
