/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70040
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) var_3);
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 23; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [i_0]);
                    arr_10 [i_0] = (~(((/* implicit */int) max(((unsigned char)208), ((unsigned char)255)))));
                }
                for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_8) || (((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))));
                        arr_16 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) arr_8 [i_1]);
                        arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) ((_Bool) (signed char)109)))));
                        arr_18 [i_0] [i_0] [i_1] [(_Bool)1] [i_3] [i_4] = ((/* implicit */_Bool) (unsigned char)14);
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) ((((long long int) arr_1 [i_3])) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_12))))))));
                        arr_22 [i_5] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) max((min((min((((/* implicit */long long int) var_5)), (137430564864LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)9]))))))), (((/* implicit */long long int) arr_20 [i_0] [i_3] [i_1] [i_0]))));
                    }
                    arr_23 [i_0] [i_1] [i_1] [(unsigned short)1] = (!(((/* implicit */_Bool) ((unsigned long long int) -83081739))));
                }
                arr_24 [i_1] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                arr_25 [i_1] = ((/* implicit */signed char) var_10);
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 17; i_6 += 1) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                arr_30 [i_6] = ((/* implicit */unsigned int) var_13);
                arr_31 [i_6 - 1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_6] [i_6 - 1] [i_6] [(signed char)7])) ? (((arr_13 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (arr_13 [i_6 - 1] [i_6 + 1] [2] [i_6 - 1])));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                arr_40 [i_6] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned short)65535))))))));
                                arr_41 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_7))))))) ? (((((/* implicit */int) arr_20 [(unsigned char)10] [i_9] [i_8] [i_7 - 1])) & ((+(((/* implicit */int) var_2)))))) : (((((((/* implicit */int) arr_1 [i_6])) >> (((((/* implicit */int) var_1)) - (214))))) << ((((~(((/* implicit */int) var_11)))) + (22898)))))));
                                arr_42 [i_6] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_39 [(_Bool)1] [i_9] [i_8] [i_7])) : (((/* implicit */int) (unsigned short)29064)))) : (((/* implicit */int) (signed char)62)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        arr_46 [i_6] [i_6] [i_6 + 1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_45 [i_6] [i_6] [i_6] [i_6])) ? ((+(((/* implicit */int) arr_27 [i_6 - 1])))) : (((/* implicit */int) min(((unsigned char)118), (((/* implicit */unsigned char) var_7)))))))));
                        arr_47 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4)))))) || (((/* implicit */_Bool) ((-137430564864LL) / (-137430564864LL))))));
                        arr_48 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (137430564864LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56626))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_12 = 2; i_12 < 16; i_12 += 3) 
                        {
                            arr_51 [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-107))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_49 [i_6 + 1] [i_7] [i_8])) : (((/* implicit */int) arr_33 [i_6])))) : ((+(((/* implicit */int) arr_38 [i_6] [i_6 - 1] [(unsigned short)2] [i_6] [i_6]))))));
                            arr_52 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_8] [i_11] [i_12] = (!(((/* implicit */_Bool) arr_38 [i_12 + 1] [i_12] [i_12 + 1] [i_6] [i_12 + 1])));
                            arr_53 [i_6] = ((/* implicit */int) arr_6 [(short)6] [i_8] [i_11]);
                        }
                        for (unsigned short i_13 = 1; i_13 < 16; i_13 += 3) 
                        {
                            arr_58 [i_6] [i_11] [i_8] [i_11] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)2)) / (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [i_13 - 1] [i_7 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_28 [i_6] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))));
                            arr_59 [i_8] [i_6] = arr_57 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6] [i_6 - 1];
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                        {
                            arr_63 [i_6] [i_6] [i_6] [i_6] [i_11] [i_14] = ((/* implicit */_Bool) (((-(arr_19 [i_6] [i_6 - 1] [i_6 - 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_14] [i_11] [i_7])))));
                            arr_64 [i_6] [i_6] [i_6] [i_11] [i_8] = ((/* implicit */_Bool) ((((arr_36 [i_7] [(unsigned char)4]) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            arr_65 [i_6] [(unsigned char)16] [i_6] = ((/* implicit */unsigned short) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-114))))));
                            arr_66 [i_11] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) var_7))) + (2147483647))) >> (((int) arr_1 [i_6]))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
                        {
                            arr_70 [i_6] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_11)))), (max((((((/* implicit */int) var_9)) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_33 [i_6])))))))));
                            arr_71 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (unsigned char)11))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34885)))))));
                        }
                        arr_72 [i_6] [i_6] [i_8] = ((((((/* implicit */_Bool) arr_7 [i_6 + 1] [8LL])) || (((/* implicit */_Bool) (signed char)-82)))) || ((_Bool)1));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 3; i_16 < 16; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_78 [(short)6] = ((/* implicit */long long int) arr_50 [(signed char)0] [i_7] [(signed char)0] [5]);
                                arr_79 [i_6] [i_16] [i_7] [i_6] = ((/* implicit */_Bool) var_0);
                                arr_80 [i_8] [i_8] [i_6] [i_8] = (i_6 % 2 == zero) ? (((int) ((((int) (unsigned short)2116)) ^ (((arr_61 [i_6] [i_7 - 1] [(unsigned char)7] [(unsigned char)7] [i_6]) << (((((/* implicit */int) arr_62 [(signed char)16])) - (1)))))))) : (((int) ((((int) (unsigned short)2116)) ^ (((((arr_61 [i_6] [i_7 - 1] [(unsigned char)7] [(unsigned char)7] [i_6]) + (2147483647))) << (((((/* implicit */int) arr_62 [(signed char)16])) - (1))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
