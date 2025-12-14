/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97544
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_11 = min((((/* implicit */unsigned long long int) (signed char)127)), (max((arr_2 [0LL]), (((/* implicit */unsigned long long int) 127020205U)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((arr_0 [i_0]) + (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((arr_4 [i_1] [i_1]) + (2147483647))) >> (((arr_4 [i_1] [i_1]) + (1047293137)))))) | (min((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_11 [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1] [i_2]))))) ? (((((((/* implicit */_Bool) arr_0 [i_1])) ? (7024814426179566766LL) : (((/* implicit */long long int) arr_6 [i_1] [i_2])))) + (((/* implicit */long long int) ((/* implicit */int) ((1497802020U) <= (((/* implicit */unsigned int) 532676608)))))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_1] [i_1])))))));
            arr_12 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)20))))) ? (arr_6 [i_1] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) (short)21601)) : (((/* implicit */int) arr_5 [i_1] [i_2])))))))) ? (((((/* implicit */_Bool) arr_6 [18U] [18U])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-115))))) : (min((12575857520767230273ULL), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_2])) << (((((min((arr_4 [i_2] [i_1]), (((/* implicit */int) var_10)))) + (1047293149))) - (5))))))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (17ULL)))) ? ((-(arr_1 [i_1] [i_2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)91)))))))) / ((((_Bool)1) ? (arr_0 [i_2]) : (arr_0 [i_2])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */int) var_4)) % (((/* implicit */int) var_6))))));
                var_15 = ((/* implicit */int) ((long long int) arr_4 [i_3 + 3] [i_3 - 2]));
                /* LoopSeq 4 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((short) (unsigned short)6906));
                        arr_22 [i_3] [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((_Bool) arr_17 [i_3 - 2] [i_4 - 1] [i_4 - 1]));
                        arr_23 [i_5] [7] [i_3 + 3] [7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62017)) ^ (((/* implicit */int) (signed char)-25))))) % (((((/* implicit */_Bool) 12575857520767230273ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_17 [i_2] [i_3] [i_3])))));
                        var_17 = ((/* implicit */unsigned int) ((signed char) arr_20 [i_4 - 1] [(unsigned char)13] [i_3] [i_3] [i_3 + 1]));
                        arr_24 [(signed char)6] [i_3] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(arr_17 [i_2] [i_3] [i_3 + 1])));
                    }
                    var_18 -= ((/* implicit */long long int) ((unsigned long long int) arr_19 [(unsigned short)6] [i_1] [i_3 + 2] [i_1] [i_1]));
                }
                for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    arr_27 [i_1] [i_2] [i_3 + 3] [i_1] [i_6] = ((((/* implicit */unsigned long long int) arr_4 [i_3 - 2] [i_3 + 2])) & (5870886552942321343ULL));
                    arr_28 [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_1] [i_1])) < (((/* implicit */int) arr_9 [(signed char)15] [i_2])))) ? (arr_6 [i_3 - 2] [i_3 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 4] [i_3])))));
                }
                for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_19 = ((((/* implicit */int) arr_20 [i_1] [i_1] [20U] [i_7] [i_7])) == (((-1629877050) ^ (((/* implicit */int) arr_15 [i_3 - 2])))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_3 - 2] [i_3] [i_3 - 2] [i_3 - 2] [i_3 + 3])) ? (arr_21 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_3 - 2]) : (arr_21 [i_3 + 1] [4] [i_3 + 1] [i_3 + 4] [i_3 + 1])));
                    }
                    arr_33 [i_1] [i_2] [i_3] [(_Bool)1] [i_7] [i_7] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_8 [i_1])) * (((/* implicit */int) arr_8 [i_1]))))));
                }
                for (unsigned int i_9 = 2; i_9 < 21; i_9 += 1) 
                {
                    arr_36 [i_9] [i_9] [i_9] [i_9] [i_2] [8U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)20)) && (((/* implicit */_Bool) arr_18 [i_9 + 1] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                    arr_37 [i_1] [i_2] [(unsigned char)15] [i_1] [i_1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_3 - 2] [i_3 + 4] [i_9] [i_3 + 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) arr_17 [i_1] [5LL] [i_3 + 2])))))) : (9223372036854775807LL)));
                    arr_38 [i_9] [i_2] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_2] [i_2] [i_3] [i_9])) && (((/* implicit */_Bool) var_9))));
                }
            }
        }
        for (unsigned int i_10 = 4; i_10 < 19; i_10 += 2) 
        {
            arr_43 [i_1] [i_10] [19ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -9223372036854775780LL)) % (12575857520767230273ULL)));
            arr_44 [5U] [i_10 + 1] [i_10] = ((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (signed char)-44))));
            var_21 += ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_20 [i_1] [i_10 + 2] [i_10] [i_1] [i_1])))));
            arr_45 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_10] [i_1] [i_10 - 4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [i_10] [i_1]))) : (arr_18 [i_1] [i_10 + 1] [i_10 + 1] [i_1] [i_10] [(_Bool)1])))) ? (((/* implicit */int) ((short) ((((/* implicit */int) arr_9 [i_1] [i_1])) ^ (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1])))))) : ((-(((/* implicit */int) (signed char)62))))));
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_48 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(arr_46 [(signed char)10] [i_11] [i_1])));
            var_22 *= ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_1] [i_11]))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 377814854U)) * (18446744073709551598ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1] [8U] [i_1] [16LL]))) : (arr_32 [i_11] [i_11] [i_1] [i_1] [i_1] [i_1]))))));
            var_24 = ((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_10 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_11] [i_11] [i_1]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 1) /* same iter space */
            {
                arr_52 [15LL] [(short)2] [15LL] [(short)2] = (~(arr_47 [i_12 - 1] [i_1] [i_1]));
                var_25 -= ((/* implicit */short) (unsigned char)207);
                arr_53 [i_1] [i_11] [i_11] [(unsigned short)13] = ((/* implicit */unsigned long long int) (unsigned char)132);
                /* LoopSeq 1 */
                for (long long int i_13 = 2; i_13 < 21; i_13 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), (((((arr_18 [i_13 - 1] [i_12] [i_11] [i_11] [i_1] [i_1]) | (((/* implicit */unsigned long long int) var_3)))) < (((5870886552942321343ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                    var_27 = ((/* implicit */long long int) ((((arr_17 [i_12] [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1]))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_13 + 1] [i_12 + 1] [i_12 + 1])))));
                }
            }
            for (unsigned long long int i_14 = 2; i_14 < 21; i_14 += 1) /* same iter space */
            {
                arr_60 [i_1] [i_11] [i_14 - 1] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_41 [i_14] [i_11] [i_1]))))) ? (arr_55 [i_14 + 1] [16ULL] [16ULL] [16ULL] [i_1]) : (((/* implicit */int) arr_56 [i_14] [i_14] [i_14] [i_14 - 1]))));
                arr_61 [i_1] [i_11] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) (signed char)122))) ^ ((~(5870886552942321350ULL)))));
            }
        }
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_1] [i_1])), (arr_30 [i_1])))) ? ((~(((/* implicit */int) arr_34 [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((signed char) var_6))))))));
        /* LoopSeq 2 */
        for (signed char i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            var_29 = ((/* implicit */signed char) 1317399397U);
            var_30 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_56 [i_1] [i_1] [i_1] [i_1]))) || (((/* implicit */_Bool) arr_10 [i_1])))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_16] [i_16] [i_1])) ? (((/* implicit */unsigned long long int) ((arr_47 [i_1] [i_1] [i_1]) ^ (((/* implicit */int) (unsigned char)158))))) : (((((/* implicit */_Bool) arr_18 [i_16] [(unsigned char)17] [i_16] [i_1] [i_1] [(signed char)19])) ? (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            var_32 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((arr_7 [i_16] [i_1]), (arr_25 [i_1] [14ULL] [20] [i_16])))) ? (arr_0 [i_16]) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_57 [i_1] [i_16] [i_1] [i_1])))))));
            arr_66 [i_1] [i_16] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) min((10659514186107771519ULL), (((/* implicit */unsigned long long int) 2062076657U)))))) * ((+(((/* implicit */int) arr_20 [i_1] [i_1] [i_16] [6] [i_1]))))));
        }
        var_33 = ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) ((arr_55 [i_1] [i_1] [i_1] [i_1] [i_1]) - (((/* implicit */int) arr_15 [i_1]))))));
    }
    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((min((637236247U), (((/* implicit */unsigned int) var_0)))) - (637236217U)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) max((5870886552942321332ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_10))))));
}
