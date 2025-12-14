/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8463
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_12))))))), (var_7))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_7 [0ULL] [i_1 - 1] |= arr_1 [i_1 - 1];
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(2826162453U))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) -4709878246702798083LL))));
                        var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_0])), (min((((/* implicit */int) ((unsigned char) var_4))), ((-2147483647 - 1))))));
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((signed char) (signed char)7))) ? (max((-60926366939337117LL), (((/* implicit */long long int) (short)-20263)))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)29389))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    arr_21 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-20279))));
                    var_21 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)20245))) < (var_3))));
                    var_22 = arr_9 [i_0] [i_4] [i_5] [4U];
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 4; i_6 < 10; i_6 += 1) 
        {
            arr_26 [i_0] [i_6] = var_11;
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (unsigned int i_9 = 3; i_9 < 12; i_9 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_9 - 2] [i_9 - 1] [i_9] [i_9])) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) ((_Bool) var_6))))))));
                            var_24 = 1996569628;
                            var_25 ^= (-(arr_6 [i_0 - 1]));
                            var_26 = ((/* implicit */_Bool) ((signed char) (signed char)-1));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_10 = 2; i_10 < 15; i_10 += 3) 
    {
        arr_39 [i_10 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (signed char)63)))))));
        /* LoopSeq 1 */
        for (signed char i_11 = 1; i_11 < 14; i_11 += 2) 
        {
            /* LoopSeq 4 */
            for (signed char i_12 = 2; i_12 < 13; i_12 += 1) 
            {
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (+(3684302697U)))) ? (3502372817U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65531))))))))));
                var_28 = ((((/* implicit */unsigned long long int) ((arr_41 [i_10 - 1] [i_11 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25)))))) % (((((/* implicit */unsigned long long int) arr_42 [i_11] [i_11 + 1] [i_11])) % (var_10))));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-126)), (2785516151U)));
                    var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((signed char) ((3502372793U) & (((/* implicit */unsigned int) -1105408162)))))), (arr_41 [i_12] [i_13])));
                }
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    var_31 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)42674)))));
                    var_32 = ((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_10 + 1] [i_11 - 1]))));
                }
                var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_11 + 1] [i_10 - 1])) * (((/* implicit */int) arr_37 [i_11 - 1] [i_10 - 1]))));
            }
            for (int i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 1; i_17 < 14; i_17 += 1) 
                {
                    for (short i_18 = 1; i_18 < 14; i_18 += 1) 
                    {
                        {
                            var_34 |= ((/* implicit */signed char) ((((unsigned long long int) var_11)) / (((arr_49 [i_10 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77)))))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (~(((unsigned int) arr_37 [i_11 + 1] [i_18 + 2])))))));
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_54 [i_10] [i_16] [i_10] [i_10])))) + (((/* implicit */int) max((var_6), ((unsigned short)7))))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (16498687694820771660ULL))))))))));
                            var_37 = ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_54 [i_10 - 1] [i_11] [i_17] [i_18])))) < (var_3)));
                        }
                    } 
                } 
                var_38 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)26794)) % (((/* implicit */int) (signed char)32))))), (var_11)));
                /* LoopSeq 2 */
                for (signed char i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    arr_60 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_11] [i_10 - 1] [i_19] = ((/* implicit */short) var_14);
                    arr_61 [i_10] [i_11 + 1] [i_11] [i_19] = ((/* implicit */unsigned long long int) arr_48 [i_19] [i_19] [i_16] [i_11] [i_10 + 1] [i_10]);
                    arr_62 [i_10] [i_10] [i_16] [i_16] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_37 [i_10 + 1] [i_11 - 1]))))) ? (arr_49 [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_1), (((/* implicit */int) (signed char)100)))) > (min((-684768139), (((/* implicit */int) (signed char)104))))))))));
                    var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) 3502372806U))) & (var_10)));
                    arr_63 [i_11] = ((/* implicit */signed char) ((var_15) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_58 [i_11 - 1] [i_11] [i_11 - 1] [i_11 + 2]), (((signed char) var_0))))))));
                }
                for (unsigned int i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    var_40 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((min((((/* implicit */unsigned int) 2147483647)), (var_3))) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_11] [i_20])) ^ (var_12))))))), (((((/* implicit */_Bool) arr_57 [i_16] [i_11] [i_10 + 1] [i_11 + 2] [i_11] [i_16] [i_16])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13104)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (short)-20250))))) : (min((((/* implicit */long long int) arr_38 [i_10])), (var_8)))))));
                    /* LoopSeq 3 */
                    for (int i_21 = 0; i_21 < 16; i_21 += 2) 
                    {
                        arr_69 [i_10] [i_11] [i_20] = ((/* implicit */unsigned long long int) ((((int) min((arr_51 [i_16] [i_16]), (((/* implicit */int) arr_64 [i_21] [i_16] [i_16] [i_11] [i_10 + 1]))))) <= (((/* implicit */int) ((signed char) arr_37 [i_11 + 2] [i_10 - 2])))));
                        arr_70 [i_10] [i_11] [i_16] [i_11] [i_10] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-26))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_37 [i_11] [i_11])))) : (var_11))));
                        arr_71 [i_11] = ((/* implicit */signed char) min(((short)-20262), (((/* implicit */short) (unsigned char)123))));
                        var_41 = ((/* implicit */signed char) (+(((arr_46 [i_11] [i_10 + 1] [i_11 - 1] [i_11 + 2]) ? (((/* implicit */int) arr_46 [i_11] [i_10 - 2] [i_11 + 1] [i_11 + 2])) : (((/* implicit */int) var_13))))));
                        var_42 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_65 [i_11 + 2] [i_10 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-2), ((short)-20240))))) : (((3502372815U) + (((/* implicit */unsigned int) -2)))))), (((/* implicit */unsigned int) ((-1577153113) <= (((/* implicit */int) (short)-31009)))))));
                    }
                    for (unsigned short i_22 = 0; i_22 < 16; i_22 += 3) 
                    {
                        arr_75 [i_22] [i_20] [i_11] [i_11] [i_11 + 2] [i_10] = ((/* implicit */signed char) min(((-((~(((/* implicit */int) arr_64 [i_10] [i_11] [i_11] [i_11] [i_22])))))), (((/* implicit */int) arr_59 [i_22] [i_11] [i_22] [i_20] [i_22] [i_11]))));
                        var_43 = ((/* implicit */signed char) 3502372803U);
                    }
                    for (signed char i_23 = 0; i_23 < 16; i_23 += 3) 
                    {
                        arr_80 [i_10] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) arr_54 [i_11 + 1] [i_11] [i_16] [i_23])), (-9223372036854775796LL))), (((/* implicit */long long int) max((arr_54 [i_11 + 2] [i_11] [i_11 + 2] [i_11 + 2]), (arr_54 [i_11 + 1] [i_11] [i_11 + 1] [i_20]))))));
                        var_44 = ((/* implicit */signed char) ((unsigned char) (signed char)-20));
                    }
                    var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((long long int) var_10))))) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned char)131)) <= (((/* implicit */int) (signed char)27))))) / (min((((/* implicit */int) var_6)), (-1446120710))))) : ((~(max((((/* implicit */int) (signed char)-43)), (var_12))))))))));
                }
            }
            for (int i_24 = 0; i_24 < 16; i_24 += 4) /* same iter space */
            {
                arr_83 [i_10 - 2] [i_10 - 2] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26786))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_37 [i_10] [i_11])) : (((/* implicit */int) (signed char)-127))))) ? (max((4294967295U), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) (unsigned short)50797)))))))));
                var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)511)) << (((((/* implicit */int) (signed char)35)) - (19))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_25 = 2; i_25 < 13; i_25 += 3) /* same iter space */
                {
                    var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)15)))))));
                    var_48 = ((/* implicit */long long int) ((((((/* implicit */int) arr_76 [i_11] [i_24] [i_11])) + (((/* implicit */int) (short)-9)))) & (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (signed char)9))))));
                    arr_86 [i_10] [i_10] [i_11] = ((/* implicit */short) var_5);
                }
                for (short i_26 = 2; i_26 < 13; i_26 += 3) /* same iter space */
                {
                    var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) (+(((/* implicit */int) var_9)))))));
                    var_50 = ((/* implicit */unsigned long long int) min((var_50), (max(((-(arr_84 [i_10 - 1] [i_11 + 1] [i_26 + 2] [i_26 + 1]))), (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) 8LL))))))));
                }
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    arr_92 [i_27] [i_24] [i_11] [i_11] [i_10] [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125)))))))), (-79222459758193677LL)));
                    var_51 = ((/* implicit */_Bool) arr_56 [i_11] [i_10 - 1] [i_11 + 2]);
                    var_52 ^= ((/* implicit */signed char) min((((/* implicit */int) min(((signed char)29), ((signed char)-25)))), (min((max((((/* implicit */int) var_14)), (var_2))), (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */int) (signed char)115))))))));
                }
                /* vectorizable */
                for (int i_28 = 0; i_28 < 16; i_28 += 1) 
                {
                    var_53 = ((/* implicit */unsigned int) max((var_53), (((unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                    var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)117)) ? (-2147483640) : (((((/* implicit */int) var_13)) & (((/* implicit */int) var_6))))));
                    /* LoopSeq 3 */
                    for (int i_29 = 0; i_29 < 16; i_29 += 4) 
                    {
                        arr_97 [i_11] [i_28] [i_24] [i_11] [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (signed char)72)))) ? (((/* implicit */int) var_9)) : (625425582)));
                        var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_47 [i_11] [i_24] [i_28] [i_29])) : (((/* implicit */int) arr_47 [i_10] [i_10 - 1] [i_10] [i_10 - 2]))));
                        arr_98 [i_29] [i_11] |= ((/* implicit */unsigned int) ((arr_44 [i_24] [i_10 - 1] [i_24]) % (var_11)));
                        var_56 = ((((/* implicit */unsigned long long int) var_3)) & (var_0));
                    }
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_57 = ((arr_46 [i_11] [i_10 + 1] [i_11 + 1] [i_10 - 2]) ? (var_1) : (((/* implicit */int) arr_38 [i_10])));
                        var_58 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_11] [i_30])) ? (((/* implicit */long long int) var_12)) : (var_7)))) ? (((/* implicit */int) arr_45 [i_10 + 1] [i_11 + 2] [i_11] [i_24])) : (-2147483642)));
                        var_59 = ((((/* implicit */_Bool) (signed char)127)) ? (260046848) : (((/* implicit */int) ((-2147483630) >= (((/* implicit */int) (signed char)-29))))));
                        var_60 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) 931311862)) == (2068491679U))) ? (((/* implicit */int) ((signed char) var_13))) : (((/* implicit */int) arr_36 [i_11] [i_11]))));
                    }
                    for (signed char i_31 = 0; i_31 < 16; i_31 += 2) 
                    {
                        arr_105 [i_10] [i_11 - 1] [i_11] [i_11] [i_11] [i_31] = ((/* implicit */unsigned short) 2385041130605602093ULL);
                        arr_106 [i_24] [i_11] [i_28] [i_28] [i_24] = ((/* implicit */int) ((unsigned long long int) 18446744073709551615ULL));
                    }
                    var_61 = ((/* implicit */unsigned short) var_8);
                }
                arr_107 [i_10] [i_11] [i_11] [i_24] = ((/* implicit */_Bool) ((signed char) ((signed char) arr_103 [i_10] [i_10] [i_11] [i_10 - 1] [i_11] [i_11 - 1] [i_24])));
                arr_108 [i_11] = ((/* implicit */unsigned int) (_Bool)1);
            }
            var_62 = ((/* implicit */int) (+((+(min((((/* implicit */unsigned int) (_Bool)1)), (4170845467U)))))));
            var_63 = ((/* implicit */signed char) min((var_63), (((/* implicit */signed char) var_1))));
        }
    }
    var_64 ^= ((/* implicit */int) max((((((/* implicit */_Bool) (+(var_10)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50781))))) ? (var_2) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) var_13)))))))));
    var_65 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
}
