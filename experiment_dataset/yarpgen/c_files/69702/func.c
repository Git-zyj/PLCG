/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69702
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
    var_20 += ((/* implicit */unsigned char) ((_Bool) var_3));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */unsigned char) -376596579);
                var_22 ^= ((/* implicit */short) (unsigned char)65);
            }
        } 
    } 
    var_23 = var_15;
    /* LoopSeq 3 */
    for (unsigned int i_2 = 3; i_2 < 24; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) arr_6 [i_2])))), (arr_8 [i_2] [i_2])));
        var_24 = ((/* implicit */unsigned char) arr_6 [i_2]);
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_25 |= var_8;
                    arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]);
                    arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) == (8423995416081211130LL)));
                }
            } 
        } 
        var_26 |= ((/* implicit */long long int) ((min((((/* implicit */int) (_Bool)1)), (arr_12 [i_2 + 1] [i_2 + 1]))) + (((/* implicit */int) arr_7 [i_2] [i_2]))));
        var_27 += ((/* implicit */unsigned char) ((short) ((((/* implicit */int) ((short) arr_11 [i_2]))) == (arr_12 [i_2] [i_2]))));
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 3; i_6 < 24; i_6 += 1) 
        {
            arr_22 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_10 [i_5] [i_5])) : (arr_14 [i_5] [i_5] [i_5] [i_5]))), (max((((/* implicit */unsigned long long int) var_17)), (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (unsigned char)245)) ? (((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */unsigned long long int) 28U)) : (arr_14 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -376596563)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))))));
            var_28 = max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) var_0)));
            /* LoopSeq 2 */
            for (signed char i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                var_29 |= var_16;
                arr_25 [i_6] [i_7] = ((/* implicit */int) (((!(arr_17 [i_5] [i_5]))) ? (((((long long int) 15393327008833429431ULL)) + (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((2097151U) << (((/* implicit */int) arr_13 [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) ((_Bool) arr_6 [i_7]))) : (max((2147483647), (((/* implicit */int) var_4)))))))));
                arr_26 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_6 - 3] [i_7 - 1])) - (min((((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))), (((arr_23 [i_7] [i_7] [i_7] [i_7]) ? (arr_10 [i_5] [i_5]) : (((/* implicit */int) var_16))))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_30 *= ((/* implicit */_Bool) 8589930496ULL);
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 4; i_10 < 24; i_10 += 2) 
                    {
                        arr_34 [i_5] [i_5] [i_9] [i_9] [i_5] [i_5] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_24 [i_9] [i_6] [i_9])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */int) var_19)) : (-376596563)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_6] [i_6]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) * (arr_14 [i_8] [i_8] [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_32 [i_6] [i_6] [i_6] [i_6]), (arr_32 [i_5] [i_6 - 2] [i_6 - 2] [i_5])))))));
                        arr_35 [i_9] [i_5] [i_5] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -2147483629)), (((((/* implicit */_Bool) 1386582873U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) : (1386582878U)))))) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                        var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_10]))) | (((((/* implicit */_Bool) arr_21 [i_6 - 1] [i_6 - 3] [i_6 - 3])) ? (var_7) : (((/* implicit */unsigned long long int) arr_27 [i_5]))))));
                        var_32 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_12))))) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) arr_28 [i_6] [i_6 - 3] [i_6 - 1])))), (((/* implicit */int) ((_Bool) ((arr_23 [i_9] [i_9] [i_9] [i_9]) ? (((/* implicit */unsigned long long int) arr_12 [i_5] [i_5])) : (var_8)))))));
                        var_33 ^= -1;
                    }
                    for (int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */int) var_6);
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 16212312690870390804ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25232))) : (1923940751019895450ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_19 [i_6 - 1] [i_6 - 1]))))));
                        arr_39 [i_5] [i_5] [i_9] [i_9] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1710577372)) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5] [i_5])))));
                        var_36 -= min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_36 [i_5] [i_5] [i_5] [i_5] [i_5])))) && (((/* implicit */_Bool) (unsigned char)160))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */long long int) arr_19 [i_5] [i_5])) / (arr_38 [i_5] [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6 + 1] [i_6 - 3] [i_5]))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                    {
                        var_37 -= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) arr_20 [i_5]))) : (((/* implicit */int) var_5))));
                        arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12))) : (var_13)))) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (_Bool)0))));
                        var_38 += ((/* implicit */unsigned short) (_Bool)0);
                    }
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_5])) ? (min((((/* implicit */unsigned long long int) ((unsigned int) var_17))), (((((/* implicit */_Bool) 5130827422389391250LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) : (16937375409044149738ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (112391410) : (((/* implicit */int) (unsigned char)180)))))));
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    var_41 = (~((-(((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (short)-7991)) : (((/* implicit */int) var_2)))))));
                }
                arr_43 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((-5130827422389391251LL) == (((/* implicit */long long int) -635001970))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        {
                            var_42 += max((((/* implicit */unsigned long long int) ((unsigned char) arr_40 [i_5] [i_5] [i_5] [i_8] [i_5] [i_5] [i_5]))), (((unsigned long long int) (_Bool)1)));
                            arr_48 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_1))), (((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5])))))))) ? (arr_19 [i_5] [i_5]) : (((/* implicit */int) (signed char)12)));
                            var_43 = ((((/* implicit */_Bool) (-(arr_44 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) && (((/* implicit */_Bool) ((short) arr_8 [i_6] [i_6 + 1]))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned char i_15 = 2; i_15 < 23; i_15 += 4) 
            {
                for (short i_16 = 1; i_16 < 24; i_16 += 1) 
                {
                    {
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1317645151)) || ((_Bool)1)));
                        var_45 = ((/* implicit */unsigned long long int) (unsigned char)203);
                        arr_54 [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6])) ? ((-(arr_38 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 2]))) : (((long long int) ((_Bool) (short)-18312)))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_17 = 3; i_17 < 23; i_17 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    for (short i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */short) 9976033445813648126ULL);
                            arr_66 [i_5] [i_5] [i_5] [i_17] [i_5] [i_5] = 7548338761216976293ULL;
                            arr_67 [i_5] [i_5] [i_5] [i_17] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) ((arr_23 [i_17] [i_17] [i_17] [i_17]) && (((/* implicit */_Bool) arr_20 [i_17])))))));
                            var_47 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_20] [i_17 - 2])) && (((/* implicit */_Bool) arr_62 [i_5] [i_17 - 3]))));
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_17])) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (short)-17819))));
                        }
                    } 
                } 
            } 
            var_49 = ((/* implicit */short) ((arr_13 [i_5] [i_5] [i_5]) ? (arr_52 [i_5] [i_17 - 2] [i_5]) : (arr_24 [i_17] [i_17 - 1] [i_17])));
            arr_68 [i_17] [i_17] [i_5] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) -2337668240252123240LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_5] [i_5])))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) 2337668240252123242LL)))))));
            arr_69 [i_17] [i_5] [i_17] = ((/* implicit */long long int) ((arr_17 [i_17 + 1] [i_17 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_8)));
            /* LoopSeq 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_50 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_17 + 1]))));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 25; i_22 += 1) 
                {
                    for (int i_23 = 3; i_23 < 22; i_23 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_5] [i_5] [i_5])) ? ((-(((/* implicit */int) arr_7 [i_5] [i_5])))) : (((/* implicit */int) (unsigned char)205))));
                            var_52 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_23 - 3] [i_23 - 3])) ? (arr_19 [i_23 + 2] [i_23 + 2]) : (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                var_53 = ((/* implicit */_Bool) arr_12 [i_5] [i_5]);
                var_54 = arr_77 [i_5] [i_5] [i_5] [i_5] [i_5];
            }
            for (short i_24 = 0; i_24 < 25; i_24 += 3) 
            {
                var_55 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (var_15))))));
                /* LoopNest 2 */
                for (unsigned char i_25 = 1; i_25 < 24; i_25 += 4) 
                {
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48759)) ? ((~(((/* implicit */int) var_18)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))));
                            var_57 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_62 [i_17] [i_17])) << (((((/* implicit */int) (unsigned char)173)) - (163))))) < (((/* implicit */int) (unsigned char)239))));
                        }
                    } 
                } 
                arr_86 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */short) (-(arr_44 [i_5] [i_5] [i_17 - 3] [i_5] [i_17 - 3] [i_17 - 3])));
            }
        }
        /* LoopNest 3 */
        for (unsigned long long int i_27 = 1; i_27 < 24; i_27 += 2) 
        {
            for (signed char i_28 = 1; i_28 < 24; i_28 += 1) 
            {
                for (long long int i_29 = 1; i_29 < 23; i_29 += 3) 
                {
                    {
                        var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_27 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_18 [i_27 + 1])) % (((/* implicit */int) (short)-10))))));
                        var_59 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_78 [i_27 + 1] [i_28 - 1] [i_28 - 1] [i_27 + 1] [i_29 + 2] [i_28 - 1] [i_27 + 1])) && (((/* implicit */_Bool) arr_78 [i_27 + 1] [i_28 - 1] [i_28 + 1] [i_28 + 1] [i_29 - 1] [i_28 - 1] [i_28 + 1]))))), (min((arr_82 [i_27 + 1] [i_28 + 1] [i_28 - 1] [i_28 - 1]), (arr_78 [i_27 - 1] [i_28 - 1] [i_28 + 1] [i_28 - 1] [i_29 + 2] [i_28 - 1] [i_27 - 1])))));
                    }
                } 
            } 
        } 
        var_60 = ((/* implicit */unsigned long long int) ((max((((int) var_4)), (((/* implicit */int) (unsigned char)1)))) < (((/* implicit */int) max((arr_11 [i_5]), (arr_11 [i_5]))))));
        var_61 = ((/* implicit */_Bool) min((2120063980U), (3166924860U)));
    }
    for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 3) 
    {
        var_62 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)53))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_60 [i_30] [i_30] [i_30])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6860))) ^ (min((var_1), (((/* implicit */unsigned long long int) var_4))))))));
        var_63 = ((/* implicit */signed char) (!(((_Bool) ((unsigned long long int) arr_29 [i_30] [i_30] [i_30])))));
    }
}
