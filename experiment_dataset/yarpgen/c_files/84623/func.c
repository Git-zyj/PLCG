/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84623
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
    var_16 = ((/* implicit */unsigned short) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) & (13863488631831468654ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60110)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-9))))))))));
    var_17 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) != (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (2389012465818155361ULL)))))) * (((/* implicit */int) var_15))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0 - 1]);
        var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (unsigned short)63156)) | (((/* implicit */int) arr_1 [i_0])))))) >> (((min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63156))) : (16057731607891396255ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_0 - 1])))) - (8999734429648844754ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (2389012465818155362ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((short) (short)-7000))) : (1289966923)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (3198475607413880041ULL))) != (((unsigned long long int) (signed char)75))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1479830511)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1]))));
        var_20 ^= ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)0));
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-32758)) == (((/* implicit */int) (signed char)-66)))))) / (arr_0 [i_1 + 1] [i_1 + 1])));
    }
    for (short i_2 = 3; i_2 < 23; i_2 += 4) 
    {
        var_22 = ((/* implicit */int) min((var_22), (max((((((/* implicit */_Bool) arr_7 [i_2])) ? (((((/* implicit */_Bool) (short)-3534)) ? (((/* implicit */int) (unsigned short)32046)) : (((/* implicit */int) arr_9 [i_2 - 2])))) : (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) arr_8 [i_2 + 2])) ? (((((arr_7 [(short)11]) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_2 - 1])) - (20))))) : (((/* implicit */int) arr_8 [i_2 - 3]))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_7 [i_5]))));
                        var_24 = ((/* implicit */unsigned short) 10049726934783584933ULL);
                        var_25 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) arr_14 [i_2 + 1] [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_14 [(unsigned char)10] [i_3] [i_4] [i_4])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58014)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2454)) / (((/* implicit */int) arr_9 [i_6]))))) : (arr_15 [i_6] [i_6] [i_6] [i_6])));
        var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)2454)) : (((((/* implicit */int) (unsigned short)58014)) + (((/* implicit */int) arr_1 [i_6]))))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            arr_22 [i_7] = ((/* implicit */_Bool) ((unsigned char) arr_16 [i_6] [i_6] [i_6] [i_7] [i_7]));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15978)) ? (((/* implicit */int) arr_18 [i_6] [i_8])) : (((/* implicit */int) arr_16 [i_6] [(unsigned short)24] [i_8] [i_8] [(unsigned short)24]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_26 [(unsigned char)9] [i_6] [i_7] [i_6] [i_6])) : (((/* implicit */int) (unsigned short)0))))) : (((unsigned long long int) 140737488355327LL))));
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            arr_29 [i_7] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (unsigned short)63082)) : (((/* implicit */int) arr_24 [i_10] [i_6] [i_6] [i_6])))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || ((_Bool)1))))));
                            var_29 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */int) arr_25 [i_6] [i_7] [(short)0] [i_6])) : (((/* implicit */int) arr_19 [i_7]))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (unsigned short)61790))));
                        }
                        for (signed char i_11 = 1; i_11 < 16; i_11 += 1) 
                        {
                            arr_34 [i_6] [i_8] [i_6] [i_11 - 1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_11 + 1] [i_9] [i_7] [i_9] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (short)8878))) : (((((/* implicit */long long int) ((/* implicit */int) arr_9 [(short)15]))) + (arr_0 [i_9] [(unsigned short)6])))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16248)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_6] [i_7] [i_8] [i_8] [i_6] [i_11 + 1] [i_11 - 1]))) : (2901646938109488632LL)));
                            var_32 = ((/* implicit */unsigned short) (unsigned char)255);
                            arr_35 [i_6] [i_6] [i_7] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_8] [i_11 - 1]))) != (((((/* implicit */_Bool) (unsigned short)23014)) ? (4086326774141019029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95)))))));
                        }
                        for (unsigned short i_12 = 2; i_12 < 14; i_12 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_20 [i_6] [i_6]))));
                            arr_40 [i_6] [i_7] [i_7] [(unsigned short)3] [i_8] [i_6] [i_12 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_12 + 1] [i_12 + 2] [i_12 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_8] [(_Bool)1]) <= (((/* implicit */int) (unsigned short)5107)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6773))) + (arr_31 [i_7] [i_6] [i_12] [i_9] [i_9] [i_9] [i_12])))));
                        }
                        for (int i_13 = 2; i_13 < 15; i_13 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_8] [i_8] [i_9] [i_9] [i_9])) ? (((/* implicit */int) (short)8878)) : (((/* implicit */int) arr_39 [i_6] [i_6] [i_8] [i_8] [i_13]))))) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (unsigned char)25))));
                            arr_43 [i_7] = ((/* implicit */signed char) (unsigned short)2454);
                            var_35 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (unsigned short)6198)) <= (((/* implicit */int) (short)-20995)))));
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (short)1355))));
                            arr_44 [i_6] [i_9] [i_9] [i_6] [i_7] [i_6] [i_6] |= ((/* implicit */unsigned short) ((int) 1965220088557496704LL));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            arr_47 [i_6] [i_14] [i_14] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [(short)14] [(short)14] [(short)14] [i_14 + 1] [i_14 + 1] [i_6] [i_14 + 1])) ? (arr_38 [i_6] [i_6] [i_14] [i_14 + 1] [i_14 + 1] [i_6] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
            /* LoopSeq 4 */
            for (unsigned long long int i_15 = 1; i_15 < 14; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    arr_53 [i_16] [i_14] [i_15 - 1] [i_14] [i_6] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_31 [i_6] [i_6] [i_6] [(short)12] [i_6] [i_16] [i_16]))) >> (((((((/* implicit */_Bool) arr_8 [i_14 + 1])) ? (arr_52 [i_6] [i_6] [i_15] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_6] [i_14] [i_15] [i_15] [i_15]))))) - (2155348098620668090LL))))))));
                    arr_54 [i_6] [i_6] [i_16] [i_16] = ((/* implicit */_Bool) arr_48 [i_16] [(short)8] [i_14 + 1] [i_6]);
                }
                arr_55 [i_15] [i_14] [(signed char)7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_8 [i_6]))) + (((/* implicit */int) arr_45 [i_6]))));
                var_38 = ((/* implicit */unsigned short) arr_23 [i_6] [i_14 + 1]);
                var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)158)) ? (arr_27 [i_6] [i_6]) : (arr_27 [i_6] [i_6]))))));
            }
            for (unsigned char i_17 = 1; i_17 < 15; i_17 += 1) /* same iter space */
            {
                var_40 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)38417)) && (((/* implicit */_Bool) (unsigned char)151))));
                var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 16202216850334354121ULL)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (unsigned short)0)))))))));
                var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_14 + 1] [i_6] [i_14])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (-2791515250096527493LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))))));
            }
            for (unsigned char i_18 = 1; i_18 < 15; i_18 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 17; i_19 += 4) 
                {
                    for (unsigned char i_20 = 3; i_20 < 13; i_20 += 4) 
                    {
                        {
                            var_43 = ((((/* implicit */int) (unsigned short)34526)) != (((/* implicit */int) arr_14 [i_6] [i_14 + 1] [i_19] [i_19])));
                            var_44 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_20 + 4] [i_19] [i_18 + 2] [i_14 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9220))) : (arr_15 [i_6] [i_14 + 1] [i_18] [i_20 + 1])));
                            var_45 *= ((/* implicit */_Bool) ((arr_27 [i_6] [i_20 + 1]) % (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-13529)) + (2147483647))) << (((((/* implicit */int) (unsigned char)38)) - (38))))))));
                            var_46 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_14 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_20 - 1] [i_19] [i_20 - 3])) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (unsigned char)164))));
                        }
                    } 
                } 
                var_47 -= ((/* implicit */short) arr_11 [i_6] [i_6] [i_18]);
                /* LoopNest 2 */
                for (unsigned short i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    for (unsigned short i_22 = 0; i_22 < 17; i_22 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned short)0))));
                            var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_6] [i_14 + 1] [i_14] [i_14] [i_14 + 1])) ? (101478408) : (((/* implicit */int) arr_65 [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1]))));
                        }
                    } 
                } 
                var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (short)13528))));
            }
            for (unsigned char i_23 = 1; i_23 < 15; i_23 += 1) /* same iter space */
            {
                var_51 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)59))))) / (((((/* implicit */_Bool) arr_69 [i_23 + 2] [i_14 + 1] [i_14 + 1] [i_6])) ? (((/* implicit */unsigned long long int) 14251688)) : (18446744073709551615ULL)))));
                var_52 = ((/* implicit */short) ((((((/* implicit */int) (signed char)76)) % (((/* implicit */int) (unsigned short)60298)))) >> (((((((/* implicit */int) arr_57 [i_6] [i_14 + 1] [i_23 - 1])) % (((/* implicit */int) arr_46 [i_6] [i_6] [i_6])))) + (25664)))));
            }
            var_53 = (unsigned short)65535;
        }
    }
}
