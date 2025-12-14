/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98765
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1934872926)))) ? ((~(((/* implicit */int) arr_1 [(unsigned short)2] [(unsigned short)2])))) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (arr_0 [20U] [20U]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6144)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [(unsigned char)4] [(unsigned char)4])) - (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) arr_5 [i_1] [i_1]))))) : (var_0)));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (+((~((-(((/* implicit */int) arr_1 [19LL] [i_0]))))))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 4) 
                    {
                        var_17 -= ((/* implicit */short) (((_Bool)1) || (((arr_9 [i_4] [i_2 + 1] [i_1] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_0 [i_4 - 3] [i_2]))))))))));
                        var_18 = ((/* implicit */short) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (short)-6152)) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) arr_14 [i_1] [(short)24] [17LL] [i_1]))))))));
                        var_19 = ((/* implicit */unsigned char) (!(arr_5 [i_1] [i_1])));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_1] [i_4 - 1] [i_2] [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_5] [i_4 - 3] [i_2 - 2] [i_0]))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_11 [i_1]), (arr_11 [i_1])))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)238)), (arr_14 [i_1] [(_Bool)1] [i_1] [i_1])))) : (((/* implicit */int) min(((short)6118), (arr_14 [i_1] [i_2 + 1] [i_2] [i_1]))))));
                            var_21 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) / (arr_9 [i_5] [i_4] [i_2] [i_1]))))), (var_11)));
                            var_22 = ((/* implicit */unsigned short) 3152315626U);
                            arr_18 [i_5] [i_1] [(unsigned short)0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_0 [i_5] [i_0]);
                        }
                        for (short i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            arr_21 [i_6] [i_4] [i_4] [i_1] [(short)17] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_12 [i_2 - 1] [(signed char)22] [i_2 - 1] [i_1] [i_1] [i_0]) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_6 + 1] [(unsigned short)14])))))))) >= (((/* implicit */int) arr_15 [i_2] [i_4] [i_4 - 3] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 2]))));
                            arr_22 [(signed char)8] [8ULL] [(signed char)8] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)0))));
                        }
                        for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) arr_6 [i_7] [i_4] [i_2] [i_0]);
                            var_24 = ((/* implicit */_Bool) min((var_24), ((((+(max((var_10), (var_10))))) != ((+(((/* implicit */int) arr_0 [i_4 - 3] [i_2 - 2]))))))));
                            arr_25 [i_1] [i_1] = ((/* implicit */short) var_12);
                            arr_26 [23LL] [i_7] [i_1] [i_1] [(signed char)15] [(_Bool)1] = ((/* implicit */unsigned long long int) max(((+(arr_20 [i_1] [i_1]))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_4 [i_1] [i_1])), (arr_0 [i_4 - 3] [i_2 + 1]))))));
                        }
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */int) max((var_25), (arr_23 [12] [12])));
    }
    for (short i_8 = 2; i_8 < 21; i_8 += 3) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */_Bool) arr_4 [i_8] [i_8]);
        var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((-1934872927) | (1934872917))), ((+(((/* implicit */int) arr_19 [i_8] [(unsigned char)12] [i_8 + 1] [i_8] [(unsigned short)5]))))))), (arr_28 [(unsigned short)18] [(unsigned short)18])));
        var_27 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_24 [i_8] [i_8 + 1] [i_8])) ? (((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_24 [i_8] [i_8 - 1] [i_8])))), (((/* implicit */int) (((+(((/* implicit */int) var_6)))) != (((/* implicit */int) arr_11 [i_8])))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                {
                    var_28 = ((/* implicit */int) max((var_28), ((-(((/* implicit */int) arr_3 [(unsigned short)24]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_11 = 2; i_11 < 20; i_11 += 2) 
                    {
                        arr_40 [i_11 - 2] [i_8] [i_8] = ((/* implicit */unsigned long long int) (short)-10413);
                        var_29 = ((/* implicit */signed char) arr_3 [i_8]);
                        arr_41 [i_11] [i_8] [i_9] [i_8] [i_8 - 1] = ((/* implicit */_Bool) arr_19 [i_11] [i_10] [i_10] [i_9] [i_8 - 2]);
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_11] [i_11])))))));
                            arr_44 [i_8] [i_11] [i_10 + 1] [i_9] [i_8] = ((/* implicit */int) arr_39 [i_12] [i_11 - 1] [i_9] [i_8]);
                        }
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)13)) ? (arr_43 [i_13] [i_11] [i_8] [i_9] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_13] [i_10] [i_11] [i_10 + 1] [i_10] [i_8] [i_8])))))));
                            arr_47 [i_8] [i_11] [i_10] [i_8] [i_8] = ((/* implicit */_Bool) var_10);
                        }
                        for (unsigned int i_14 = 2; i_14 < 21; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8] [i_8])) ? (arr_20 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_8])))));
                            arr_50 [i_8] [i_8] = ((/* implicit */short) arr_8 [i_8] [i_8]);
                        }
                    }
                    /* LoopSeq 3 */
                    for (short i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
                    {
                        arr_53 [i_8] [i_9] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_1))))))) ? (max((arr_23 [i_8] [i_8]), (max((((/* implicit */int) var_6)), (arr_42 [i_15] [i_9] [i_9] [i_9] [i_8 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [14] [14])))))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (signed char)-104))));
                    }
                    for (short i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 22; i_17 += 1) 
                        {
                            var_34 = (+(arr_43 [i_17] [i_8] [i_8] [i_8] [i_8]));
                            var_35 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                            var_36 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (short)-6119))))));
                            arr_58 [i_8] [i_16] [i_10] [i_8] = ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) arr_43 [9LL] [i_16] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) arr_38 [i_8]))))))));
                        }
                        var_37 = ((/* implicit */unsigned long long int) var_4);
                        arr_59 [i_8] [i_10 + 1] [i_8 - 1] [i_8] = ((/* implicit */signed char) arr_23 [i_8] [i_8]);
                    }
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_19 = 3; i_19 < 21; i_19 += 1) 
                        {
                            var_38 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_49 [i_8] [i_18] [i_10] [i_9] [i_8])) ? (((/* implicit */int) arr_24 [i_8] [i_9] [i_8])) : (((/* implicit */int) arr_39 [i_18] [14] [(unsigned char)10] [i_8]))))));
                            arr_65 [i_8] [(short)14] [i_18] [i_10] [(_Bool)1] [i_8] = ((/* implicit */signed char) arr_34 [20] [i_8] [i_8] [i_10 - 1]);
                            arr_66 [i_8] [i_18] [i_10] [i_8] [i_8] = arr_51 [i_10 - 1] [i_18] [i_10 - 1] [i_8] [i_8] [i_8];
                        }
                        for (long long int i_20 = 3; i_20 < 21; i_20 += 4) 
                        {
                            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) arr_8 [14U] [14U]))));
                            var_40 = ((/* implicit */signed char) 1048064U);
                            arr_70 [i_8] [(unsigned char)10] [i_8] = ((/* implicit */unsigned short) arr_56 [i_8] [i_10] [i_10 - 1] [i_8 + 1] [i_8]);
                        }
                        arr_71 [i_8] [i_10] [i_9] [i_8] = ((/* implicit */unsigned int) (short)6119);
                        arr_72 [i_8] [i_8] = ((/* implicit */signed char) arr_1 [i_18] [i_9]);
                        /* LoopSeq 2 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_76 [(unsigned char)6] [i_18] [i_10] [(unsigned short)2] [(unsigned char)6] &= ((/* implicit */unsigned int) (~(((/* implicit */int) var_13))));
                            var_41 = (!(((/* implicit */_Bool) arr_11 [i_8])));
                        }
                        for (signed char i_22 = 4; i_22 < 20; i_22 += 4) 
                        {
                            var_42 = ((/* implicit */short) (-(((arr_5 [i_8] [i_8]) ? (arr_20 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [13ULL] [i_9] [i_18] [i_10] [i_9] [1U])))))));
                            var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) arr_5 [i_22] [i_22]))));
                        }
                        var_44 -= ((((/* implicit */int) (signed char)96)) == (1732199379));
                    }
                    var_45 = ((/* implicit */unsigned short) (~(arr_20 [i_8] [i_8])));
                }
            } 
        } 
    }
    var_46 = ((/* implicit */_Bool) var_9);
}
