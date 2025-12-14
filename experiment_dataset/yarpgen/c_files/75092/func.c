/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75092
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
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [(short)1] [i_2] [(unsigned char)9] = ((/* implicit */unsigned int) min((((((arr_4 [i_0 + 1] [i_0]) + (2147483647))) << (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)-64)))) - (45))))), (min((((/* implicit */int) ((signed char) var_16))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_17))))))));
                    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (var_6)))) % ((~(((/* implicit */int) var_18))))))), (max((((((/* implicit */_Bool) var_18)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((868757937U) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((var_8), (((/* implicit */unsigned short) (unsigned char)72)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7)))))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_9))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_17);
                    var_21 += ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)2048)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) arr_0 [0])))) ^ (((/* implicit */int) var_2))))), (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [(unsigned char)6]))))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_4 [i_0] [4])) : (868757931U)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    arr_15 [i_3] [(short)1] [i_5] [(short)1] = ((/* implicit */unsigned int) max(((-(((283145657) | (((/* implicit */int) var_5)))))), (((/* implicit */int) min((var_5), (arr_13 [i_5 - 1] [i_5 + 1] [i_5 + 1]))))));
                    arr_16 [i_5 + 2] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */int) (unsigned char)96)))))));
                }
                arr_17 [(signed char)0] [i_3] = var_10;
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                            {
                                arr_26 [(short)4] [i_8] [i_8] [i_3] = (+(max((((((/* implicit */_Bool) arr_20 [9U] [i_7] [(unsigned char)6] [(unsigned char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1032685417U))), (((/* implicit */unsigned int) arr_21 [(short)0] [i_4] [7] [3])))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)72)), (arr_8 [(unsigned short)14])))) - (((/* implicit */int) (signed char)77))));
                            }
                            /* vectorizable */
                            for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                            {
                                var_23 = ((/* implicit */int) ((short) var_4));
                                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3]))));
                            }
                            for (unsigned char i_10 = 3; i_10 < 13; i_10 += 3) 
                            {
                                arr_32 [(unsigned char)4] [i_4] [i_6] [(short)8] [i_10] = ((/* implicit */int) ((unsigned char) max((min((((/* implicit */unsigned int) 925916250)), (arr_1 [i_10]))), (max((var_7), (var_7))))));
                                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_10 + 2] [i_10 - 1] [i_10 + 1] [i_10 - 1])))))));
                                arr_33 [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)63480)))), (var_16)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-46)) ? (3262281878U) : (((/* implicit */unsigned int) arr_11 [i_3] [(unsigned char)3]))))) ? (741671981) : (((/* implicit */int) (unsigned char)121)))) : ((~(((/* implicit */int) var_10))))));
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_10 + 2] [i_4] [i_6] [i_7] [i_4] [i_7]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_25 [i_10 - 2] [i_3] [i_6] [12U] [i_10] [i_7])))))))));
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 15; i_11 += 4) 
                            {
                                var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65531)) | (arr_9 [1])));
                                var_28 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [5U] [10] [i_7] [i_11])) != (((((/* implicit */_Bool) (unsigned short)63505)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))))));
                                arr_36 [i_11] [3] [9] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_34 [i_3] [i_4] [i_7] [i_11])) : (((/* implicit */int) (short)(-32767 - 1)))));
                            }
                            /* LoopSeq 4 */
                            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                            {
                                arr_40 [i_3] [i_4] [i_4] [i_7] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)3)), (-299360266)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)125))))) : (((/* implicit */int) max((((/* implicit */short) (signed char)47)), ((short)15702))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (short)-15688)) ? (((/* implicit */int) (unsigned short)33926)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((/* implicit */int) arr_34 [i_12] [i_7] [(short)1] [(short)11])) == (((/* implicit */int) (unsigned char)14)))))));
                                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 946583311))));
                            }
                            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
                            {
                                var_30 *= ((/* implicit */short) max(((-(((((/* implicit */_Bool) 8003759894638552109ULL)) ? (4157277305U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3]))))))), (((/* implicit */unsigned int) var_3))));
                                var_31 = ((((/* implicit */_Bool) max((((((/* implicit */int) var_11)) % (((/* implicit */int) arr_42 [9U] [9U] [i_6] [i_7] [(unsigned char)8])))), (((int) var_15))))) ? (((int) (+(((/* implicit */int) (signed char)12))))) : (max((631338535), (((/* implicit */int) arr_42 [i_3] [i_4] [(unsigned short)3] [(unsigned short)3] [i_13])))));
                            }
                            /* vectorizable */
                            for (short i_14 = 0; i_14 < 15; i_14 += 4) 
                            {
                                var_32 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (short)-4598)) ? (-1318225132) : (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_11))))));
                                var_33 = arr_20 [i_7] [i_6] [i_4] [i_3];
                                arr_47 [8] &= ((/* implicit */int) ((unsigned char) var_6));
                                var_34 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_4 [i_3] [i_3])) ^ (3426209353U)));
                                var_35 = ((/* implicit */short) (-(((/* implicit */int) var_13))));
                            }
                            for (int i_15 = 0; i_15 < 15; i_15 += 1) 
                            {
                                arr_50 [i_3] [i_3] [i_4] [(short)11] [(short)11] [i_15] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1474552085)) && (((/* implicit */_Bool) var_15)))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_3]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) % (16272188260785979032ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)63480)) == (((/* implicit */int) (unsigned char)191))))))))));
                                var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_5 [i_3]), (arr_5 [i_3])))) * ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
                                arr_51 [i_3] [(short)14] [i_6] [14] [i_15] |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)79))))) != (((((/* implicit */_Bool) arr_37 [i_15] [14] [i_7] [6] [i_6] [i_3] [i_3])) ? (arr_4 [i_3] [i_4]) : (arr_4 [(unsigned char)12] [i_3])))));
                            }
                            /* LoopSeq 3 */
                            for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 4) 
                            {
                                var_37 = ((/* implicit */unsigned short) (+(min((1879048192), (((/* implicit */int) var_3))))));
                                arr_54 [i_3] [i_4] [(unsigned short)7] [i_16] [i_4] = ((((((/* implicit */int) arr_30 [(signed char)12] [i_3] [i_6] [(unsigned char)14] [(signed char)0])) ^ (((((/* implicit */_Bool) 1131099024)) ? (((/* implicit */int) var_17)) : (var_16))))) & (((((/* implicit */_Bool) arr_8 [i_3])) ? (var_16) : (((/* implicit */int) arr_8 [i_16])))));
                            }
                            for (signed char i_17 = 0; i_17 < 15; i_17 += 2) 
                            {
                                arr_57 [i_3] [i_4] [i_6] [(short)8] [(short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (2017542441U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))) && (((/* implicit */_Bool) ((1032685418U) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [i_3] [(short)12] [(unsigned char)4])), ((unsigned short)10053))))))))));
                                arr_58 [i_17] [i_17] = ((/* implicit */unsigned short) -905596474);
                                arr_59 [i_4] [i_6] [4] [4] = ((/* implicit */int) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                                arr_60 [i_3] [1] [(short)5] = ((/* implicit */unsigned char) (~(min((((/* implicit */int) min(((short)-32747), (var_18)))), (((int) var_2))))));
                                var_38 = ((/* implicit */short) (signed char)46);
                            }
                            for (short i_18 = 0; i_18 < 15; i_18 += 3) 
                            {
                                arr_65 [i_3] [i_3] [i_4] [i_3] [i_6] [i_3] [i_18] = ((unsigned char) ((unsigned int) 268435455));
                                arr_66 [i_3] [(short)14] [i_7] [i_18] = ((/* implicit */int) var_1);
                            }
                        }
                    } 
                } 
                var_39 *= ((/* implicit */int) (!(((/* implicit */_Bool) 112))));
            }
        } 
    } 
}
