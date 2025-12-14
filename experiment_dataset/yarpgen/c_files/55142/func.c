/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55142
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
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) var_1)) - (((/* implicit */int) (signed char)-67)))))) | (((var_3) - ((+(((/* implicit */int) var_12))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_1 [i_0]))));
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                var_17 = arr_0 [i_1 - 1] [i_1 - 1];
                var_18 = ((/* implicit */unsigned int) var_3);
            }
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                arr_9 [(unsigned char)3] [i_0] [(unsigned char)3] [i_0] = ((/* implicit */unsigned short) ((_Bool) var_2));
                var_19 = ((/* implicit */unsigned short) (signed char)83);
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned char)104))));
            }
        }
        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 18; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) var_12);
                        arr_21 [i_0] [i_4] [6U] [i_5] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) (((-(var_13))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4]))))))));
                        arr_22 [i_4] = 262142U;
                    }
                } 
            } 
            arr_23 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_0] [i_0])) ^ ((~(var_4)))));
        }
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            var_22 = (+(arr_3 [i_7]));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-73)) ? (var_13) : (((/* implicit */long long int) arr_12 [i_7] [i_0])))))));
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            for (signed char i_9 = 1; i_9 < 16; i_9 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) 4294705154U))));
                    var_25 = ((/* implicit */long long int) var_1);
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            {
                                var_26 += ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_20 [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 3] [i_9 + 1] [i_9])));
                                var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_0] [(_Bool)1] [i_9 + 3] [i_10]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_37 [9] = ((/* implicit */unsigned char) ((arr_3 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)84)))));
        var_28 = ((/* implicit */int) (!(arr_18 [i_0])));
    }
    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
    {
        var_29 &= ((/* implicit */short) min((((/* implicit */int) arr_19 [i_12] [i_12] [i_12] [i_12])), (((var_12) ? (((/* implicit */int) arr_17 [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_17 [i_12] [i_12] [i_12] [i_12]))))));
        arr_42 [i_12] [i_12] = ((/* implicit */signed char) max((((arr_18 [(unsigned char)9]) ? (((((/* implicit */_Bool) var_6)) ? (7722513174355338981LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_12] [i_12] [i_12] [11]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_31 [5U] [5U] [(_Bool)1] [i_12])), (var_9))))))), (((/* implicit */long long int) (signed char)127))));
    }
    for (long long int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
    {
        arr_45 [i_13] = min((arr_44 [i_13]), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-1))))));
        /* LoopSeq 2 */
        for (long long int i_14 = 1; i_14 < 17; i_14 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                var_30 = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_13]))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) / (2016282951412203218LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)1016)) : (((/* implicit */int) var_1))))) : ((((_Bool)0) ? (((/* implicit */long long int) 4294967281U)) : (var_6)))))));
                arr_50 [(_Bool)1] [i_14 + 1] [i_13] &= ((/* implicit */unsigned int) var_8);
                var_31 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-61))))) ? (((((/* implicit */_Bool) arr_20 [i_13] [i_13] [i_13] [i_13] [9U] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_3 [i_14]))) : (((/* implicit */long long int) max((((/* implicit */int) (signed char)-111)), (var_10)))))) + (((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_3)))) / (var_6)))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                var_32 = ((/* implicit */signed char) (-(((arr_47 [i_14 + 1] [i_14 - 1]) * (arr_47 [i_14 + 2] [i_14 + 3])))));
                var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_25 [i_16] [i_13] [i_13]), (arr_25 [16ULL] [16ULL] [i_16])))) ? ((-(13880663694964099732ULL))) : (((/* implicit */unsigned long long int) (+(7264476839210138LL))))));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2078476294)) | (max((((/* implicit */unsigned long long int) max((4294967280U), (((/* implicit */unsigned int) var_7))))), (((unsigned long long int) var_10))))));
            }
            for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                var_35 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)115)))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) ? (262116U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((arr_44 [i_13]) << (((((/* implicit */int) var_7)) - (556))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-10041)))));
            }
            for (long long int i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_19 = 0; i_19 < 20; i_19 += 4) 
                {
                    var_37 *= ((/* implicit */short) (unsigned char)152);
                    arr_62 [i_13] [i_14] [i_18] [i_19] [i_13] = ((/* implicit */unsigned int) (((-(var_13))) == (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) ((6146069686776956234LL) == (var_6)))))))));
                }
                var_38 = ((/* implicit */unsigned int) max((var_38), (((unsigned int) (+(((/* implicit */int) (unsigned char)163)))))));
            }
            arr_63 [i_13] = ((/* implicit */unsigned int) (short)10048);
        }
        for (short i_20 = 0; i_20 < 20; i_20 += 4) 
        {
            arr_66 [i_20] [i_13] [i_13] = ((/* implicit */long long int) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526)))));
            var_39 &= ((/* implicit */int) arr_33 [i_13] [11] [i_20]);
        }
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */signed char) var_12)), (var_11)))), (arr_10 [i_13])))) : ((-(35U)))));
    }
    for (int i_21 = 0; i_21 < 25; i_21 += 3) 
    {
        var_41 += ((/* implicit */unsigned short) (((+(arr_68 [i_21] [i_21]))) / (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)7)))))));
        arr_69 [i_21] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)141)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (min((2147483647), (((/* implicit */int) var_12)))) : (((/* implicit */int) var_12))))));
    }
    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(var_1)))))) : (((/* implicit */int) var_11))));
    var_43 = ((/* implicit */unsigned int) var_5);
}
