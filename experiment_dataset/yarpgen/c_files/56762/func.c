/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56762
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) var_4);
        var_14 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_1)))));
        var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (signed char)-3))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_16 = ((/* implicit */_Bool) var_7);
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        {
                            arr_12 [15LL] [15LL] [i_2] [(unsigned short)6] [12LL] [i_3] [(signed char)9] |= ((/* implicit */_Bool) arr_5 [i_3] [i_0] [i_0]);
                            var_17 = ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned short) (signed char)-1);
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) var_5)))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_12))));
                var_21 = ((/* implicit */short) var_4);
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_5])) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                arr_19 [i_6] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_0 - 2] [i_0 + 2] [i_0] [i_0] [i_0 - 2]))));
            }
        }
        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3]))));
    }
    /* vectorizable */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            var_24 *= ((/* implicit */unsigned int) (signed char)-8);
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                var_25 = ((/* implicit */_Bool) min((var_25), ((!(((/* implicit */_Bool) var_10))))));
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_1))) == (((/* implicit */int) arr_4 [i_7] [i_8] [5U])))))));
            }
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                var_27 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_25 [i_7] [i_7]))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))) - (11382LL)))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 16; i_12 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_11 [i_12 + 1] [(_Bool)1] [i_10] [i_8] [i_7]) : (arr_11 [i_7] [i_8] [i_10] [(signed char)8] [i_12])));
                            arr_37 [i_7] [i_10] [i_7] = ((/* implicit */unsigned char) ((_Bool) arr_34 [i_12] [i_12 - 2] [7U] [i_12] [7U] [i_12] [7U]));
                            var_29 = ((/* implicit */_Bool) min((var_29), ((!(((/* implicit */_Bool) 317897602U))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        {
                            arr_42 [i_7] [i_8] [i_14] [i_13] [i_14] |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                            var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_7] [i_8]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])) << (((((/* implicit */int) arr_34 [i_15] [i_15] [i_8] [i_7 - 1] [i_7 - 1] [i_7 - 1] [(short)1])) - (26269)))));
                var_32 = ((/* implicit */unsigned long long int) arr_29 [i_7] [i_8] [i_7] [i_15]);
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    for (signed char i_17 = 2; i_17 < 15; i_17 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_10 [i_17] [i_16] [i_15] [i_8] [i_7]))))))));
                            var_34 ^= ((/* implicit */unsigned char) ((short) arr_41 [i_8] [i_17 + 2] [i_17 + 2] [i_16] [i_8]));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (long long int i_18 = 2; i_18 < 14; i_18 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_19 = 1; i_19 < 14; i_19 += 4) 
            {
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-14)) <= (((/* implicit */int) (short)22189))));
                arr_56 [(unsigned short)16] = ((/* implicit */long long int) (signed char)73);
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_36 = ((/* implicit */unsigned short) var_9);
                    arr_59 [(unsigned short)7] [9LL] [9LL] = ((var_3) || (((/* implicit */_Bool) arr_0 [i_19] [i_20])));
                }
            }
            for (unsigned char i_21 = 3; i_21 < 15; i_21 += 2) 
            {
                arr_62 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53142)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27225))) : (arr_24 [i_7 - 1] [i_7 - 1] [i_7 - 1])));
                var_37 |= ((/* implicit */long long int) ((unsigned char) 3977069694U));
                /* LoopSeq 2 */
                for (unsigned char i_22 = 0; i_22 < 17; i_22 += 1) 
                {
                    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_21 + 2] [i_18 + 2] [i_7 - 1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    var_39 = ((/* implicit */_Bool) arr_8 [i_7 - 1] [i_18 + 2]);
                }
                for (unsigned char i_23 = 1; i_23 < 14; i_23 += 3) 
                {
                    var_40 = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_7))))));
                    /* LoopSeq 4 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned long long int) var_0);
                        arr_74 [i_24] [i_7 - 1] [i_21] [i_18 + 3] [i_7 - 1] [i_7] |= ((/* implicit */_Bool) ((long long int) arr_50 [i_18] [i_18] [i_21] [i_23] [i_23] [i_23 + 1] [(unsigned short)15]));
                        arr_75 [i_7 - 1] [i_7] [(short)8] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_20 [(_Bool)1] [i_21 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        var_42 += ((/* implicit */unsigned char) -1681275145768883035LL);
                        var_43 |= ((/* implicit */_Bool) var_6);
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        var_44 &= (!(((/* implicit */_Bool) arr_64 [i_7 - 1] [i_18 - 2] [i_21 - 1] [i_23 + 1] [i_25])));
                        var_45 = var_6;
                        arr_78 [i_25] [i_21] [i_23] [i_21] [i_21 - 1] [i_7 - 1] [i_7 - 1] = ((/* implicit */short) arr_41 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_23] [(signed char)16]);
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                    {
                        arr_81 [i_26] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_33 [i_21] [i_21] [i_21] [i_21] [(short)2] [i_21 + 1])))) : (var_4)));
                        arr_82 [i_7] [i_18 + 2] [i_26] [i_23] [i_26] [i_26] = ((/* implicit */short) (+(((/* implicit */int) arr_29 [i_7] [i_18 + 1] [i_21] [i_26]))));
                    }
                    for (unsigned char i_27 = 0; i_27 < 17; i_27 += 1) 
                    {
                        arr_85 [10LL] [i_23] [i_23] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (signed char)33)))));
                        var_46 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)195)) != (((/* implicit */int) arr_45 [(signed char)10] [10ULL] [(short)6])))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)10)) | (((/* implicit */int) (signed char)33))))) : (((long long int) arr_35 [i_7] [(short)10] [i_18] [i_21] [2LL] [i_27] [i_27]))));
                        arr_86 [i_21] [i_21] [i_21] [(signed char)5] [i_27] [i_18] [i_21] = ((/* implicit */_Bool) arr_36 [(_Bool)1]);
                    }
                }
                var_47 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)1)) == (((/* implicit */int) (signed char)26))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_28 = 3; i_28 < 13; i_28 += 1) 
            {
                var_48 = ((/* implicit */unsigned char) ((((1154179300016319854LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) var_9)))));
                var_49 = ((/* implicit */unsigned short) ((var_4) >= (var_4)));
            }
            for (unsigned char i_29 = 2; i_29 < 15; i_29 += 3) 
            {
                arr_94 [i_7] [i_7 - 1] [i_7] &= 576460752303423487LL;
                /* LoopSeq 1 */
                for (unsigned char i_30 = 0; i_30 < 17; i_30 += 3) 
                {
                    var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_89 [i_7 - 1] [i_29 - 1] [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) : (((((/* implicit */_Bool) arr_23 [(unsigned short)3])) ? (arr_11 [i_7] [i_18] [i_29] [(_Bool)1] [i_30]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20180))))))))));
                    var_51 = ((/* implicit */short) arr_25 [i_18] [i_29]);
                    var_52 ^= ((/* implicit */long long int) arr_80 [i_29] [i_30] [6LL] [i_30] [i_29]);
                }
                arr_97 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_18 + 3] [i_18 - 2] [i_29 - 1] [i_29 - 1])) * (((/* implicit */int) arr_6 [i_7] [i_18] [i_29]))));
            }
            var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) var_8))));
        }
    }
    /* vectorizable */
    for (unsigned short i_31 = 0; i_31 < 18; i_31 += 2) 
    {
        arr_100 [i_31] [i_31] = ((/* implicit */_Bool) ((signed char) (signed char)23));
        var_54 = ((/* implicit */unsigned long long int) (signed char)22);
    }
    var_55 = ((/* implicit */unsigned long long int) min((var_55), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
    var_56 = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned short) max(((!(var_8))), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6)))))))));
    var_57 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) var_7)))))))));
    var_58 = ((/* implicit */unsigned int) (((!(((((/* implicit */int) var_6)) > (((/* implicit */int) var_6)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) var_12)))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) & (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == ((-9223372036854775807LL - 1LL))))))));
}
