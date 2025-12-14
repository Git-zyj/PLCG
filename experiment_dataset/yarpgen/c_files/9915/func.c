/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9915
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
    var_19 = ((/* implicit */long long int) (short)-20059);
    var_20 = var_2;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-30915), (((/* implicit */short) arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)26207)))) ? (max((((/* implicit */unsigned int) (signed char)-100)), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_15)), ((short)-30928)))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_1 [i_0])) - (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = (_Bool)0;
            var_22 = ((/* implicit */unsigned short) 18446744073709551615ULL);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (short)30512)) && (((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned char) arr_5 [i_0] [i_0])))))))), ((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-100))))))));
            var_24 = ((/* implicit */long long int) (short)4682);
        }
        /* vectorizable */
        for (unsigned char i_3 = 4; i_3 < 22; i_3 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) (((_Bool)1) ? (((arr_9 [i_3 - 4] [i_3 - 4] [i_0]) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_3])))));
            arr_11 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_10 [i_0] [i_3])))));
            /* LoopSeq 3 */
            for (short i_4 = 3; i_4 < 22; i_4 += 3) 
            {
                arr_15 [i_3] [i_0] = ((/* implicit */short) arr_9 [i_0] [i_3 + 2] [i_0]);
                var_26 = ((/* implicit */unsigned char) (short)-32765);
            }
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            var_27 ^= ((/* implicit */signed char) (unsigned short)16384);
                            arr_25 [i_0] [i_6] [i_6] [i_0] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 4) 
                {
                    var_28 = ((/* implicit */short) 3013612169U);
                    arr_28 [i_8 + 2] [i_0] [i_3 + 2] [i_0] [i_0] = (-(((/* implicit */int) (_Bool)1)));
                    var_29 = ((/* implicit */unsigned int) arr_21 [i_0] [i_3 - 3] [i_3 - 3] [i_8 + 2] [i_5]);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_31 [i_0] [i_3 - 1] = arr_2 [i_3 - 4];
                    var_30 *= ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_3 + 2]))) == (6938204769505342975LL));
                    arr_32 [i_3 + 1] [i_0] [i_0] [i_0] [i_5] = ((arr_13 [i_0] [i_0] [i_0] [i_9]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49164))) : (var_10)))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    arr_36 [i_0] [i_0] [i_0] [i_10] [i_10] = ((/* implicit */unsigned char) arr_10 [i_0] [i_3 - 4]);
                    var_31 -= ((/* implicit */short) ((((/* implicit */int) arr_30 [i_5] [i_3 - 3] [i_3 - 3] [i_10] [i_5])) == ((-(1457916287)))));
                    var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_27 [i_10] [i_0] [i_3 - 3] [i_0])) : (arr_19 [i_0] [i_3 + 2] [i_3] [i_5] [i_10])))) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_5] [i_0] [i_10])) : (((((/* implicit */_Bool) arr_16 [i_5] [i_3 - 1] [i_3 - 1] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_3] [i_5])) : (((/* implicit */int) (short)-32764))))));
                }
                var_33 = ((/* implicit */short) ((unsigned long long int) 2032796412));
                arr_37 [i_0] = ((/* implicit */long long int) arr_24 [i_0] [i_5] [i_0] [i_3 + 2] [i_3 + 2] [i_3 - 4]);
                arr_38 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) ((arr_4 [i_0] [i_3 - 1]) / (((/* implicit */int) var_9))));
            }
            for (short i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                var_34 -= ((/* implicit */unsigned int) var_10);
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3 + 1] [i_3] [i_3 + 1] [i_11])) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_11])) : (((/* implicit */int) arr_18 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_11]))));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */short) (~(((((/* implicit */_Bool) 3010357442006125296LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_18)))));
        arr_43 [i_12] [i_12] = ((/* implicit */_Bool) 4212677888U);
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_14 = 0; i_14 < 24; i_14 += 3) 
        {
            arr_49 [i_13] [i_14] = ((/* implicit */unsigned short) (_Bool)1);
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                for (short i_16 = 3; i_16 < 22; i_16 += 4) 
                {
                    for (unsigned short i_17 = 2; i_17 < 22; i_17 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) (~(arr_19 [i_14] [i_14] [i_16 - 1] [i_17 + 2] [i_16 - 2])));
                            arr_60 [i_13] [i_13] [i_17 + 1] [i_15] [i_13] [i_14] [i_13] = (!(((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_17] [i_14] [i_14] [i_14] [i_14]))))));
                            var_38 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_34 [i_13] [i_13] [i_15] [i_16]));
                            var_39 += ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */long long int) ((0) >> (((/* implicit */int) var_3))));
            var_41 |= ((/* implicit */unsigned short) (-(arr_34 [i_13] [i_13] [i_13] [i_14])));
        }
        for (unsigned int i_18 = 3; i_18 < 23; i_18 += 4) /* same iter space */
        {
            var_42 ^= ((/* implicit */unsigned int) (-(1457916287)));
            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) max((((/* implicit */int) arr_53 [i_13] [(_Bool)1] [i_18 - 3] [i_13] [i_13] [i_13])), ((-(((/* implicit */int) arr_17 [i_18] [i_18 - 2] [14U])))))))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 24; i_19 += 1) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_44 ^= ((/* implicit */unsigned long long int) var_15);
                        arr_68 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) min((((long long int) max((((/* implicit */int) arr_51 [i_13])), (arr_54 [i_13] [i_18] [i_19] [i_19] [i_20] [i_20])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_53 [i_18] [i_13] [i_18] [i_18 - 3] [i_13] [i_18])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 2) 
                        {
                            var_45 |= (!(((/* implicit */_Bool) var_7)));
                            var_46 += ((/* implicit */short) ((((/* implicit */_Bool) 4028728917U)) ? (arr_69 [i_18 + 1] [i_18 - 3] [i_21] [i_18 - 3] [i_21]) : (((/* implicit */unsigned long long int) 1467466812))));
                            arr_72 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = var_3;
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_47 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_13] [i_18 - 1] [i_19] [i_19])) ? (276976199U) : (((/* implicit */unsigned int) -2032796417))))) ? (max((((/* implicit */unsigned long long int) ((_Bool) var_2))), (0ULL))) : (((/* implicit */unsigned long long int) var_2)));
                            arr_75 [i_13] [i_18 - 3] [i_19] [i_13] [i_22] [i_22] [i_13] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_42 [i_22])) ? (-1413770961320924303LL) : ((-9223372036854775807LL - 1LL)))), (min((((/* implicit */long long int) (unsigned short)65535)), (max((((/* implicit */long long int) arr_16 [i_13] [i_18 - 1] [i_13] [i_20])), (arr_20 [i_22] [i_18 - 2] [i_22] [i_20] [i_18 - 2])))))));
                            arr_76 [i_13] [i_13] [i_13] [i_20] [i_22] [i_19] [i_13] = ((/* implicit */unsigned short) arr_14 [i_13] [i_13] [i_22]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_23 = 2; i_23 < 23; i_23 += 1) /* same iter space */
                        {
                            arr_81 [i_13] [i_19] [i_20] [i_20] = ((/* implicit */short) ((unsigned char) var_2));
                            arr_82 [(unsigned char)16] [i_18] [i_19] [i_19] [i_20] |= ((/* implicit */unsigned char) (((((_Bool)1) ? (arr_8 [i_13] [i_18 - 3] [i_19]) : (((/* implicit */unsigned long long int) min((arr_45 [i_20]), (((/* implicit */unsigned int) var_15))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31084)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_24 = 2; i_24 < 23; i_24 += 1) /* same iter space */
                        {
                            var_48 ^= ((unsigned short) arr_17 [i_24 - 1] [i_13] [(signed char)4]);
                            arr_86 [i_13] [i_19] [i_18 - 1] [i_13] = ((/* implicit */unsigned long long int) (-(266238391U)));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_25 = 3; i_25 < 23; i_25 += 4) /* same iter space */
        {
            var_49 |= ((/* implicit */short) (-9223372036854775807LL - 1LL));
            var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) var_3))));
            var_51 = ((/* implicit */unsigned char) max((var_51), (var_5)));
        }
        arr_90 [i_13] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_5 [i_13] [i_13]))))));
        var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) (unsigned short)0))));
        arr_91 [i_13] = ((/* implicit */unsigned int) 5ULL);
        arr_92 [i_13] [(short)6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22022)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (288230376151711744LL)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_18)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(unsigned char)4] [i_13] [i_13] [i_13]))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    }
}
