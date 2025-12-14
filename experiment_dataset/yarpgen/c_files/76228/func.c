/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76228
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_1 [4LL]))))));
        arr_4 [i_0 - 1] = ((/* implicit */int) 9223372036854775807LL);
        var_12 = ((/* implicit */signed char) (-((~(4294967295U)))));
    }
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_13 |= ((/* implicit */unsigned short) max((min((min((arr_6 [i_1]), (1639224468170547010LL))), (max((((/* implicit */long long int) var_10)), (arr_7 [i_1] [i_1]))))), (((/* implicit */long long int) var_5))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) (-(((((var_4) + (((/* implicit */long long int) var_5)))) + (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)48892)))))))));
            var_15 &= ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)48874))))), (var_8))) <= (((((/* implicit */_Bool) max((arr_5 [1ULL]), (var_7)))) ? (max((((/* implicit */unsigned int) (signed char)20)), (var_8))) : (((/* implicit */unsigned int) var_5))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((arr_14 [i_3]) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)48873)))))));
            var_17 = ((/* implicit */unsigned int) (unsigned char)78);
        }
        for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
        {
            arr_18 [(signed char)2] [i_4] = ((/* implicit */unsigned int) var_7);
            var_18 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)16662), (((/* implicit */unsigned short) (short)-3326)))))) + (min((1152917106560335872ULL), (((/* implicit */unsigned long long int) arr_5 [i_1])))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_13 [i_4] [i_1] [i_1 - 1])) & (((/* implicit */int) (unsigned char)69)))))))));
        }
        var_19 = ((/* implicit */unsigned short) var_11);
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_20 -= ((/* implicit */short) (((+(((/* implicit */int) (unsigned short)48895)))) / (max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned short)8176))))));
        var_21 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) var_6)), (var_9)))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_6)), (var_9))))));
    }
    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        var_23 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46604))) + (2411380373U)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
                arr_32 [i_6] [i_7] [i_6] [(unsigned char)2] = ((/* implicit */unsigned short) 6044811655970199474ULL);
                var_25 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)65535)))) + (((/* implicit */int) arr_0 [i_6]))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_9)));
                            arr_39 [i_6] [i_7] [(short)14] [i_6] [i_10] = ((/* implicit */unsigned char) var_10);
                        }
                    } 
                } 
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                arr_42 [i_7] = arr_38 [i_7] [i_11 - 1] [i_11 - 1] [10U] [i_7];
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        {
                            var_27 |= ((/* implicit */_Bool) (unsigned short)61965);
                            var_28 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)65535))));
                            var_29 *= ((/* implicit */short) arr_16 [i_6] [i_7] [i_11]);
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (unsigned char)236))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (((~(var_3))) + (-239811718))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
            {
                arr_52 [i_14] [i_14] [10LL] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)168))));
                var_32 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_25 [i_6] [i_7] [i_7]))))));
            }
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */_Bool) (unsigned char)237);
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) 
                {
                    for (unsigned char i_17 = 1; i_17 < 14; i_17 += 3) 
                    {
                        {
                            arr_61 [i_17] [i_15] [i_15] [i_15] [i_6] &= ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_6] [i_15]))) + (4294967295U)))));
                            arr_62 [i_6] [i_6] [i_6] [(_Bool)1] [i_6] [i_15] [i_6] &= ((/* implicit */unsigned short) arr_46 [3ULL] [i_16] [i_15] [i_7] [i_6]);
                            var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) 1508604314)) & (1883586922U)));
                            var_35 = ((/* implicit */int) var_4);
                        }
                    } 
                } 
                var_36 = var_1;
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    var_37 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)168)) + (var_3)));
                    arr_65 [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (18446744073709551598ULL)));
                    var_38 ^= ((/* implicit */long long int) var_9);
                }
            }
            arr_66 [(_Bool)1] &= ((/* implicit */unsigned char) arr_20 [i_7 + 1]);
            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) arr_44 [i_6]))));
        }
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 15; i_19 += 4) 
        {
            var_40 = ((/* implicit */int) max((((var_8) * (((/* implicit */unsigned int) (+(var_5)))))), (min((2815350880U), (((/* implicit */unsigned int) -1))))));
            var_41 = ((/* implicit */long long int) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) & (((/* implicit */int) (unsigned char)217)))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_6] [i_6] [i_19] [12LL])))))))));
            var_42 = ((/* implicit */signed char) var_3);
            var_43 *= ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned long long int) (+(var_3))))));
        }
        /* LoopNest 2 */
        for (signed char i_20 = 2; i_20 < 13; i_20 += 3) 
        {
            for (long long int i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                {
                    arr_77 [7ULL] [i_20] = (unsigned short)48882;
                    var_44 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (signed char)62))));
                    arr_78 [i_20] = ((/* implicit */short) (-(((((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ? (((15670945206758804477ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))))) : (((/* implicit */unsigned long long int) arr_20 [i_21]))))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 3) 
    {
        var_45 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
        var_46 -= ((/* implicit */unsigned char) var_3);
    }
    for (unsigned short i_23 = 2; i_23 < 15; i_23 += 3) 
    {
        var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) / (max((arr_6 [i_23 - 2]), ((-(var_4))))))))));
        /* LoopNest 3 */
        for (unsigned short i_24 = 0; i_24 < 17; i_24 += 3) 
        {
            for (signed char i_25 = 1; i_25 < 15; i_25 += 2) 
            {
                for (signed char i_26 = 0; i_26 < 17; i_26 += 3) 
                {
                    {
                        var_48 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)184)), (max((((/* implicit */long long int) (unsigned char)63)), (71987225293750272LL)))));
                        arr_97 [i_23 + 1] [i_23 + 2] [i_23] [i_23] = ((/* implicit */unsigned short) (-((+(17293826967149215743ULL)))));
                    }
                } 
            } 
        } 
        var_49 = (unsigned char)103;
    }
    for (unsigned char i_27 = 0; i_27 < 22; i_27 += 3) 
    {
        var_50 = ((/* implicit */signed char) (-(((var_3) / (((/* implicit */int) (unsigned char)124))))));
        var_51 = ((/* implicit */signed char) arr_99 [i_27] [i_27]);
    }
}
