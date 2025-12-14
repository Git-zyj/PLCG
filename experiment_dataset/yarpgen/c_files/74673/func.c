/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74673
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [(short)14]))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4039958137U)))) : (arr_1 [i_0] [i_1])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_17 [i_4] [i_3] [i_0] [(unsigned short)0] [i_0] = ((/* implicit */_Bool) var_12);
                            arr_18 [i_0] [i_2 - 1] [i_2 - 1] [i_3] = ((/* implicit */short) ((unsigned int) arr_1 [i_2 + 2] [i_4]));
                            var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [4U] [i_4] [i_2] [i_2] [i_1] [i_0] [i_0]))) : (2058059579U))))));
                            arr_19 [i_0] [i_0] [i_0] [2ULL] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (var_6) : (arr_12 [i_4] [i_3] [i_2 + 2] [i_2 + 3] [i_1] [i_0])));
                        }
                        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_22 = ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_13)))) == (((arr_15 [i_1] [(short)17] [i_2] [i_2] [i_0]) << (((4039958137U) - (4039958129U)))))));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)91)) << (((((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_2 - 1] [i_3] [i_5])) - (24917)))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_27 [(short)2] [i_1] &= ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_21 [i_0] [i_1] [(unsigned short)0])))));
                            arr_28 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((min((((((/* implicit */int) arr_8 [i_2] [i_1] [i_0])) & (((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [i_3] [i_6])))), (((/* implicit */int) (signed char)91)))) > ((+((+(((/* implicit */int) arr_21 [i_0] [i_1] [i_0]))))))));
                            var_23 -= ((/* implicit */short) (((!(((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_2 + 2] [i_3] [i_3] [i_6] [i_6])))))))) ? (((/* implicit */int) arr_21 [i_0] [i_1] [4U])) : (((/* implicit */int) var_15))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (+(3626101191U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [10U] [i_2 + 4] [i_2 + 4] [i_2] [i_2] [i_2 + 4])) * (((/* implicit */int) arr_5 [i_1] [i_2 + 1] [(_Bool)1] [(unsigned short)18]))))) : (min((((((/* implicit */_Bool) arr_11 [(short)4] [i_3] [i_2] [i_2 - 1] [i_1] [i_0])) ? (arr_10 [i_3] [i_1]) : (arr_12 [i_0] [i_0] [i_2] [i_3] [i_6] [i_6]))), (((/* implicit */unsigned int) arr_23 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_6] [i_2])))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_29 [i_7])) == (((/* implicit */int) arr_29 [i_7]))))) == (((/* implicit */int) ((short) arr_29 [i_7])))));
                arr_34 [i_7] = ((/* implicit */short) var_4);
                var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (((((((/* implicit */_Bool) arr_33 [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_9))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) - (((/* implicit */int) arr_29 [(short)0])))))))));
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((signed char) max((arr_29 [i_7]), (arr_29 [i_7])))))));
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((((arr_31 [i_8]) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) var_4)))) > (((/* implicit */int) ((unsigned short) arr_33 [i_7] [i_8]))))) ? (((/* implicit */int) ((668866105U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8] [i_7])))))) : (((/* implicit */int) ((short) arr_32 [i_8]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_45 [i_9] [i_9] = ((/* implicit */unsigned short) var_11);
                    arr_46 [i_9] [i_10] [i_11] [i_10] = ((/* implicit */unsigned int) ((unsigned short) arr_30 [i_10] [i_10]));
                    arr_47 [i_9] [i_9] [i_9] = ((/* implicit */short) ((((unsigned int) max(((unsigned short)10717), (var_1)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_9] [i_9] [(unsigned short)12])) << ((((~(3626101180U))) - (668866087U))))))));
    }
    for (unsigned int i_12 = 2; i_12 < 10; i_12 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_13 = 1; i_13 < 10; i_13 += 4) 
        {
            arr_54 [i_12] [i_13 + 3] [i_13 + 2] = ((/* implicit */short) ((((/* implicit */int) var_2)) + (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_35 [i_12] [i_12])) ? (668866105U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
            var_31 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (signed char)32)), (((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6))))) + (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) ((short) (signed char)-108))))))));
        }
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((((/* implicit */_Bool) max((((unsigned short) var_0)), (((/* implicit */unsigned short) ((short) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) arr_41 [8U]))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_51 [i_12 + 3]))))), ((~(var_8)))))))));
        arr_55 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : (4039958137U)))) ? (((/* implicit */int) ((signed char) max((668866105U), (((/* implicit */unsigned int) arr_21 [i_12] [i_12 + 2] [i_12])))))) : (((/* implicit */int) arr_53 [i_12] [i_12]))));
        var_33 = ((/* implicit */unsigned long long int) (signed char)-108);
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        for (unsigned int i_18 = 3; i_18 < 15; i_18 += 1) 
                        {
                            {
                                var_34 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49884)) << (((((/* implicit */int) arr_60 [i_14] [i_15 + 1])) - (39688)))));
                                arr_70 [i_14] [i_15] [i_14] [i_17] [i_15] = ((/* implicit */unsigned short) ((short) var_14));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned int) (short)1726);
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 17; i_19 += 2) 
                    {
                        arr_74 [i_14] [i_14] [8U] [(_Bool)1] = ((/* implicit */signed char) ((668866104U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        var_36 *= ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_6 [i_14] [i_14] [i_16]))));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_14] [i_15] [i_15 + 1] [i_16] [(short)20])) ? (((/* implicit */int) arr_29 [i_15 - 1])) : (((/* implicit */int) arr_23 [i_15 - 1] [i_15 - 1] [i_15 + 1] [i_15] [i_15 + 1] [i_15])))))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 17; i_20 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_21 = 1; i_21 < 15; i_21 += 1) 
                        {
                            var_38 = ((/* implicit */short) ((((/* implicit */int) arr_16 [(_Bool)1] [i_21 + 1] [i_15 + 1] [i_20] [i_16] [i_20] [i_21])) > (((/* implicit */int) arr_6 [i_15 - 1] [i_21] [i_21 + 1]))));
                            arr_80 [i_21 + 1] [i_20] [i_21] [i_21] [i_14] [(signed char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_6 [i_21 + 2] [i_21] [18U]))))) ? (((/* implicit */int) arr_73 [i_21 + 2] [i_21 + 2])) : (((((/* implicit */int) (unsigned short)55978)) ^ (((/* implicit */int) arr_4 [i_14] [i_15 - 1] [i_21]))))));
                        }
                        for (short i_22 = 0; i_22 < 17; i_22 += 1) 
                        {
                            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (!(((/* implicit */_Bool) arr_83 [i_15] [i_14] [i_15 - 1] [i_15] [i_22])))))));
                            arr_84 [i_14] [i_14] [i_16] [i_22] [i_22] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) >> (((((/* implicit */int) arr_75 [i_15])) + (18923)))))) ? (((5282329077487896083ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (arr_65 [(signed char)13] [i_22] [i_16] [i_15 - 1] [(signed char)13] [i_20])));
                            var_40 = ((/* implicit */unsigned long long int) var_12);
                        }
                        var_41 = ((/* implicit */_Bool) var_4);
                        arr_85 [i_20] [i_16] [i_15 - 1] [i_14] = ((/* implicit */short) (-(((((/* implicit */int) arr_64 [i_20])) * (((/* implicit */int) arr_72 [i_14]))))));
                        arr_86 [i_15 - 1] [i_16] [i_20] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
        var_42 = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_14] [i_14] [i_14] [i_14] [i_14])) - (((/* implicit */int) arr_26 [i_14] [i_14] [(unsigned short)4] [i_14] [i_14]))));
    }
}
