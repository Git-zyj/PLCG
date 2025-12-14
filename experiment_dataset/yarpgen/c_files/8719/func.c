/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8719
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
    var_14 = ((/* implicit */short) max((min(((+(-1634444089))), ((-(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) var_3))));
    var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_5))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1634444100)) : (14965139967172999612ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [(short)11])) ? (((/* implicit */unsigned int) 1634444111)) : (655253105U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (1634444100)))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            arr_15 [19] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
                            var_16 = ((/* implicit */_Bool) arr_1 [i_4]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_5 = 3; i_5 < 20; i_5 += 4) 
            {
                var_17 += ((/* implicit */unsigned int) 1634444100);
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_18 = ((/* implicit */signed char) ((arr_0 [i_5 + 1]) ? (655253097U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5 + 1])))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (655253105U) : (((/* implicit */unsigned int) arr_8 [i_6] [i_6] [i_5 - 2] [i_5 - 2])))))));
                    var_20 = (~(((/* implicit */int) (unsigned short)32246)));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1)))))));
                    var_22 = ((/* implicit */signed char) 1634444090);
                    var_23 = ((-1634444090) / (arr_4 [1LL]));
                }
                for (int i_8 = 3; i_8 < 21; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_29 [i_9] [i_1] [i_5 + 2] [(_Bool)1] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                        var_24 = ((/* implicit */unsigned short) ((signed char) arr_14 [i_1] [i_1] [i_5 - 2] [i_5 - 3] [i_8 - 1]));
                    }
                    for (short i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        arr_33 [i_0] [i_1] [i_10] [i_8 + 1] [i_10] = ((/* implicit */short) arr_1 [(short)9]);
                        arr_34 [i_10] [i_10] [i_5 + 1] [i_10] [i_10] [11] = ((/* implicit */long long int) ((unsigned long long int) var_2));
                    }
                    arr_35 [i_0] [i_0] [(_Bool)1] [(unsigned char)19] [i_5] [i_8] = ((/* implicit */unsigned int) var_11);
                    var_25 = ((((/* implicit */_Bool) arr_19 [i_5 - 1])) ? (((/* implicit */int) arr_19 [i_5 - 1])) : (((/* implicit */int) arr_19 [i_5 + 1])));
                    var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    arr_36 [i_0] [i_0] [i_5 + 1] [i_8] [i_0] [18ULL] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [5U] [(signed char)0]);
                }
                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) 655253116U))));
            }
            for (int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) var_7);
                        var_29 += ((/* implicit */short) var_6);
                    }
                    arr_45 [i_0] [i_1] [i_11] [i_11] [i_0] = (+(((/* implicit */int) arr_9 [i_11] [i_1] [i_11] [i_12] [i_12])));
                }
                var_30 = ((/* implicit */unsigned int) ((int) var_3));
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
                {
                    var_31 += ((/* implicit */signed char) (-((-(var_12)))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_32 += ((/* implicit */long long int) ((short) arr_12 [i_15] [i_14] [i_0] [i_0] [i_0]));
                        var_33 = ((/* implicit */_Bool) min((var_33), (var_9)));
                        var_34 = -1634444118;
                        var_35 -= ((/* implicit */signed char) (((_Bool)1) ? (1634444093) : (-1634444064)));
                    }
                    arr_50 [i_14] [i_11] [i_0] [i_0] = (~(((/* implicit */int) (unsigned short)32218)));
                    arr_51 [i_0] [i_1] [i_11] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_0] [i_1] [i_0] [i_14] [i_0] [(_Bool)1]))))) ? (arr_42 [i_0] [i_0] [(_Bool)1] [i_0] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [2U] [i_11] [i_0] [i_14])))));
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_36 = ((/* implicit */long long int) ((3639714217U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)84)))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_52 [3LL] [i_11] [i_11] [3LL] [i_11] [3LL])))))));
                        arr_55 [i_0] [0] [0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_0] [i_16])) ? (((/* implicit */int) arr_32 [i_16] [(short)10] [(signed char)17] [i_0])) : (((/* implicit */int) (unsigned short)33843))));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_16] [i_14] [i_11] [i_1] [(unsigned short)5])) ? (((/* implicit */int) arr_27 [i_0] [i_0] [3] [i_14] [i_14])) : (((/* implicit */int) arr_27 [i_0] [i_1] [i_11] [i_14] [i_16]))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        arr_60 [i_0] [i_17] [i_0] [i_17] [i_17] [i_14] &= ((/* implicit */_Bool) arr_6 [i_0] [i_11] [i_14] [i_17]);
                        arr_61 [i_17] = ((/* implicit */signed char) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_1] [i_14] [12])) > (((/* implicit */int) arr_31 [i_11] [i_1] [i_17] [i_14] [i_17] [12U]))));
                    }
                }
                for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                {
                    var_39 = (~(((/* implicit */int) (unsigned short)33275)));
                    arr_64 [(unsigned short)20] [(unsigned short)20] [(unsigned short)20] [i_1] [(unsigned short)20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_21 [i_0] [i_1])) : (((/* implicit */int) arr_13 [i_1] [i_11] [i_18]))));
                }
                arr_65 [21] [i_1] [i_0] [21] = ((/* implicit */unsigned short) ((_Bool) arr_4 [i_11]));
            }
            for (int i_19 = 0; i_19 < 22; i_19 += 2) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned long long int) ((655253097U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_41 = ((/* implicit */signed char) var_5);
            }
            arr_69 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [21] [i_1] [i_0] [i_1])) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_0] [i_1])))));
        }
        for (int i_20 = 0; i_20 < 22; i_20 += 4) 
        {
            arr_72 [i_0] = (_Bool)1;
            arr_73 [i_20] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_20] [6] [i_0] [(signed char)15] [i_0])) : (((/* implicit */int) arr_14 [i_20] [(_Bool)1] [11] [i_0] [i_0]))));
        }
        var_42 = ((/* implicit */_Bool) (~(-1634444100)));
    }
    for (unsigned short i_21 = 0; i_21 < 22; i_21 += 4) /* same iter space */
    {
        arr_76 [(unsigned short)13] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_68 [i_21] [i_21] [i_21])), ((unsigned short)33290)))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_21] [12U] [i_21]))))) / (((/* implicit */int) arr_19 [i_21])))) : ((+(((/* implicit */int) ((signed char) arr_27 [i_21] [(_Bool)1] [i_21] [i_21] [i_21])))))));
        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) var_7))));
    }
}
