/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72403
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            var_10 = ((/* implicit */unsigned char) ((int) (~((-(((/* implicit */int) var_5)))))));
            arr_5 [i_0] [i_0] [i_1 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)7642))))) : (max((((/* implicit */unsigned long long int) 2287119480U)), (var_2)))))) ? ((~(((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (_Bool)1))))))) : (((((((/* implicit */int) arr_2 [i_1 + 2])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1 - 2])) + (139)))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (short i_4 = 2; i_4 < 8; i_4 += 3) 
                {
                    {
                        var_11 = (-(var_2));
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_4 + 1])) ? (((/* implicit */int) arr_7 [i_4 - 2])) : (((/* implicit */int) (signed char)-72))));
                    }
                } 
            } 
            arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_4 [i_0]))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [7LL] [i_2])) ? (((/* implicit */int) (unsigned short)17461)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((~(var_3)))));
                            arr_26 [i_0] [i_2] [i_6] [i_6] [4U] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_0)))));
                            arr_27 [i_6] [i_2] [5LL] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_7 - 1] [i_5])) ? (((/* implicit */int) arr_17 [i_0] [i_7 - 1] [i_5])) : (((/* implicit */int) arr_17 [i_2] [i_7 + 1] [i_5]))));
                            var_14 = ((/* implicit */signed char) (short)-18420);
                        }
                        var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) 2169995084U)) ? (-872096906) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_5] [i_6] [(unsigned short)3])))) + (((((/* implicit */_Bool) -8054390917090886964LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))));
                        var_16 = var_1;
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0]))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((short) arr_4 [i_0])))));
        }
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            var_19 = ((/* implicit */signed char) var_4);
            var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) arr_20 [i_0] [(unsigned char)0] [i_0] [i_8] [i_8] [1ULL])), (2124972211U)))));
            var_21 = ((/* implicit */signed char) (((((~(((/* implicit */int) max((arr_11 [i_8]), (var_8)))))) + (2147483647))) >> (((min((max((var_3), (((/* implicit */unsigned int) (signed char)-22)))), (min((3207896035U), (((/* implicit */unsigned int) (short)4913)))))) - (4911U)))));
            var_22 = ((/* implicit */long long int) ((var_3) < (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (short)-4914)) : (((/* implicit */int) (short)-22937)))) ^ (((((/* implicit */_Bool) 2354905223U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)32736)))))))));
        }
        arr_30 [i_0] = ((/* implicit */long long int) ((var_9) << (((/* implicit */int) min((arr_4 [i_0]), (((/* implicit */unsigned char) arr_11 [i_0])))))));
    }
    for (int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) (-(min((((/* implicit */int) ((unsigned char) (signed char)-53))), (min((((/* implicit */int) (signed char)-72)), (var_7)))))));
        var_24 += ((/* implicit */short) min((((unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (((/* implicit */int) var_5)))) / ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))))));
        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) : ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9] [i_9]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (short)30608))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
        {
            arr_38 [(unsigned char)6] [i_11] = ((/* implicit */signed char) var_1);
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_10] [i_11] [(signed char)0] [i_10] [i_11] [i_10])) ? (((/* implicit */int) arr_21 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                arr_43 [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_12])) ? (((/* implicit */int) var_4)) : (var_7)));
                var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [(signed char)9] [i_13]))) ? (((long long int) var_0)) : (((/* implicit */long long int) 1322363532))));
                var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_36 [(_Bool)1] [i_12] [i_13 - 1]))));
                var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_20 [(_Bool)1] [i_13] [3ULL] [i_13 - 1] [i_13 - 1] [i_13]))));
            }
            for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)58)) || (((/* implicit */_Bool) -1472245716)))))) != ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_31 [i_12])))));
                    var_31 = ((/* implicit */_Bool) ((short) var_5));
                    var_32 = ((((/* implicit */_Bool) (-(var_0)))) ? (arr_0 [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_12])) >= (((/* implicit */int) var_4)))))));
                    arr_51 [i_10] [i_12] [i_15] |= ((/* implicit */unsigned char) ((arr_6 [i_12] [i_15]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10] [i_15])))));
                }
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_10] [i_12] [i_14])) - (((/* implicit */int) ((_Bool) (short)4913)))));
                var_34 = ((/* implicit */short) (unsigned char)128);
            }
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                arr_54 [i_10] [i_16] [i_10] = ((var_7) >= (((((/* implicit */int) (unsigned char)5)) % (((/* implicit */int) var_5)))));
                /* LoopSeq 4 */
                for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    var_35 = ((((/* implicit */_Bool) (+(1322363532)))) ? (36028797014769664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))));
                    var_36 = ((/* implicit */short) 2124972212U);
                    var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (2103871936U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_12])) || (((/* implicit */_Bool) 930685506U))))))));
                }
                for (long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_19 = 1; i_19 < 6; i_19 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)37))));
                        var_39 = ((/* implicit */_Bool) arr_58 [i_10] [i_16] [i_10] [i_10]);
                    }
                    for (signed char i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-7241754264095470848LL) : (((/* implicit */long long int) arr_35 [i_10])))))));
                        var_41 = ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : ((~(var_2))));
                    }
                    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_10] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)3)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [(_Bool)1] [(unsigned short)1] [i_12] [i_12] [9LL]))) : (287667426198290432LL))))))));
                }
                for (unsigned int i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    arr_70 [i_21] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) (unsigned char)204)) - (190)))))) ? (((/* implicit */int) arr_58 [i_10] [i_16] [i_16] [8LL])) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)30041))))));
                    var_43 = ((arr_12 [i_10] [i_12] [i_16] [i_16] [i_21] [i_10]) < (((/* implicit */unsigned long long int) arr_39 [i_21])));
                    var_44 = ((/* implicit */short) var_9);
                    var_45 = ((/* implicit */unsigned short) ((arr_39 [i_10]) % (arr_39 [i_10])));
                }
                for (unsigned long long int i_22 = 3; i_22 < 6; i_22 += 3) 
                {
                    var_46 += ((/* implicit */unsigned char) (_Bool)1);
                    var_47 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (66646946)));
                    var_48 = ((/* implicit */long long int) (short)4919);
                }
                arr_74 [i_16] [i_12] = ((/* implicit */int) 1997044370U);
            }
            var_49 = ((/* implicit */long long int) ((signed char) ((763725318715187110ULL) >> (((17634381665045190833ULL) - (17634381665045190789ULL))))));
            var_50 ^= ((/* implicit */unsigned int) (!((!(var_4)))));
            var_51 &= ((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_12])) / (((/* implicit */int) var_8))));
        }
        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))));
        var_53 *= ((/* implicit */_Bool) (unsigned short)35494);
    }
    for (int i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
    {
        var_54 ^= ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_23] [i_23] [i_23])) == (((/* implicit */int) arr_3 [i_23] [i_23] [i_23]))))), ((signed char)29)));
        var_55 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_32 [4])) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) min((4095), (((/* implicit */int) (_Bool)1))))) : (var_9))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
        /* LoopSeq 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            var_56 = min((72057576858058752ULL), (((/* implicit */unsigned long long int) ((arr_81 [i_23]) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [(short)3] [i_24] [(short)3])) * (((/* implicit */int) var_5)))))))));
            var_57 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [3LL] [i_23] [9] [9])) ? (((/* implicit */unsigned long long int) 1429217526)) : (11789081583417708387ULL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)128)), (var_3))))))), (((((/* implicit */_Bool) arr_11 [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_23] [i_23] [i_24]))) : (min((36028797014769660ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        }
        for (unsigned short i_25 = 0; i_25 < 10; i_25 += 3) 
        {
            var_58 = ((/* implicit */signed char) max((var_58), (((/* implicit */signed char) arr_48 [i_23]))));
            var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_23] [1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_23] [i_23]))) : (((((/* implicit */_Bool) (unsigned short)20424)) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            arr_84 [i_23] [i_25] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), ((-(((/* implicit */int) (unsigned short)16492))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 4119))))))) : (((/* implicit */int) (signed char)70))));
        }
        var_60 = ((/* implicit */int) max((var_60), (((/* implicit */int) max((((/* implicit */long long int) ((var_7) == (((((/* implicit */int) (short)27597)) >> (((((/* implicit */int) (signed char)-47)) + (62)))))))), ((~((-9223372036854775807LL - 1LL)))))))));
    }
    var_61 = ((/* implicit */_Bool) (short)-4373);
}
