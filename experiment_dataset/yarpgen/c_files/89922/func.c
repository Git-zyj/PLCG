/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89922
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [(short)11] [i_1] [(short)13] = ((short) arr_0 [i_2]);
                    arr_8 [i_0] [i_1] [i_2] = var_3;
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0] [i_1])) != (((/* implicit */int) (short)13331))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_0] [i_0] [(short)11]))));
        arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) - (((/* implicit */int) (short)-16489))));
        /* LoopSeq 2 */
        for (short i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            arr_16 [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3]))));
            arr_17 [i_3] [i_3] = var_4;
        }
        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 2; i_5 < 23; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    arr_28 [i_4] [i_4] [(short)23] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) (short)21790))))) ? (((/* implicit */int) ((short) var_10))) : ((~(((/* implicit */int) arr_22 [i_0]))))));
                    arr_29 [i_0] [i_4] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_5 - 1] [i_5] [i_6])) - (((/* implicit */int) var_13))));
                    arr_30 [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_19 [i_6]))))) ? (((((/* implicit */_Bool) (short)7559)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (short)2670))));
                }
                for (short i_7 = 1; i_7 < 22; i_7 += 4) 
                {
                    arr_35 [i_0] [i_4] [i_0] [i_7] &= ((short) arr_5 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7 - 1]);
                    arr_36 [i_0] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [(short)12] [i_4] [i_5 - 1])) ? (((/* implicit */int) arr_27 [i_4] [i_5] [i_7 - 1])) : (((/* implicit */int) arr_12 [i_7 + 1] [(short)19] [i_0]))));
                    arr_37 [i_4] [i_4] = ((/* implicit */short) (((+(((/* implicit */int) arr_18 [i_0] [i_0])))) / (((/* implicit */int) arr_14 [i_5 + 1] [i_7 - 1]))));
                }
                arr_38 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_0] [i_4] [i_5])) + (((/* implicit */int) (short)-10756))))) ? (((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_4] [i_0])) : (((/* implicit */int) arr_1 [i_4])))) : (((/* implicit */int) arr_31 [i_5 + 1] [i_4] [i_5] [i_5 + 1] [i_5 - 2]))));
                arr_39 [(short)16] [i_4] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */int) var_13)) | (((/* implicit */int) arr_25 [i_4]))));
            }
            arr_40 [i_4] [i_0] = arr_31 [i_4] [i_4] [i_4] [i_4] [(short)11];
            arr_41 [i_4] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_4])))))));
        }
        arr_42 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_31 [(short)12] [i_0] [(short)6] [(short)22] [(short)12])) : (((/* implicit */int) var_3))))));
    }
    for (short i_8 = 2; i_8 < 21; i_8 += 3) 
    {
        arr_46 [i_8] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_34 [i_8] [(short)2] [(short)2] [i_8])) ? (((/* implicit */int) (short)-2684)) : (((/* implicit */int) (short)29180)))) > ((~(((/* implicit */int) (short)19821))))))) >> (((((/* implicit */int) var_13)) - (3697)))));
        arr_47 [i_8] [i_8] = ((/* implicit */short) (+(((/* implicit */int) ((short) var_1)))));
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            arr_51 [i_8 - 1] [i_9] = max((var_5), (((/* implicit */short) ((((/* implicit */int) (short)28901)) <= (((/* implicit */int) ((short) var_8)))))));
            arr_52 [i_9] = var_7;
            arr_53 [i_9] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_49 [i_8 - 1] [i_8 - 1])) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8] [i_8] [i_8])) ? (((/* implicit */int) (short)-6428)) : (((/* implicit */int) arr_20 [(short)7] [(short)16] [i_9]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_9] [i_8]))))))))));
            arr_54 [i_8 + 1] [i_9] = ((short) (-(((/* implicit */int) arr_0 [i_8 + 1]))));
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 3; i_12 < 22; i_12 += 2) 
                    {
                        arr_64 [(short)5] [(short)5] [i_11] [i_11] [i_11] &= var_12;
                        arr_65 [i_8 - 2] [i_11] [i_10] = ((/* implicit */short) max((((((/* implicit */int) ((short) (short)26291))) / (((((/* implicit */int) arr_31 [i_8] [i_11] [i_10] [i_11] [i_12])) & (((/* implicit */int) var_9)))))), (((((/* implicit */int) ((short) arr_63 [i_8] [i_9] [(short)17] [i_11] [i_12]))) / (((/* implicit */int) ((short) var_1)))))));
                        arr_66 [i_10] [i_9] [i_8] &= ((/* implicit */short) ((((/* implicit */int) ((short) ((short) (short)-3923)))) ^ (((((/* implicit */_Bool) ((short) (short)691))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_12 - 1])) || (((/* implicit */_Bool) (short)-26291)))))))));
                        arr_67 [(short)21] [i_9] [(short)10] [(short)21] [i_12] = (short)-8301;
                    }
                    for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        arr_70 [i_8] = ((short) (((+(((/* implicit */int) (short)16383)))) * (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_6 [i_8] [i_9]))))));
                        arr_71 [i_8] [i_9] [(short)6] [(short)6] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_13), (arr_69 [i_8] [i_13] [i_8] [i_9] [(short)8] [i_8 - 1] [(short)9])))) ? (((((/* implicit */int) arr_32 [i_8 + 2] [i_13] [i_10] [i_11] [i_13])) >> (((((/* implicit */int) (short)-720)) + (721))))) : (((((/* implicit */int) ((short) var_5))) ^ (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_23 [i_9]))))))));
                        arr_72 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) min((((((/* implicit */_Bool) (short)17242)) ? (((/* implicit */int) (short)-13835)) : (((/* implicit */int) arr_6 [i_10] [i_11])))), (((/* implicit */int) max((arr_5 [i_8 + 2] [i_9] [i_10] [i_13]), ((short)3))))));
                    }
                    arr_73 [i_8] [i_9] [i_8] [i_11] &= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_68 [i_8 + 1] [i_9])) == (((/* implicit */int) var_13)))))));
                }
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    for (short i_15 = 2; i_15 < 21; i_15 += 3) 
                    {
                        {
                            arr_81 [i_8] [(short)20] [(short)20] [(short)20] [i_10] [i_14] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_32 [i_10] [i_9] [i_10] [i_14] [i_10]))))) ? (((((/* implicit */int) var_8)) + (((/* implicit */int) var_7)))) : (((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_9])) - (10433))))))))));
                            arr_82 [i_8 - 1] [i_9] [i_10] &= ((/* implicit */short) (((((((+(((/* implicit */int) arr_43 [i_14])))) + (2147483647))) >> (((((/* implicit */int) (short)-7559)) + (7577))))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-3943)) : (((/* implicit */int) arr_45 [i_10] [i_14])))) < (((/* implicit */int) ((short) var_12))))))));
                            arr_83 [i_8 - 2] [i_9] = var_9;
                            arr_84 [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8] = (short)31;
                        }
                    } 
                } 
            }
        }
        arr_85 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(short)12] [i_8] [i_8 - 2] [(short)12])) ? (((/* implicit */int) (short)-7563)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_25 [(short)16])) : (((/* implicit */int) var_1)))) >= ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-25352)))))))));
    }
    var_14 = var_13;
    var_15 = ((/* implicit */short) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_8))));
}
