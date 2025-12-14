/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69493
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
    var_17 |= ((/* implicit */_Bool) ((unsigned long long int) var_2));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        var_18 &= ((/* implicit */unsigned long long int) ((long long int) ((long long int) 1891408344U)));
        var_19 = ((/* implicit */short) ((_Bool) ((_Bool) var_16)));
        var_20 ^= ((/* implicit */unsigned int) ((_Bool) ((_Bool) (unsigned short)65522)));
        var_21 = ((/* implicit */unsigned long long int) ((long long int) ((short) (signed char)-33)));
    }
    for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_22 += ((unsigned int) ((unsigned int) 1891408332U));
            var_23 += ((/* implicit */_Bool) ((long long int) ((_Bool) arr_4 [i_1 - 2])));
        }
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            var_24 ^= ((int) 7860342739746970491ULL);
            var_25 += ((/* implicit */unsigned short) ((_Bool) ((short) ((unsigned long long int) 10586401333962581144ULL))));
            var_26 = ((/* implicit */unsigned int) ((_Bool) ((int) 14180732171556286091ULL)));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_27 *= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) 18446744073709551615ULL)));
                arr_10 [i_1] = ((/* implicit */unsigned int) ((int) ((unsigned long long int) (_Bool)1)));
                arr_11 [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((short) ((_Bool) var_15)));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_14 [11LL] [i_3] [i_1] = ((unsigned long long int) ((unsigned short) arr_9 [i_1]));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_21 [(_Bool)1] [i_1] [i_5] [(signed char)11] [i_7] = ((/* implicit */signed char) ((int) ((unsigned long long int) ((_Bool) arr_3 [i_1]))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((signed char) ((long long int) 7860342739746970500ULL))))));
                            arr_22 [i_1] [i_5] [i_6] = ((_Bool) ((_Bool) var_10));
                        }
                    } 
                } 
                var_29 = ((unsigned long long int) ((unsigned char) arr_12 [i_1 + 3] [i_1 + 4] [i_1]));
            }
        }
        /* vectorizable */
        for (short i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                arr_27 [i_1] [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) var_8));
                var_30 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
            }
            var_31 &= ((/* implicit */unsigned char) ((_Bool) ((unsigned short) var_15)));
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 11; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                {
                    arr_32 [i_1] [i_10 + 2] [i_11] [i_11] = ((unsigned long long int) ((signed char) arr_30 [i_1]));
                    /* LoopSeq 4 */
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            var_32 ^= ((_Bool) ((long long int) (_Bool)1));
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((short) ((int) 1812836500U))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((_Bool) ((_Bool) arr_39 [i_10 - 1] [i_10 + 1]))))));
                            var_35 += ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) var_0)));
                            var_36 = ((/* implicit */unsigned short) ((signed char) ((unsigned int) arr_13 [i_1 - 2] [i_1 + 3])));
                        }
                        for (unsigned int i_15 = 3; i_15 < 10; i_15 += 3) 
                        {
                            var_37 = ((/* implicit */_Bool) ((signed char) ((_Bool) arr_20 [i_1] [i_1 - 2] [i_1 + 3] [i_1 + 1] [i_1])));
                            var_38 -= ((short) ((_Bool) 2482130822U));
                            var_39 += ((/* implicit */unsigned char) ((long long int) ((unsigned short) 1205058400U)));
                            arr_43 [i_1] [i_10] [i_11] [i_11] [i_15] = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) var_14)));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_16 = 0; i_16 < 13; i_16 += 3) 
                        {
                            var_40 |= ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) 7860342739746970486ULL)));
                            var_41 = ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) 1870420761151319423ULL)));
                            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((_Bool) ((_Bool) (signed char)-78))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
                        {
                            var_43 -= ((/* implicit */unsigned char) ((_Bool) var_2));
                            var_44 = ((/* implicit */_Bool) ((short) var_6));
                        }
                        for (unsigned short i_18 = 0; i_18 < 13; i_18 += 4) 
                        {
                            arr_51 [i_1] [i_10] [i_1] [i_12] [(unsigned char)2] = ((/* implicit */signed char) ((unsigned int) ((unsigned int) 2482130784U)));
                            var_45 = ((/* implicit */unsigned short) ((unsigned long long int) ((int) var_8)));
                            arr_52 [i_1] [i_1] [i_10 + 1] [i_11] [i_12] [i_11] = ((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) var_3)));
                        }
                        var_46 ^= ((_Bool) ((unsigned long long int) var_11));
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 12; i_19 += 3) 
                    {
                        var_47 = ((/* implicit */int) ((_Bool) ((unsigned char) arr_48 [i_1 + 3] [i_10 + 1] [i_11] [i_19] [i_1])));
                        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((unsigned int) ((_Bool) var_5))))));
                        var_49 = ((/* implicit */unsigned int) ((int) ((unsigned long long int) ((unsigned long long int) var_3))));
                        var_50 += ((/* implicit */_Bool) ((long long int) 7860342739746970459ULL));
                    }
                    for (unsigned char i_20 = 0; i_20 < 13; i_20 += 4) 
                    {
                        var_51 = ((unsigned long long int) ((unsigned short) (unsigned short)47145));
                        /* LoopSeq 2 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_52 += ((unsigned int) ((unsigned int) -4940935849860806162LL));
                            var_53 ^= ((/* implicit */_Bool) ((long long int) -2817591940035029041LL));
                        }
                        /* vectorizable */
                        for (long long int i_22 = 1; i_22 < 11; i_22 += 1) 
                        {
                            var_54 = ((/* implicit */_Bool) ((unsigned char) var_11));
                            var_55 = ((/* implicit */int) ((unsigned long long int) arr_15 [i_1 - 1] [10U] [i_10 - 1] [(_Bool)0] [i_1 - 1] [i_22 + 1]));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            arr_67 [i_1] [i_20] [i_1] = ((long long int) ((unsigned short) 4940935849860806156LL));
                            var_56 ^= ((/* implicit */_Bool) ((unsigned int) ((unsigned int) var_12)));
                        }
                        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                        {
                            var_57 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                            var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) ((long long int) ((long long int) ((long long int) arr_33 [i_1] [(signed char)10] [i_20] [(signed char)10] [i_24 + 1] [i_20])))))));
                            var_59 = ((/* implicit */long long int) ((unsigned int) ((long long int) (signed char)-94)));
                            var_60 |= ((/* implicit */unsigned short) ((_Bool) ((_Bool) var_8)));
                        }
                        for (int i_25 = 1; i_25 < 11; i_25 += 4) 
                        {
                            var_61 = ((/* implicit */long long int) min((var_61), (((long long int) 9U))));
                            var_62 = ((/* implicit */unsigned char) min((var_62), (((/* implicit */unsigned char) ((int) ((_Bool) ((signed char) var_16)))))));
                            var_63 = ((/* implicit */unsigned char) ((short) ((unsigned short) arr_31 [i_1] [i_25 - 1] [i_1 + 3])));
                            var_64 = ((_Bool) ((unsigned char) (_Bool)1));
                        }
                    }
                    for (long long int i_26 = 2; i_26 < 12; i_26 += 3) 
                    {
                        arr_74 [(unsigned short)7] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) arr_45 [i_26 - 1] [i_1] [i_10 - 1] [i_1] [i_1])));
                        var_65 &= ((/* implicit */_Bool) ((signed char) ((short) arr_35 [i_1 + 1] [i_10 + 1] [i_26 + 1] [i_26] [i_26])));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_28 = 0; i_28 < 13; i_28 += 4) 
            {
                var_66 = ((/* implicit */unsigned char) ((long long int) var_7));
                var_67 = ((/* implicit */unsigned long long int) ((unsigned int) arr_15 [3] [i_1] [3] [i_1 - 1] [i_28] [10]));
            }
            for (unsigned int i_29 = 0; i_29 < 13; i_29 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_30 = 4; i_30 < 10; i_30 += 1) 
                {
                    for (unsigned char i_31 = 0; i_31 < 13; i_31 += 4) 
                    {
                        {
                            arr_89 [i_1] [i_27] [i_29] [(_Bool)1] [i_31] = ((/* implicit */_Bool) ((unsigned int) arr_70 [i_1] [i_30 - 1] [i_1 - 2] [i_30 - 4] [i_1]));
                            var_68 |= ((/* implicit */unsigned int) ((int) var_14));
                            var_69 += ((/* implicit */unsigned char) ((unsigned int) var_4));
                        }
                    } 
                } 
                var_70 = ((/* implicit */int) ((unsigned short) arr_20 [i_1 - 1] [i_1 + 1] [i_1 + 3] [i_1 - 2] [i_1 + 2]));
                var_71 += ((/* implicit */unsigned char) ((_Bool) 4294967289U));
                var_72 += ((/* implicit */unsigned int) ((_Bool) 343923611));
            }
            var_73 ^= ((/* implicit */unsigned int) ((_Bool) 10465744228624745757ULL));
            var_74 = ((/* implicit */unsigned short) ((int) 18446744073709551615ULL));
            var_75 = ((/* implicit */long long int) ((_Bool) arr_78 [i_1] [i_1 + 4] [i_1]));
        }
        var_76 = ((_Bool) ((signed char) arr_54 [i_1] [i_1 + 4] [i_1 - 2] [i_1]));
    }
    var_77 = ((/* implicit */_Bool) ((unsigned char) ((_Bool) ((int) 481261872U))));
    /* LoopNest 3 */
    for (unsigned long long int i_32 = 2; i_32 < 20; i_32 += 1) 
    {
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
        {
            for (unsigned char i_34 = 0; i_34 < 24; i_34 += 4) 
            {
                {
                    var_78 = ((/* implicit */unsigned int) ((unsigned short) ((signed char) arr_93 [i_32 + 3] [i_32 - 1])));
                    arr_98 [i_33] = ((/* implicit */unsigned int) ((_Bool) ((short) (unsigned char)119)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_35 = 0; i_35 < 17; i_35 += 3) 
    {
        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_37 = 1; i_37 < 15; i_37 += 3) 
                {
                    for (_Bool i_38 = 0; i_38 < 0; i_38 += 1) 
                    {
                        {
                            var_79 = ((/* implicit */short) ((unsigned long long int) 18446744073709551613ULL));
                            var_80 = ((/* implicit */int) ((_Bool) ((int) var_13)));
                            var_81 = ((/* implicit */unsigned long long int) min((var_81), (((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) ((unsigned char) var_5)))))));
                        }
                    } 
                } 
                var_82 = ((/* implicit */_Bool) max((var_82), (((/* implicit */_Bool) ((unsigned long long int) ((int) var_6))))));
                arr_110 [i_36] = ((/* implicit */_Bool) ((unsigned int) ((signed char) 0ULL)));
            }
        } 
    } 
}
