/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99672
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0 - 3] [i_1] = ((unsigned long long int) (~(((/* implicit */int) var_2))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1] [i_1])) > (((/* implicit */int) ((unsigned char) var_8)))))), (arr_7 [i_0] [i_1] [i_2])));
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned short) var_2);
                }
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)249)), (arr_2 [i_0] [i_1] [i_1])))) / (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [(unsigned short)12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)133))))) && (((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_3] [i_0 + 1] [i_0 + 1])))));
                            var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) max((arr_1 [i_0 - 2] [i_0]), (((/* implicit */unsigned short) (unsigned char)255))))) > (((/* implicit */int) min((arr_3 [i_0] [(unsigned short)7]), (((/* implicit */unsigned short) var_8))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))))) != ((-(var_6)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5 + 1] [i_5]))))) ? (arr_18 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_5 + 2]), (arr_16 [i_5 - 3])))))));
        var_17 = 13867581570402441147ULL;
    }
    var_18 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) arr_16 [i_6]);
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            for (unsigned short i_8 = 3; i_8 < 21; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        arr_30 [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) arr_21 [i_6])))), (((/* implicit */int) max((arr_28 [i_6] [i_6 + 1]), (arr_28 [i_6] [i_6 + 2]))))));
                        arr_31 [i_6] [i_7] [i_6] [i_8 - 2] [i_8] = min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)129)), (arr_19 [i_6])))), (((unsigned long long int) arr_29 [i_6] [i_6] [23ULL] [i_9])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        arr_34 [i_6] [i_7] [i_6] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_16 [i_8])) / (((/* implicit */int) (unsigned char)144))))))));
                        arr_35 [(unsigned short)19] [(unsigned short)19] [i_8] [i_6] [i_8] [i_6] = ((/* implicit */unsigned char) arr_15 [i_6 - 1]);
                        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) ((unsigned char) arr_27 [i_8 - 3] [i_8] [i_8] [i_10]))));
                    }
                    for (unsigned char i_11 = 3; i_11 < 23; i_11 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((arr_37 [i_6] [i_6] [i_6 + 2] [i_8 + 2]) == (((((/* implicit */_Bool) (unsigned short)13489)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6]))) : (arr_26 [i_6 + 1] [i_8 - 3] [i_8 - 3])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            arr_41 [i_6] [i_7] [i_6 + 4] [i_6] [i_12] [i_12] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_40 [i_8 + 1]), (arr_40 [i_8 + 1]))))));
                            var_22 = ((/* implicit */unsigned char) min((arr_23 [i_6]), (((/* implicit */unsigned long long int) (unsigned char)92))));
                        }
                    }
                    arr_42 [i_7] [i_6] = ((/* implicit */unsigned char) arr_32 [i_6] [i_6] [i_7] [i_8]);
                    var_23 = min((arr_29 [i_6 + 4] [i_6] [i_6] [i_8]), (((unsigned char) var_10)));
                }
            } 
        } 
        arr_43 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_38 [i_6 + 4] [i_6 - 1] [i_6 + 4] [i_6 + 4] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6] [i_6])))))) : (((((/* implicit */_Bool) arr_15 [i_6])) ? (arr_15 [i_6]) : (arr_15 [i_6 + 1])))));
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [(unsigned char)14] [i_13]))));
        /* LoopSeq 1 */
        for (unsigned short i_14 = 2; i_14 < 24; i_14 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) ((arr_18 [i_14]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_13] [i_13]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    arr_54 [i_13] [i_13] [i_14] [i_13] [i_16] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) 4332502276718095603ULL)))));
                    arr_55 [i_14] [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_48 [i_14 + 1] [i_14 + 1] [i_14 + 1]))));
                    arr_56 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((unsigned char) arr_53 [i_13] [i_13] [(unsigned short)17] [(unsigned short)4] [i_16] [i_16]));
                    arr_57 [i_13] [i_14] [i_13] [i_13] [i_15] [i_16] &= arr_50 [i_16] [i_15] [i_14];
                }
                arr_58 [i_14] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_14 - 1] [i_14 + 1])) ? (((/* implicit */int) arr_17 [i_14 + 1] [i_14 - 1])) : (((/* implicit */int) arr_17 [i_14 - 2] [i_14 + 1]))));
            }
        }
    }
}
