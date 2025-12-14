/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83272
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                var_10 = ((/* implicit */signed char) arr_0 [i_1]);
                arr_8 [(unsigned short)7] [i_0] = ((/* implicit */short) 7449181800081101669LL);
                arr_9 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)241)))) : (((unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2473689414979318377ULL) % (((/* implicit */unsigned long long int) 1779103473U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) : (var_5))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                arr_12 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (-1LL) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))))))), (-7449181800081101683LL)));
                arr_13 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)23600)), (2473689414979318377ULL)));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3825108011816633000ULL)) ? (((/* implicit */unsigned long long int) -8001655423233828266LL)) : (max((15973054658730233251ULL), (((/* implicit */unsigned long long int) (unsigned char)37))))));
            }
            for (int i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                var_12 = max((15973054658730233244ULL), (((/* implicit */unsigned long long int) (unsigned char)255)));
                arr_16 [(unsigned short)15] [i_4 + 1] [i_4 + 1] [i_0] = ((/* implicit */unsigned short) (~((-(max((((/* implicit */long long int) (signed char)(-127 - 1))), (-1LL)))))));
            }
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) (signed char)-4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)-32751)) : (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (unsigned char)0))))))) : (1LL))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_14 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) << (((/* implicit */int) var_0))))) ? (((arr_1 [0U]) | (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-10))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [(unsigned short)6] [(unsigned short)6] [i_5] [(unsigned short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned char)4] [i_5] [i_5] [i_0]))) : (var_5))))));
            arr_21 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (((unsigned int) ((((/* implicit */_Bool) arr_17 [3LL] [3LL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-4)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_15 *= ((/* implicit */unsigned char) var_7);
                var_16 = ((/* implicit */int) ((unsigned short) arr_14 [i_6] [i_5] [i_6]));
                arr_24 [i_0] [i_0] [i_6] [17LL] = ((/* implicit */unsigned int) 9223372036854775807LL);
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_6] [i_6])) ^ (((/* implicit */int) var_2))))) % (((long long int) (signed char)-90)))))));
            }
            for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) % (((/* implicit */int) arr_10 [i_0] [i_5] [i_8]))))) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_5] [3U])))));
                    var_19 = ((/* implicit */unsigned int) max((13362339231092946601ULL), (((/* implicit */unsigned long long int) arr_6 [i_0]))));
                }
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) ((unsigned int) (!((_Bool)0))));
                        var_21 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_14 [i_9] [i_7] [i_0]) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_0] [(_Bool)1] [i_7])), (var_9)))))))));
                        arr_35 [i_0] [10LL] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(arr_34 [i_0] [i_0] [i_0] [i_9] [i_9] [i_10])))) == (((((/* implicit */_Bool) 508994194688258039ULL)) ? (17937749879021293594ULL) : (((/* implicit */unsigned long long int) 130560U))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(arr_28 [i_0] [(short)1] [i_5] [i_9])))), (((arr_19 [i_5]) >> (((var_3) - (9147206493071682675ULL))))))))));
                    }
                    for (unsigned char i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5)))))) <= (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))) : (var_1)));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (-18LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_0] [i_5] [8U])))))))) ? ((~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) : (508994194688258039ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11 + 1] [11ULL] [i_11] [11ULL] [i_11] [i_0])))))))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 1; i_12 < 17; i_12 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) var_3);
                        var_26 = ((/* implicit */long long int) (~(arr_33 [i_12 + 1] [i_12 - 1] [i_12] [i_12] [i_12 - 1] [16LL] [i_12])));
                    }
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)79))))), (67108860U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2473689414979318377ULL)) ? (((/* implicit */int) arr_15 [i_9] [i_5] [i_5] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))))))))));
                    arr_43 [i_0] [i_5] [i_7] [i_9] = ((/* implicit */_Bool) (-(max(((-(3LL))), (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0]))))));
                }
                arr_44 [i_0] [i_5] [10ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) | (max((7449181800081101685LL), (((/* implicit */long long int) (unsigned short)37184))))));
                var_28 = ((/* implicit */unsigned long long int) var_8);
            }
            arr_45 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) (unsigned short)2));
        }
        for (unsigned int i_13 = 3; i_13 < 16; i_13 += 2) 
        {
            arr_50 [i_0] = min((((((((/* implicit */_Bool) arr_47 [i_0])) && (((/* implicit */_Bool) 8818909574298810515LL)))) ? (((/* implicit */unsigned long long int) var_5)) : (15973054658730233233ULL))), ((-((~(var_4))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                arr_55 [i_13] [i_0] = ((/* implicit */unsigned short) (unsigned char)31);
                var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -8290788127912764591LL)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (_Bool)0))))) + (((((/* implicit */_Bool) arr_26 [i_0] [i_13 + 1] [i_13 - 3] [i_13])) ? (((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (arr_34 [i_0] [i_0] [i_13 - 2] [i_14] [i_0] [13LL])))));
                /* LoopSeq 3 */
                for (unsigned short i_15 = 2; i_15 < 14; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        var_30 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)-59)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_16] [i_0])))))));
                        arr_63 [i_0] [i_0] [i_0] [i_14] [i_15] [i_16] = ((unsigned char) (signed char)89);
                        arr_64 [i_0] [i_13 + 1] [1LL] [i_15] [i_0] = ((/* implicit */_Bool) (~((-(max((((/* implicit */unsigned long long int) arr_56 [i_0] [i_0] [i_14] [i_15])), (126100789566373888ULL)))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_31 -= ((/* implicit */unsigned long long int) arr_66 [i_17] [i_17] [i_17] [i_13 - 2] [i_13]);
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (-(144115188075851776ULL))))));
                        var_33 = ((/* implicit */unsigned long long int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0])))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 3; i_18 < 15; i_18 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned int) arr_22 [i_0] [i_18]);
                        var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_60 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_0]))));
                        var_36 = ((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)15))))));
                        var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)15))));
                    }
                    arr_69 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_13 + 2]);
                }
                /* vectorizable */
                for (unsigned char i_19 = 2; i_19 < 17; i_19 += 1) 
                {
                    arr_72 [i_0] [i_0] [i_19] = ((((/* implicit */_Bool) arr_33 [i_19 + 1] [i_19] [i_19 - 2] [i_19 - 2] [11U] [i_13 + 1] [i_13 + 1])) ? (arr_33 [i_19] [i_19] [i_19] [i_19 - 2] [i_19] [i_14] [i_13 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_19] [i_19 - 2] [i_14] [i_14] [i_13 - 3]))));
                    var_38 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_65 [i_13 - 2] [i_14] [i_19] [i_19 + 1]))));
                }
                for (unsigned char i_20 = 1; i_20 < 17; i_20 += 3) 
                {
                    arr_75 [i_0] [i_13 + 2] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_23 [i_0]))))));
                    var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) max(((signed char)80), (((/* implicit */signed char) var_2)))))));
                }
            }
            var_40 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_53 [2U] [8U] [2U] [2U]) : (var_9)))) ? (((/* implicit */int) arr_15 [8U] [i_13] [i_13] [i_13])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_21 = 2; i_21 < 16; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 18; i_22 += 3) 
                {
                    for (signed char i_23 = 4; i_23 < 16; i_23 += 4) 
                    {
                        {
                            arr_83 [i_0] [i_13 - 3] [i_21 + 2] [i_21 + 2] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89))) / (17937749879021293576ULL)));
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) ? (4258009833U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~(arr_11 [i_23] [i_23] [i_21]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-33)))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_36 [i_21 - 1] [i_21 - 2] [(unsigned char)3] [(unsigned char)3] [i_21] [i_0]))));
                var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [(unsigned char)0] [i_21] [i_13] [i_21] [i_0])) ? (arr_11 [i_21] [i_13] [i_21 - 1]) : (var_7)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_13 - 2] [i_13 - 2])) ? (arr_62 [i_21] [i_21 - 1] [(unsigned short)14] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))))))));
            }
        }
        arr_84 [i_0] = ((/* implicit */unsigned char) arr_22 [i_0] [i_0]);
        arr_85 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)6))));
        var_44 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((arr_37 [i_0] [i_0] [i_0] [i_0]) >> (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [(unsigned short)3] [(unsigned short)3]))) : (max((((/* implicit */unsigned long long int) -9223372036854775792LL)), (var_3)))))));
    }
    var_45 = ((/* implicit */unsigned long long int) var_2);
    var_46 *= ((/* implicit */unsigned char) var_9);
}
