/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80753
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(signed char)16])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_9)))))) : (((/* implicit */int) var_2))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_13 |= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_0 [(unsigned char)11]))) - (((((/* implicit */_Bool) arr_1 [i_1])) ? (1310666660) : (((/* implicit */int) arr_4 [i_0] [i_1] [(short)14]))))))), (min((((/* implicit */unsigned int) (unsigned char)79)), (3670367497U)))));
            arr_5 [i_0] [i_1] [i_1] |= ((((/* implicit */int) min((((unsigned char) arr_1 [i_0])), ((unsigned char)112)))) & (((/* implicit */int) max((arr_3 [i_0] [i_0] [i_1]), ((unsigned char)255)))));
            var_14 = ((/* implicit */unsigned char) ((int) (unsigned char)251));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                var_15 = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_2]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))) ^ (var_4)))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) 8388607U))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4 + 1] [i_4] [i_4])) ? (var_4) : (((/* implicit */unsigned long long int) arr_12 [i_3 + 2] [i_3 + 1]))));
                        arr_13 [i_0] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3 - 1])) || (((/* implicit */_Bool) (unsigned char)0))));
                    }
                    arr_14 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3 + 4] [i_3 + 4] [i_3 + 3] [21ULL])) == (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)0))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [(signed char)23])) : (((/* implicit */int) arr_0 [i_3]))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_2)) : (arr_8 [i_0] [i_1] [i_0]))))))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 2; i_5 < 23; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_20 = var_12;
                        arr_21 [i_0] [i_1] [i_2] [11U] [i_0] = ((/* implicit */unsigned char) ((int) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    arr_22 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_5])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)108))))) : (((unsigned long long int) (unsigned char)1))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 3; i_7 < 24; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_7]))))));
                        var_22 = ((/* implicit */unsigned long long int) arr_9 [i_0] [7U] [14ULL] [14ULL]);
                    }
                    for (unsigned char i_8 = 4; i_8 < 22; i_8 += 4) 
                    {
                        arr_30 [i_2] [i_2] [i_2] [i_5] [i_8] = arr_19 [i_5 - 2] [10] [i_5] [i_5] [i_5 - 2];
                        arr_31 [i_0] [i_1] [i_2] [i_5] [i_1] = ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) arr_18 [i_5 + 1] [i_8] [i_8] [i_8 + 3])) : (((/* implicit */int) arr_18 [i_5 + 1] [i_8] [i_5 + 1] [i_8 + 3])));
                        arr_32 [(signed char)12] [20] [i_2] [i_5] [i_8] = ((/* implicit */unsigned char) ((arr_24 [i_5 - 2]) + (arr_26 [i_8] [i_8 - 1] [i_8] [i_5 + 1] [i_1])));
                    }
                }
                var_23 = ((/* implicit */signed char) (-(arr_26 [i_2] [i_2] [(unsigned char)13] [i_1] [i_0])));
            }
            arr_33 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [(unsigned char)6] [(unsigned char)6])) * (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_1])) == (((/* implicit */int) arr_4 [i_0] [(unsigned char)18] [i_1])))))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_26 [i_0] [i_1] [i_0] [(unsigned short)7] [i_1])))));
        }
    }
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (unsigned short)65527)))));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_27 [(signed char)9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) (signed char)38))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65527)) < (((/* implicit */int) arr_28 [9ULL] [i_9] [9ULL] [9ULL]))))) : (((((/* implicit */_Bool) 6039819405478458259ULL)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_35 [i_9])))))))))));
        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2280874732U)) ? (arr_17 [i_9] [i_9]) : (((/* implicit */unsigned long long int) 2280874732U))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 3) 
        {
            arr_38 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647))));
            /* LoopNest 2 */
            for (signed char i_11 = 1; i_11 < 21; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) ((arr_20 [i_11] [21U] [i_11] [i_9] [i_9] [i_9]) << (((max((arr_26 [(unsigned char)17] [(unsigned char)17] [14ULL] [(unsigned char)17] [15ULL]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_9] [(unsigned char)1] [i_9] [(unsigned char)7] [(unsigned char)7] [i_11] [i_12])) | (((/* implicit */int) arr_9 [i_9] [i_10] [i_11] [i_12]))))))) - (4223771667U)))));
                        arr_44 [i_11] [i_11] [i_11] [i_11] [i_10] = var_10;
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_13 = 4; i_13 < 19; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    for (short i_15 = 2; i_15 < 20; i_15 += 2) 
                    {
                        {
                            arr_53 [i_9] [i_9] [i_9] [i_9] [i_10] [i_9] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (16383) : (((/* implicit */int) (unsigned char)81))))));
                            arr_54 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_10 [i_10 - 1] [i_15 - 1] [i_15 - 1] [i_15] [(signed char)2]), (arr_10 [i_10 + 1] [i_15 - 1] [i_15] [i_15] [i_15])))) ? (((/* implicit */int) ((signed char) (unsigned char)252))) : (((/* implicit */int) min(((signed char)62), (arr_45 [i_10 - 2] [i_15 + 1] [i_10] [i_10 - 2]))))));
                            var_28 -= ((/* implicit */short) ((unsigned char) min(((unsigned char)201), ((unsigned char)254))));
                            var_29 = ((/* implicit */int) var_2);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned char) (unsigned short)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_9] [i_10])) && (((/* implicit */_Bool) 18446744073709551615ULL))))) : (max((828745088), (((/* implicit */int) (unsigned char)251)))))) << (((/* implicit */int) (unsigned short)0))));
            }
            /* vectorizable */
            for (signed char i_16 = 1; i_16 < 19; i_16 += 3) 
            {
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_10 - 2] [i_9])) ? (arr_17 [i_10 - 2] [i_10]) : (arr_17 [i_10 - 2] [i_10])));
                var_32 = ((/* implicit */int) var_10);
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_33 = ((((/* implicit */_Bool) (-(arr_19 [i_18] [i_17] [i_16] [i_10] [i_9])))) ? (((/* implicit */int) arr_9 [i_10] [i_10] [i_10] [i_10 + 1])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)62)))));
                            arr_65 [16U] [i_10] [i_16] [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_9])) * (((/* implicit */int) arr_40 [i_9] [i_10] [i_16] [i_18]))));
                            arr_66 [i_9] [i_10] [i_16] [i_10] [i_16] = ((/* implicit */unsigned short) ((int) (~(arr_20 [i_18] [i_9] [i_16] [i_10] [i_9] [i_9]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_19 = 1; i_19 < 21; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 22; i_20 += 2) 
                {
                    for (unsigned int i_21 = 0; i_21 < 22; i_21 += 2) 
                    {
                        {
                            arr_77 [i_9] [i_10] [i_10] = ((int) ((unsigned long long int) arr_37 [i_9] [i_10]));
                            arr_78 [i_9] [i_9] [i_19] [i_20] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned short)2))) ? (2243635864978316218ULL) : (((((/* implicit */_Bool) (unsigned char)113)) ? (16940482395617259885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                            arr_79 [i_19] [i_19] [i_10] = ((/* implicit */short) ((unsigned long long int) (unsigned short)0));
                            var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)54)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10] [i_10] [i_20] [i_21])))));
                            arr_80 [i_9] [i_9] [i_10] [i_10] [i_10] [i_20] [i_21] = ((arr_12 [i_9] [(unsigned char)3]) ^ (((/* implicit */int) arr_61 [i_19 - 1] [i_19 - 1] [i_19])));
                        }
                    } 
                } 
                var_35 = (-(arr_42 [i_10 - 2] [i_19 - 1] [i_10] [i_19]));
            }
            arr_81 [i_9] [i_10] = var_5;
        }
        /* vectorizable */
        for (signed char i_22 = 1; i_22 < 20; i_22 += 4) 
        {
            arr_85 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_62 [i_22 + 1] [i_22 + 2] [i_22 - 1] [i_22 + 2] [i_22 + 2] [i_22 + 1])) == (((/* implicit */int) arr_62 [i_22 + 2] [i_22 + 2] [i_22 + 1] [i_22 + 2] [i_22 + 2] [i_22 + 1]))));
            arr_86 [i_9] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)12))));
            var_36 = ((((/* implicit */_Bool) ((short) (unsigned char)82))) ? (arr_17 [i_22] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned short)65535))))));
            arr_87 [i_9] [i_22] [i_22] = (~(((/* implicit */int) arr_36 [(unsigned char)16] [i_22])));
        }
    }
    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) 418258123)), (1028534190589448398ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? ((~(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
}
