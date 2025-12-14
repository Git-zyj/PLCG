/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59711
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
    var_15 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)57224)) : (((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) (short)26758)) & (((/* implicit */int) (unsigned short)57231))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (var_4))) : (((/* implicit */int) ((unsigned short) arr_8 [i_1] [i_1])))));
                        var_19 += (short)-26758;
                        arr_11 [i_0] [(short)13] [i_1] [(short)13] = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) >> ((((~(((/* implicit */int) arr_3 [i_1] [i_3])))) + (21262)))))) : (((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) >> ((((((~(((/* implicit */int) arr_3 [i_1] [i_3])))) + (21262))) + (8502))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2 - 1] [i_4]))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_1 + 2] [i_2 - 1] [i_1 + 2] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1]))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) var_5))));
                            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) (short)-26759))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50702))) : (arr_14 [(unsigned short)12] [i_1 + 2] [i_0] [i_4] [i_5]))) : (var_8)));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                            arr_22 [i_1] [(unsigned char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [(signed char)10] [i_2] [i_2] [i_1])))));
                            var_24 += ((unsigned short) 17944029765304320ULL);
                        }
                    }
                    arr_23 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)33086))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [(unsigned short)2] [(short)12] [i_2 + 1] [i_1]))) : (var_8))) : (((/* implicit */long long int) arr_2 [i_0] [i_1 + 2] [i_1]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((2996327255482747822ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26758))))))));
                        arr_26 [i_1] [0U] [i_2 + 1] [i_2] [0U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)10))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [10LL] [10LL] [i_0])) : (((/* implicit */int) arr_10 [i_7] [i_0]))))) : (arr_14 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1] [i_2 - 1])));
                        arr_27 [i_2 - 1] [i_1] [8ULL] [8ULL] [(short)1] = ((/* implicit */unsigned short) var_3);
                    }
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
                    {
                        var_26 += ((/* implicit */short) var_5);
                        arr_30 [i_0] [(signed char)3] [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) < (((/* implicit */int) (unsigned char)236)))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_1] [i_8]))));
                        arr_31 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1335846938))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        var_27 = ((/* implicit */_Bool) max((var_27), (var_11)));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_9])) || (((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_10]))));
            var_29 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_36 [(unsigned char)3] [i_9] [i_10])))));
            var_30 = ((/* implicit */signed char) arr_34 [i_9]);
        }
        arr_37 [i_9] = ((short) arr_32 [i_9]);
        arr_38 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_9])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_10)) ? (arr_34 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33093)))))));
        /* LoopSeq 2 */
        for (signed char i_11 = 1; i_11 < 23; i_11 += 4) 
        {
            arr_42 [i_9] [11U] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 1335846938)) <= (arr_34 [i_11 - 1])));
            arr_43 [i_9] [i_11] = ((/* implicit */signed char) var_1);
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (((!(((/* implicit */_Bool) 17944029765304320ULL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))));
            arr_44 [(signed char)21] [i_11] [(unsigned char)3] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)8302)) ? (((/* implicit */int) var_11)) : (var_12))) << (((arr_35 [i_11 + 2] [i_11 - 1] [i_11 + 1]) - (3093659022U)))));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    {
                        var_32 += ((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)-10)));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8304))))) * (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_48 [i_9] [(short)3] [i_12] [i_13]))))));
                    }
                } 
            } 
        }
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) var_6))));
            var_35 += ((/* implicit */unsigned int) ((var_4) | (((/* implicit */int) arr_51 [i_9] [i_14]))));
            arr_52 [i_9] [(_Bool)1] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_14] [i_14] [(unsigned short)19])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_50 [i_14] [i_14] [i_14]))));
            arr_53 [i_14] [i_9] [(short)12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
        }
    }
    for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        var_36 = (!(((/* implicit */_Bool) arr_50 [i_15] [i_17] [i_18])));
                        var_37 += ((/* implicit */unsigned int) var_11);
                    }
                    for (long long int i_19 = 2; i_19 < 20; i_19 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64))))) < (((/* implicit */int) (unsigned short)32561)))) && (((/* implicit */_Bool) (short)32767)))))));
                        var_39 = ((/* implicit */unsigned short) max((min(((((_Bool)1) ? (((/* implicit */int) arr_39 [i_17])) : (((/* implicit */int) arr_55 [i_15])))), (((/* implicit */int) ((arr_58 [(signed char)10]) && (((/* implicit */_Bool) arr_47 [(short)11] [i_16] [i_16] [i_16]))))))), (((/* implicit */int) arr_54 [(_Bool)1]))));
                        arr_65 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15] [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (_Bool)1))))) ? (arr_40 [i_15 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15]))))) / (max(((+(2131690837308807806ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_57 [i_16] [i_16])))))))));
                    }
                    arr_66 [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_49 [i_15])), (var_6)))) ? (max((((/* implicit */long long int) max((var_7), (arr_47 [i_15 - 1] [i_15 - 1] [i_17] [i_17])))), (max((((/* implicit */long long int) arr_57 [(_Bool)1] [i_17])), (var_6))))) : (((/* implicit */long long int) max((((int) var_7)), (((/* implicit */int) arr_55 [i_15])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 3; i_20 < 21; i_20 += 2) 
                    {
                        for (signed char i_21 = 0; i_21 < 22; i_21 += 2) 
                        {
                            {
                                var_40 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_6)) > (arr_34 [i_15 + 2]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_69 [i_15 + 3] [i_15] [i_15] [i_16] [i_15 + 1]))))) >= (max((var_6), (((/* implicit */long long int) arr_59 [i_15 - 1] [i_16] [i_21]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_69 [i_16] [i_16] [i_16] [i_21] [i_16]))))))))));
                                arr_72 [i_15] [i_15] [7LL] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_71 [i_21] [(signed char)12] [i_15] [i_15] [i_16] [i_15 + 2])) ? (((/* implicit */int) (unsigned short)30645)) : (((/* implicit */int) var_14)))))) ? (max((min((12U), (((/* implicit */unsigned int) (unsigned short)8304)))), (((/* implicit */unsigned int) max((var_11), (var_11)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_11), ((!(((/* implicit */_Bool) (signed char)12))))))))));
                            }
                        } 
                    } 
                    arr_73 [i_15] [i_17] [i_17] [(_Bool)1] = max((((max((arr_61 [i_15] [i_16] [i_15] [i_17] [i_17]), (17944029765304307ULL))) >> (((/* implicit */int) arr_51 [i_15] [i_17])))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_41 [i_15])) : (((/* implicit */int) (signed char)-2)))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) arr_36 [i_17] [i_16] [(unsigned char)3])), ((unsigned short)10377))))))));
                    arr_74 [i_15] [i_16] [i_17] [i_17] = ((/* implicit */_Bool) (signed char)-18);
                }
            } 
        } 
        arr_75 [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [(unsigned short)11] [i_15 + 2] [i_15] [i_15] [i_15 + 2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13))))) ? ((+(var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (signed char)-78))))))))));
    }
    for (unsigned char i_22 = 0; i_22 < 20; i_22 += 1) 
    {
        var_41 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) arr_47 [i_22] [i_22] [i_22] [i_22])) + (((/* implicit */int) var_13)))) : (((arr_41 [(unsigned short)5]) ? (((/* implicit */int) arr_79 [i_22])) : (((/* implicit */int) arr_45 [i_22] [i_22] [(unsigned short)13])))))) ^ (((/* implicit */int) var_13))));
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) min((var_8), (((/* implicit */long long int) ((int) var_6))))))));
        arr_80 [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
        arr_81 [i_22] [i_22] = ((/* implicit */unsigned char) 6460419488271405405LL);
    }
}
