/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9974
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (((~(min((1791630389752820519ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [4U])))))) <= (((/* implicit */unsigned long long int) (~(arr_1 [(unsigned char)10])))))))));
        var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (((arr_1 [i_0]) >> (((((/* implicit */int) ((short) var_8))) + (26629)))))));
        var_17 = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) arr_1 [i_0]))), (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)250))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            var_18 |= ((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0] [i_0]));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_19 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)252))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 2240633254U))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */int) ((unsigned short) 4503049871556608LL))) : (((/* implicit */int) (signed char)102))));
                        arr_16 [i_0] [i_1 + 1] [(_Bool)0] [i_3] [i_4] |= ((/* implicit */unsigned short) ((signed char) arr_2 [i_1 - 1] [i_2]));
                        var_22 = (!(((/* implicit */_Bool) arr_8 [i_0])));
                        arr_17 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)2046));
                    }
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_1 + 1] [i_2] [i_2] [i_0] [i_5] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)87));
                        var_23 = ((/* implicit */unsigned short) (~(arr_4 [i_0] [i_0])));
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((long long int) (unsigned char)255));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_18 [(unsigned char)4] [i_1 - 2] [i_1] [i_1] [(short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_1]))) : (4294967295U))))))));
                        var_25 |= ((/* implicit */signed char) ((unsigned short) var_12));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_26 ^= ((/* implicit */long long int) ((4294967286U) == (arr_1 [(unsigned short)8])));
                        var_27 = ((/* implicit */unsigned char) min((var_27), ((unsigned char)173)));
                        var_28 = var_9;
                    }
                }
                for (unsigned int i_7 = 3; i_7 < 11; i_7 += 1) 
                {
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)-32762))))) - (((((/* implicit */_Bool) (~(var_12)))) ? (min((((/* implicit */long long int) (unsigned short)511)), (var_6))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)5)))))))));
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_19 [i_7] [i_7 + 1] [i_7 - 3] [i_7] [i_7 + 1])))), (max((((/* implicit */int) (unsigned char)0)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) arr_13 [i_7] [i_1 - 1] [i_0])))))))))));
                    arr_29 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_3)), ((unsigned char)255)));
                    var_31 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
                }
                for (unsigned int i_8 = 4; i_8 < 10; i_8 += 1) 
                {
                    arr_33 [i_1 + 2] [i_0] [i_2] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) ((unsigned int) var_5))), (var_6))), (((/* implicit */long long int) (unsigned char)238))));
                    var_32 = ((/* implicit */unsigned short) var_14);
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_33 = min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)223)) && (((/* implicit */_Bool) arr_11 [i_8 + 1]))))), ((unsigned char)238));
                        arr_36 [i_1] [8LL] [i_8] |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8] [i_8] [i_8 - 3] [i_8] [i_8]))) <= (((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))))))))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 10; i_10 += 1) 
                    {
                        var_34 ^= ((/* implicit */short) min((min((((long long int) var_1)), (((/* implicit */long long int) var_14)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0] [0U] [0U] [i_10 + 2]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)8]))) : (arr_10 [i_1] [i_8])))))));
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_12 [i_0] [(unsigned char)0] [i_8 - 2] [i_10 - 1]), (arr_12 [i_1] [(unsigned short)6] [i_8 - 3] [i_10 + 1])))) ? (((/* implicit */int) arr_12 [i_0] [(unsigned short)0] [i_8 - 1] [i_10 + 2])) : (((/* implicit */int) max((arr_12 [i_1 - 3] [(unsigned char)10] [i_8 - 3] [i_10 - 1]), ((unsigned char)17)))))))));
                        var_36 += (unsigned char)229;
                    }
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_35 [i_0] [i_1] [i_1] [i_2] [i_8])), (var_8)))) ? (((((/* implicit */_Bool) (short)-1)) ? (4294967284U) : (arr_35 [i_8] [i_2] [i_1 + 1] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)32745), (((/* implicit */short) var_9)))))))))));
                }
                /* LoopNest 2 */
                for (short i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            arr_46 [i_0] [i_1] [i_1 - 2] [i_0] [i_0] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_12] [i_2] [i_1 - 3] [i_0]))) <= (((((/* implicit */_Bool) max((((/* implicit */long long int) 4223116539U)), (var_8)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)9), ((unsigned char)73)))))))));
                            var_38 = max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (3599573641U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15763))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (min((((unsigned long long int) arr_24 [i_12] [i_0] [i_0] [i_0])), (((/* implicit */unsigned long long int) max((12U), (((/* implicit */unsigned int) (unsigned short)0))))))));
                            var_39 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_25 [i_12] [i_0] [i_12] [i_11 + 2] [i_2] [i_0] [i_0])) <= (((/* implicit */int) var_2)))) ? (max((min((var_6), (3041991785431089866LL))), (min((((/* implicit */long long int) var_13)), (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)22), (arr_13 [i_0] [i_12] [i_1 + 1])))))));
                            var_40 ^= ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-256))))), (min((var_12), (((/* implicit */long long int) arr_45 [i_11 + 2] [i_1 + 1] [i_2]))))));
                        }
                    } 
                } 
                arr_47 [(signed char)0] [(signed char)0] |= ((/* implicit */unsigned char) var_4);
                var_41 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 3])))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_12)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20)))))))));
                var_42 |= ((/* implicit */signed char) min((min(((unsigned short)5081), (((/* implicit */unsigned short) arr_8 [(signed char)6])))), (((/* implicit */unsigned short) (unsigned char)251))));
            }
            /* vectorizable */
            for (signed char i_13 = 1; i_13 < 10; i_13 += 1) 
            {
                arr_50 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1152920954851033088LL)))) <= (((unsigned int) var_10))));
                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_0] [i_1 + 2] [i_13])) && (((/* implicit */_Bool) (short)24576))))) ^ (((/* implicit */int) var_5)))))));
                /* LoopSeq 3 */
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned short) ((unsigned int) 19U));
                    var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)246)))) > (((/* implicit */int) var_5)))))));
                    var_47 = ((/* implicit */long long int) ((unsigned short) ((unsigned char) (signed char)-65)));
                    var_48 = ((/* implicit */signed char) ((short) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]));
                }
                for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
                {
                    var_49 += ((/* implicit */signed char) ((unsigned long long int) (unsigned char)31));
                    var_50 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)238)) != (((/* implicit */int) var_13))));
                }
                for (unsigned int i_16 = 3; i_16 < 10; i_16 += 3) 
                {
                    arr_59 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0]))));
                    var_51 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (signed char)-1))))));
                    var_52 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 3])) ? (((/* implicit */int) arr_30 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 3])) : (((/* implicit */int) arr_30 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 3]))));
                }
            }
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 1) 
            {
                for (unsigned char i_18 = 1; i_18 < 11; i_18 += 1) 
                {
                    {
                        var_53 = ((/* implicit */unsigned short) 2904367900U);
                        var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) min(((~(((/* implicit */int) arr_62 [i_18 - 1] [i_1 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_61 [i_1] [i_17] [i_18])), (var_0))))))))))));
                    }
                } 
            } 
            var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)47), ((signed char)30))))) : (-2117725600353912472LL))))));
        }
    }
    /* vectorizable */
    for (short i_19 = 0; i_19 < 20; i_19 += 3) 
    {
        var_56 = ((/* implicit */unsigned int) (signed char)-98);
        var_57 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)255)) ? (var_0) : (((/* implicit */long long int) var_10))))) ? ((+(-2117725600353912473LL))) : (arr_64 [i_19])));
        var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) < (((/* implicit */int) (signed char)-98)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)30)) != (((/* implicit */int) (unsigned short)40454))))) : (((/* implicit */int) (short)32295)))))));
    }
    var_59 = ((/* implicit */long long int) var_3);
}
