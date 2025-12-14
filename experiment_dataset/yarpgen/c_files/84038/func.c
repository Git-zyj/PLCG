/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84038
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61267)) - (((/* implicit */int) arr_1 [i_0 + 3]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (signed char)27))))) >= (((((/* implicit */int) (short)-1)) - (((/* implicit */int) (signed char)109))))))) : (((/* implicit */int) max((arr_0 [i_0 + 3]), (arr_0 [i_0 + 3]))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [(signed char)14] [i_3 - 1] [i_4] = ((/* implicit */int) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_4] [i_3] [i_4])) ? (((/* implicit */int) min(((short)22), (arr_0 [i_1])))) : (((/* implicit */int) ((short) var_13)))))))))));
                        }
                    } 
                } 
            } 
            var_18 += ((/* implicit */unsigned long long int) min((((((((/* implicit */int) arr_10 [i_0 + 2] [i_0] [i_0] [i_1] [i_0 + 2])) - (((/* implicit */int) (signed char)96)))) + ((-(((/* implicit */int) (signed char)-102)))))), (((((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) arr_1 [i_0 + 3])))) << (((/* implicit */int) (short)1))))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (2093340205U)));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65533)) ^ (((/* implicit */int) (short)1))));
            var_21 -= ((/* implicit */unsigned int) min((min((var_2), (((/* implicit */unsigned long long int) 1044531101U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 3])))))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max(((unsigned short)29), (((/* implicit */unsigned short) ((signed char) (signed char)-8))))))));
        }
        for (long long int i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    for (signed char i_9 = 1; i_9 < 20; i_9 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) arr_24 [i_0 + 2] [i_7] [(unsigned char)9] [i_0] [i_9]);
                            var_24 = (signed char)96;
                            arr_26 [i_0] [i_6 - 1] [i_0] [i_0] [i_9 + 1] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)2)) != (((/* implicit */int) (unsigned char)231)))) ? ((-(((/* implicit */int) (short)-1)))) : (((/* implicit */int) var_3))));
                            var_25 = ((/* implicit */int) (signed char)-119);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) (unsigned char)228)) : (((((/* implicit */_Bool) (signed char)-109)) ? (max((arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [i_6]), (((/* implicit */int) arr_4 [i_0] [i_6 + 4])))) : (((/* implicit */int) (unsigned char)255))))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)14)) * (((/* implicit */int) arr_5 [i_0]))));
            arr_31 [i_0] [i_0] = ((/* implicit */_Bool) (-(arr_15 [i_0 + 3] [i_0 + 3] [i_0 + 2])));
            var_27 = ((/* implicit */unsigned int) ((_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
            arr_32 [13] [i_10] [i_0] = ((/* implicit */_Bool) (short)-3301);
            /* LoopNest 2 */
            for (short i_11 = 3; i_11 < 21; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) min((var_28), (var_11)));
                        var_29 = (+((+(((/* implicit */int) var_8)))));
                        var_30 = ((/* implicit */short) (signed char)62);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_13 = 1; i_13 < 21; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                {
                    var_31 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_3 [i_13] [i_0 + 1]))))));
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) 8283079745610395598ULL))));
                }
            } 
        } 
        var_33 -= ((/* implicit */unsigned long long int) arr_40 [(signed char)14] [i_0] [i_0]);
    }
    for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
    {
        var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_15] [i_15] [i_15])) == (((/* implicit */int) (short)32767))))), ((+(max((((/* implicit */unsigned int) var_11)), (arr_6 [i_15] [(signed char)20] [(_Bool)1] [i_15])))))));
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) 14161104378887864595ULL))));
    }
    for (short i_16 = 0; i_16 < 20; i_16 += 1) 
    {
        arr_51 [i_16] = ((/* implicit */unsigned int) (-(min((arr_48 [i_16]), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_16] [(_Bool)1] [i_16] [i_16] [(unsigned char)17])) || (arr_24 [i_16] [i_16] [i_16] [i_16] [i_16]))))))));
        var_36 &= ((/* implicit */long long int) ((((arr_41 [i_16]) ^ (arr_41 [i_16]))) < (min((((/* implicit */unsigned long long int) (short)1)), (arr_41 [i_16])))));
    }
    /* LoopNest 2 */
    for (int i_17 = 2; i_17 < 8; i_17 += 4) 
    {
        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            {
                var_37 = ((/* implicit */int) min((min((arr_53 [i_17 + 2]), (((/* implicit */unsigned long long int) arr_47 [i_17 - 1])))), (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) (unsigned char)0)), (2926493198U)))))));
                arr_56 [i_18] = ((/* implicit */unsigned int) (short)-1271);
                arr_57 [i_17] [i_18] = ((/* implicit */short) arr_6 [i_17] [i_18] [(_Bool)1] [i_18]);
                /* LoopNest 3 */
                for (signed char i_19 = 0; i_19 < 10; i_19 += 4) 
                {
                    for (signed char i_20 = 0; i_20 < 10; i_20 += 1) 
                    {
                        for (signed char i_21 = 0; i_21 < 10; i_21 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) ? (2462603972U) : (((((/* implicit */_Bool) -1105475848)) ? (176213023U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767)))))));
                                arr_66 [i_21] [i_20] [i_18] [i_18] [i_17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_43 [(_Bool)1] [i_18] [i_19] [i_18])))));
                                var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) 3910466560U))));
                                arr_67 [i_18] [i_21] [i_21] [i_20] [(short)0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1679393753)) ? (((/* implicit */unsigned int) min((697273057), (((/* implicit */int) arr_55 [i_19] [i_20]))))) : ((-(arr_27 [i_21]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(2711411659U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((4006931) <= ((-(-1105475848)))))), (var_16)));
    /* LoopNest 2 */
    for (unsigned short i_22 = 0; i_22 < 15; i_22 += 2) 
    {
        for (unsigned int i_23 = 1; i_23 < 12; i_23 += 1) 
        {
            {
                var_41 = ((/* implicit */unsigned int) -1773234641);
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 15; i_24 += 1) 
                {
                    for (signed char i_25 = 1; i_25 < 12; i_25 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) arr_7 [i_23] [i_23 - 1] [i_24]);
                            var_43 += ((/* implicit */unsigned long long int) (signed char)-108);
                            /* LoopSeq 2 */
                            for (long long int i_26 = 3; i_26 < 13; i_26 += 1) 
                            {
                                var_44 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_75 [i_25 + 2] [i_24] [i_23 - 1]), (arr_75 [i_22] [i_23] [i_24])))) & (((((/* implicit */int) (short)-6)) ^ (((/* implicit */int) (short)-32765))))));
                                arr_83 [i_22] [i_24] [i_25] [i_26 + 1] = ((/* implicit */unsigned long long int) max((arr_73 [i_22] [i_23] [i_26] [i_25 + 1]), (((/* implicit */int) arr_80 [i_22] [i_23 - 1] [i_24] [i_25 + 1] [i_26]))));
                                arr_84 [i_22] [i_22] [i_22] [i_22] [i_22] [i_25] [i_22] &= (-(((/* implicit */int) min((arr_42 [i_22] [i_25 + 2] [i_22]), (arr_42 [i_22] [i_25 + 3] [i_22])))));
                                var_45 = arr_74 [9ULL] [i_23] [i_24] [i_26 - 1];
                            }
                            for (short i_27 = 0; i_27 < 15; i_27 += 2) 
                            {
                                arr_88 [i_22] [(unsigned char)2] [i_23] [i_25] [i_22] [i_25] [i_24] = ((/* implicit */signed char) arr_72 [0U] [i_23 + 2] [i_27]);
                                var_46 = arr_49 [i_23];
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_28 = 0; i_28 < 15; i_28 += 4) 
                {
                    for (unsigned char i_29 = 0; i_29 < 15; i_29 += 2) 
                    {
                        for (int i_30 = 2; i_30 < 14; i_30 += 1) 
                        {
                            {
                                arr_95 [i_23] [(signed char)1] [i_30] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) arr_89 [i_30 - 2] [i_30 - 1] [i_23 + 1] [i_23])) : (max((arr_41 [i_29]), (((/* implicit */unsigned long long int) var_8))))))));
                                var_47 = ((/* implicit */unsigned long long int) (unsigned char)254);
                                arr_96 [i_28] [i_30] |= ((/* implicit */unsigned int) arr_1 [i_23]);
                                var_48 &= ((/* implicit */int) 2495775703U);
                            }
                        } 
                    } 
                } 
                var_49 = (short)32758;
                /* LoopNest 3 */
                for (int i_31 = 2; i_31 < 14; i_31 += 1) 
                {
                    for (signed char i_32 = 0; i_32 < 15; i_32 += 1) 
                    {
                        for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */signed char) var_0);
                                var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_71 [i_23 - 1] [i_31 + 1] [i_33 - 1])))) ^ (((/* implicit */int) (signed char)94)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
