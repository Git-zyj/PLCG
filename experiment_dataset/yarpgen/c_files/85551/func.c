/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85551
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)245)) ? (var_1) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 2803793762U)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)8176))) : (((/* implicit */int) arr_2 [i_0])))))));
        var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)46994)) ? (((/* implicit */int) (unsigned short)8176)) : (((/* implicit */int) (short)8191))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */int) var_15))))) ? (((unsigned int) 1491173503U)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8201)) * (((/* implicit */int) ((((/* implicit */int) (short)-32754)) >= (((/* implicit */int) (unsigned short)33737)))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((signed char) (unsigned short)36792)))));
            var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_5 [i_1]))))))) ? ((~((-(((/* implicit */int) (short)32767)))))) : ((+((+(((/* implicit */int) arr_6 [3LL]))))))));
        }
        for (short i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                arr_16 [i_4] [i_3 + 2] |= ((/* implicit */unsigned int) -1184842573);
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_24 -= ((/* implicit */_Bool) ((arr_19 [i_4] [i_3] [i_3 + 1]) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_20 [i_1] [i_3] [i_3 + 1] [i_5])) * (((/* implicit */int) arr_20 [i_1] [i_3] [i_3 + 1] [i_1]))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1184842573)) ? (((/* implicit */unsigned int) -1184842554)) : (996778280U)));
                            arr_21 [i_1] [i_6] [i_1] [i_6] [(_Bool)0] [i_1] |= ((/* implicit */short) var_11);
                            var_26 = ((/* implicit */int) (unsigned short)8201);
                            arr_22 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) -877737643)) ? (var_2) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_13 [i_4] [i_4] [i_4] [i_4])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 2; i_7 < 22; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2102045320U))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_12 [i_1] [i_1])))) : (((/* implicit */int) ((unsigned short) 13U)))));
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_14;
                            var_28 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) (short)32758)), (var_8)))));
                            arr_28 [i_1] [i_3] [i_4] [i_1] [i_8] = (~(((((/* implicit */_Bool) (unsigned short)36788)) ? (2803793770U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8204))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 2; i_9 < 23; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_33 [i_1] [i_3 - 1] [i_4] [i_1] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((18446744073709551612ULL), (((/* implicit */unsigned long long int) (unsigned short)8201))))) ? (((((/* implicit */int) (short)-1)) - (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (short)29709))))));
                            var_29 = ((/* implicit */signed char) max((var_29), (((signed char) (+(((/* implicit */int) (unsigned short)33751)))))));
                        }
                    } 
                } 
            }
            var_30 -= ((((/* implicit */_Bool) 0LL)) ? (max((((/* implicit */unsigned int) (_Bool)1)), (2102045320U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            arr_36 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)29718)) ? (((/* implicit */long long int) 3733584158U)) : ((-9223372036854775807LL - 1LL))));
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        {
                            var_31 |= ((/* implicit */int) ((long long int) 657797776U));
                            arr_44 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(arr_18 [i_1] [i_11] [i_11] [i_13] [i_11] [i_1])));
                            var_32 = ((/* implicit */_Bool) ((unsigned int) 135295097985249518LL));
                            var_33 &= ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7306827550672002107LL))))));
                /* LoopSeq 2 */
                for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    var_35 |= ((/* implicit */unsigned int) ((-1527467811) + (((/* implicit */int) (short)-10))));
                    var_36 = ((/* implicit */unsigned short) arr_45 [i_1] [i_1] [i_12]);
                }
                for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                    {
                        var_37 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_43 [(_Bool)1] [i_11] [i_12] [i_12] [i_17] [i_17]))));
                        var_38 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 2064605898U))) ? (((int) 4ULL)) : (((/* implicit */int) var_15))));
                        arr_54 [i_1] [i_1] [i_1] [i_1] [22U] [i_12] [8U] |= var_15;
                        var_39 = ((/* implicit */unsigned long long int) -909119498);
                    }
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 1) /* same iter space */
                    {
                        var_40 += (!(((/* implicit */_Bool) (signed char)-118)));
                        var_41 = ((/* implicit */unsigned short) (+(arr_9 [i_1])));
                        var_42 = ((687630869U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_1] [i_11]))));
                        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))))));
                    }
                    arr_58 [i_1] [i_12] [i_11] [i_1] = ((/* implicit */unsigned short) arr_40 [i_1] [i_12] [i_12] [i_16]);
                    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)36783))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)249))))) : (11U)));
                    var_45 ^= ((unsigned int) arr_26 [i_1] [i_11] [i_12] [2] [i_12]);
                }
                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (signed char)52))));
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                for (unsigned short i_20 = 1; i_20 < 23; i_20 += 4) 
                {
                    {
                        arr_63 [i_1] [i_11] = ((/* implicit */signed char) arr_35 [i_1]);
                        arr_64 [i_1] [i_19] [(unsigned short)6] [i_1] = ((/* implicit */unsigned short) arr_43 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_1] [i_11] [i_1]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_21 = 1; i_21 < 22; i_21 += 4) 
            {
                arr_68 [i_1] [i_1] [i_11] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (-7306827550672002108LL) : (((/* implicit */long long int) -225575919))));
                var_47 *= ((/* implicit */_Bool) (+(2147483647)));
            }
            for (int i_22 = 0; i_22 < 24; i_22 += 4) 
            {
                var_48 += ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_71 [i_1] [i_1] [i_11] [(unsigned short)6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_40 [i_11] [i_11] [i_11] [i_1])) : (-2075286752)))) : ((-(7306827550672002107LL)))));
                var_49 = ((-2075286752) / (((/* implicit */int) (short)25360)));
            }
            arr_73 [i_1] [i_11] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65533)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) -2075286750)))));
        }
        var_50 &= ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (signed char)-16)));
    }
    for (unsigned short i_23 = 0; i_23 < 24; i_23 += 1) /* same iter space */
    {
        var_51 |= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25234))));
        var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) var_6))));
        var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4ULL)) ? (((((/* implicit */unsigned long long int) 868646516)) + (7090338866740872335ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_59 [i_23] [i_23] [i_23] [i_23])) / (((/* implicit */int) (unsigned short)42181)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) : ((-(-2713056265188703407LL)))));
    }
    /* vectorizable */
    for (unsigned short i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
    {
        var_54 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
        arr_79 [i_24] [i_24] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)127)) : (0))) - (((/* implicit */int) (_Bool)1))));
        var_55 = ((/* implicit */_Bool) arr_72 [i_24] [i_24] [i_24]);
        var_56 ^= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (short)-15470)) : (((/* implicit */int) var_15))));
        /* LoopSeq 1 */
        for (int i_25 = 1; i_25 < 22; i_25 += 4) 
        {
            var_57 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)-10866)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4096))));
            arr_82 [i_24] [18ULL] [i_24] |= ((/* implicit */long long int) ((arr_71 [i_25] [i_25 - 1] [i_25] [i_25 + 1]) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)233)))))));
            arr_83 [i_24] [i_24] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_51 [i_25 + 2] [i_25 + 2] [i_25 + 1] [i_25 + 2] [i_25] [i_25])) : (((/* implicit */int) var_7))));
        }
    }
    var_58 |= ((/* implicit */unsigned int) ((unsigned long long int) var_0));
}
