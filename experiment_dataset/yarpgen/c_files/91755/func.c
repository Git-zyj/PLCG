/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91755
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) max(((~((~(((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_3])))))), (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_3])) : (((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))));
                            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)3] [i_2] [i_2] [i_3]);
                            var_15 = ((/* implicit */int) ((_Bool) (+(((arr_2 [i_0] [i_1] [9]) + (((/* implicit */int) (short)-31518)))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_0] [i_0] [i_0])))) ? ((+(((((/* implicit */_Bool) arr_10 [i_3] [i_3] [(_Bool)1] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_2])) : (1246700121))))) : (((/* implicit */int) arr_0 [i_0]))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) -1246700140))));
                                var_18 = ((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_2] [i_3] [i_4] [(unsigned char)4] [i_3]);
                                var_19 -= ((/* implicit */short) (_Bool)1);
                                arr_14 [i_0] [(_Bool)1] [(short)13] [i_1] [(_Bool)1] [i_3] [(unsigned char)6] = ((/* implicit */int) (-(var_3)));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(arr_9 [i_1] [i_0] [(unsigned char)8] [i_0])))), ((+(4294967288U)))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    arr_17 [i_5] [(_Bool)1] [i_5] [i_5] = ((/* implicit */short) arr_7 [i_0] [12] [(short)5] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_23 [(_Bool)1] [i_5] [i_5] [10] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_18 [(short)14] [i_6] [i_5] [i_5] [i_7] [i_7]))))))) ? (((((/* implicit */int) (_Bool)0)) & (((-1100555956) % (-1246700114))))) : (((((/* implicit */_Bool) arr_7 [i_6] [(unsigned char)3] [i_6] [i_6])) ? (-1066021789) : (((/* implicit */int) arr_6 [(_Bool)1] [i_5]))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-1066021768) + (2147483647))) >> (((arr_21 [i_7] [i_5]) - (789587031)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [0] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1])) || (arr_20 [12] [i_1] [i_5]))))) != (var_3)))) : (((int) min((((/* implicit */int) (_Bool)1)), (var_7))))));
                            }
                        } 
                    } 
                    arr_24 [i_5] [i_1] [i_5] = ((/* implicit */int) (-(4294967288U)));
                    var_22 -= ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_21 [i_5] [i_1])))));
                    arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) (~(((int) ((((/* implicit */int) var_1)) == (var_7))))));
                }
                var_23 = (_Bool)1;
                arr_26 [i_0] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [6U] [i_1] [(unsigned char)12] [i_1]))))) ? ((+(((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(short)10])))) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
        {
            arr_32 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((short) -1066021774)), (((short) var_2))))) == ((~(arr_19 [i_8] [i_8] [i_8] [i_8])))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1))))) ? (arr_21 [i_8] [i_8]) : ((~(arr_21 [i_9] [(unsigned char)6])))));
            var_25 = ((/* implicit */unsigned int) arr_19 [(unsigned char)3] [i_9] [i_9] [i_9]);
            arr_33 [i_8] [(unsigned char)7] [i_8] = ((/* implicit */_Bool) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [4] [i_8] [i_8] [i_8] [i_8] [i_9] [i_9]))))))), (((/* implicit */int) ((unsigned char) arr_30 [i_8] [i_9])))));
        }
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
        {
            arr_37 [i_10] [i_8] = ((/* implicit */short) 2645103484U);
            arr_38 [i_8] [i_10] = (~((-(((/* implicit */int) arr_3 [(_Bool)1])))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((_Bool) arr_13 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))));
        }
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1066021758)) ? (-1066021769) : (((/* implicit */int) (unsigned char)225)))) % (((/* implicit */int) (short)63))));
    }
    for (short i_11 = 1; i_11 < 17; i_11 += 3) 
    {
        var_28 = ((/* implicit */short) ((((int) min((arr_39 [(_Bool)1]), (((/* implicit */int) (_Bool)1))))) >> (((((/* implicit */_Bool) arr_39 [i_11])) ? (((/* implicit */int) arr_40 [i_11])) : ((~(((/* implicit */int) (short)-17211))))))));
        var_29 = arr_40 [i_11];
    }
    for (int i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
        /* LoopSeq 2 */
        for (short i_13 = 1; i_13 < 22; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_31 = (-((~(((((/* implicit */_Bool) arr_52 [i_12] [i_12] [i_12] [i_12] [i_12])) ? (arr_42 [i_12]) : (-1246700096))))));
                        var_32 = ((/* implicit */int) 130944U);
                    }
                } 
            } 
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4322))) : (1044848009U)));
        }
        for (int i_16 = 0; i_16 < 24; i_16 += 3) 
        {
            arr_56 [i_12] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) < (-409188350)));
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (~(((int) arr_44 [i_12])))))));
        }
        arr_57 [i_12] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */int) arr_47 [19U] [i_12] [i_12] [i_12])), (arr_52 [i_12] [i_12] [(short)11] [(short)7] [i_12]))) : (((((/* implicit */_Bool) arr_53 [(_Bool)1])) ? (((/* implicit */int) (unsigned char)238)) : (var_7)))))), (((((/* implicit */_Bool) ((unsigned char) 4125616631U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_12] [i_12] [i_12]))) : (((unsigned int) arr_52 [(_Bool)1] [i_12] [i_12] [i_12] [(short)15]))))));
        arr_58 [i_12] [i_12] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))));
        arr_59 [i_12] = ((/* implicit */int) var_2);
    }
    /* LoopNest 2 */
    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) 
    {
        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 3) 
        {
            {
                arr_65 [(_Bool)1] [i_18] [i_17] = ((/* implicit */int) arr_48 [(_Bool)1] [(_Bool)1] [i_18]);
                arr_66 [i_17] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_35 [i_17] [i_18] [i_17])) ? (((/* implicit */int) arr_35 [i_17] [i_17] [i_18])) : (((/* implicit */int) arr_35 [i_17] [i_18] [i_18])))) * (((((/* implicit */int) arr_35 [i_17] [i_18] [i_17])) / (453667252)))));
                arr_67 [i_17] [i_18] [7] = ((/* implicit */_Bool) ((unsigned char) ((arr_52 [i_17] [i_17] [i_17] [i_18] [i_18]) | (arr_52 [i_18] [(_Bool)1] [i_18] [i_18] [i_18]))));
                arr_68 [i_17] [i_18] [9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1340137149U)) ? (453667245) : (((/* implicit */int) (short)29151))));
            }
        } 
    } 
}
