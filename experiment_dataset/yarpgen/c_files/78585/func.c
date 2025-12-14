/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78585
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_3 - 1])) < (((((/* implicit */int) var_6)) - (((/* implicit */int) (short)26526))))));
                    var_13 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)26519)) : (((/* implicit */int) (short)26514)))));
                }
                for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    arr_13 [i_0] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) (short)26521)) ? (((/* implicit */int) (short)-20774)) : (((/* implicit */int) arr_1 [i_1])));
                    arr_14 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-20805)) : ((~(((/* implicit */int) arr_0 [(unsigned short)21]))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] &= ((/* implicit */unsigned int) ((signed char) arr_5 [i_4] [i_0]));
                }
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    arr_18 [i_0] [(unsigned char)19] [i_1] [i_2] [i_5] [i_5] = arr_3 [i_5] [i_5];
                    arr_19 [i_0] [10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((-(4365274901192734848LL))) <= (((((/* implicit */_Bool) 9983735528639252358ULL)) ? (2145083885059540227LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)16] [i_1] [i_5])))))));
                }
                for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        arr_24 [i_1] [i_2] [i_6] [i_7] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))));
                        arr_25 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */long long int) ((-2147483642) == (((/* implicit */int) (short)26509))));
                        arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_22 [i_6] [i_0]);
                        arr_27 [i_7] [i_6] [(unsigned char)20] [i_2] [i_1] [(unsigned char)20] [(unsigned char)20] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_0] [i_2] [18U] [i_7]))));
                    }
                    arr_28 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) (short)26521)))) + (2147483647))) << ((((((-(((/* implicit */int) arr_11 [4ULL] [i_0] [i_0] [0LL] [i_2] [i_6])))) + (207))) - (9)))));
                    arr_29 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((2147483633) - (2147483626)))));
                }
                var_14 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_0] [i_0])) - (((/* implicit */int) var_10))));
                arr_30 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) | (arr_4 [i_0] [i_2])));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_4))) + (((/* implicit */int) ((short) (short)-20774)))));
            }
            for (long long int i_8 = 4; i_8 < 21; i_8 += 4) /* same iter space */
            {
                var_16 = (!(((/* implicit */_Bool) arr_11 [i_0] [(short)19] [i_1] [i_1] [i_8] [i_8 + 1])));
                /* LoopSeq 2 */
                for (short i_9 = 2; i_9 < 22; i_9 += 4) 
                {
                    var_17 += ((/* implicit */signed char) ((int) ((unsigned short) arr_36 [i_0] [i_1] [i_0] [i_9])));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((unsigned short) arr_32 [i_8] [i_9 - 1]));
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_8] [i_9 - 1] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(var_7)))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_20 [i_0] [i_1] [i_8] [i_9] [i_9 - 2] [i_10]))))))));
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    arr_44 [(unsigned short)7] [(unsigned short)7] [i_1] [(unsigned short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (unsigned char)240))));
                    var_20 = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_45 [i_0] [i_1] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
            }
            for (long long int i_12 = 4; i_12 < 21; i_12 += 4) /* same iter space */
            {
                var_21 |= ((/* implicit */unsigned int) var_4);
                var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)64))));
            }
            var_23 = ((/* implicit */_Bool) ((signed char) 11637675412766469285ULL));
        }
        for (unsigned char i_13 = 1; i_13 < 23; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_14 = 4; i_14 < 22; i_14 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-26508))));
                var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_14 + 1]))));
            }
            arr_55 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)26519))));
            arr_56 [i_0] [14ULL] = ((/* implicit */int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        }
        for (short i_15 = 0; i_15 < 24; i_15 += 4) 
        {
            arr_60 [i_0] [i_0] [i_15] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_15] [i_0]);
            arr_61 [i_0] [(short)6] [i_15] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0]);
        }
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 2; i_17 < 22; i_17 += 4) 
            {
                var_26 = ((/* implicit */_Bool) (-(arr_23 [i_0] [i_17] [i_16] [i_0] [i_16 - 1] [i_17 - 2])));
                var_27 = ((((/* implicit */int) arr_38 [i_17 + 2])) >> (((((((((/* implicit */int) (short)-26508)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) - (1073728554))));
                arr_67 [(unsigned short)19] [(short)14] [i_17] [i_17 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_16 - 1] [14U] [i_16] [i_16 - 1] [14U] [i_16])) | (((/* implicit */int) arr_21 [i_16 - 1] [i_16] [i_16 - 1] [i_16] [15LL] [i_16 - 1]))));
                arr_68 [i_0] [i_16 - 1] [i_16] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_37 [i_16] [i_16] [i_16 - 1] [i_16 - 1] [i_17 + 1]))));
                var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)25))));
            }
            for (unsigned short i_18 = 1; i_18 < 22; i_18 += 4) 
            {
                var_29 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_41 [i_16 - 1] [i_16] [i_16]))));
                /* LoopSeq 2 */
                for (unsigned short i_19 = 1; i_19 < 23; i_19 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 24; i_20 += 4) 
                    {
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) 1033991455))));
                        arr_78 [i_19] [i_16] [12U] [i_19 + 1] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-26526))))) ? ((-(((/* implicit */int) arr_51 [i_18 + 1] [i_19] [i_18 + 1])))) : (((((/* implicit */_Bool) (short)26514)) ? (((/* implicit */int) (unsigned char)240)) : (var_1)))));
                        var_31 &= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_8 [i_18] [i_16 - 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_1)))));
                    }
                    arr_79 [i_19 + 1] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) arr_20 [i_19] [(unsigned char)21] [i_18] [i_0] [i_0] [i_0]);
                    arr_80 [i_0] [(_Bool)1] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */int) arr_41 [i_19] [i_19 + 1] [i_19])) >> (((((/* implicit */int) var_6)) - (104)))));
                }
                for (unsigned short i_21 = 1; i_21 < 22; i_21 += 4) 
                {
                    var_32 = (~(arr_48 [i_18 + 1]));
                    var_33 ^= ((/* implicit */unsigned short) (+(6809068660943082349ULL)));
                }
                /* LoopSeq 1 */
                for (long long int i_22 = 0; i_22 < 24; i_22 += 4) 
                {
                    var_34 = var_2;
                    arr_85 [i_0] [i_18] [i_0] [i_0] = (-(((/* implicit */int) arr_69 [(unsigned short)4] [(unsigned char)12] [i_18 + 2] [(_Bool)1])));
                    /* LoopSeq 2 */
                    for (unsigned int i_23 = 1; i_23 < 22; i_23 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) (unsigned char)15);
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (~(2147483641))))));
                        arr_88 [i_0] [i_16] [i_16] [i_22] [i_0] = ((/* implicit */short) ((signed char) ((var_3) << (((((/* implicit */int) arr_3 [i_0] [i_16 - 1])) - (197))))));
                    }
                    for (unsigned short i_24 = 0; i_24 < 24; i_24 += 4) 
                    {
                        var_37 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (short)-128))))) % (((((/* implicit */int) (short)146)) << (((((/* implicit */int) (short)-26527)) + (26539)))))));
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_24] [i_22] [i_18 + 1] [(unsigned short)13] [i_0])) * (((/* implicit */int) arr_21 [i_0] [i_0] [i_16] [i_18 - 1] [i_22] [i_18 - 1]))))) / (((4051034090U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)128))))))))));
                        arr_91 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (short)26519);
                    }
                }
                arr_92 [4] [(unsigned short)13] = ((/* implicit */signed char) ((((/* implicit */int) arr_77 [(short)0] [i_18 - 1] [i_18 + 1] [i_16 - 1] [i_18] [i_18])) >= (((/* implicit */int) arr_77 [i_0] [i_18 + 1] [i_18] [i_16 - 1] [i_16] [i_0]))));
                var_39 = ((/* implicit */_Bool) arr_57 [i_16] [i_0]);
            }
            var_40 = ((/* implicit */short) ((arr_31 [i_16 - 1] [i_16 - 1] [i_16 - 1]) % (((/* implicit */unsigned long long int) arr_54 [i_16 - 1] [i_16 - 1] [i_16 - 1]))));
        }
    }
    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
    {
        var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((1152920405095219200LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))))), (((/* implicit */long long int) (unsigned char)240)))))));
        var_42 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_49 [i_25])), ((((+(var_3))) ^ (((/* implicit */long long int) ((((/* implicit */int) (short)136)) << (((arr_50 [i_25] [i_25]) + (6161056657701125151LL))))))))));
        arr_96 [i_25] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ ((+(var_7))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_25] [i_25] [i_25] [i_25])))));
        arr_97 [i_25 + 1] = ((unsigned char) max(((-(((/* implicit */int) (short)-20781)))), (((/* implicit */int) (short)-26495))));
    }
    /* LoopNest 2 */
    for (short i_26 = 1; i_26 < 19; i_26 += 4) 
    {
        for (signed char i_27 = 0; i_27 < 21; i_27 += 4) 
        {
            {
                var_43 = ((/* implicit */unsigned int) arr_36 [i_26] [i_26] [i_27] [i_27]);
                arr_103 [i_26] = ((/* implicit */long long int) ((((arr_100 [i_26 - 1]) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) >= (((/* implicit */long long int) (~(arr_42 [i_26 + 2]))))));
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) % (var_1)));
    var_45 = ((/* implicit */unsigned char) (+(3827594448U)));
}
