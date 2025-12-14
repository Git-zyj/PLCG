/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86918
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (signed char)42)), (4216303213U)))));
                var_14 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 1617295607U)) ? (min((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))) : (max((((/* implicit */unsigned int) var_0)), (4216303213U)))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            var_15 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1] [i_2])) ? (((/* implicit */long long int) arr_6 [i_1 - 1] [i_1] [i_2])) : (var_9))), (((/* implicit */long long int) arr_4 [i_0] [i_2] [i_3]))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]))));
                            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) 1))))) ? (78664083U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */long long int) (((_Bool)0) ? (78664065U) : (78664065U)))) != (-9124990726353993256LL))))));
                            var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)11)) ? (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-112)) + (2147483647))) >> (((((/* implicit */int) (signed char)34)) - (4)))))), (8811563702904643674ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19447)))));
                        }
                        var_20 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(var_9))))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((((/* implicit */_Bool) var_6)) ? (4216303213U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) % ((-(var_1)))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) var_10)))))));
                        var_23 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-17))))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((min((arr_18 [i_0] [i_1] [i_1 + 3] [i_1 + 3]), (((/* implicit */long long int) (_Bool)1)))) > (((((_Bool) var_8)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_6] [i_0]))))) : (((((/* implicit */_Bool) 152938823)) ? (65970697666560LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                        var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(10264586525238935282ULL)))))))) > (((unsigned int) var_5))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_0))), (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_6])) << (((((/* implicit */int) (signed char)34)) - (31)))))))) ? (((((/* implicit */_Bool) ((((arr_14 [i_6] [i_6] [i_2] [i_1] [i_2] [i_1]) + (9223372036854775807LL))) >> (((arr_4 [i_0] [i_1] [i_2]) - (1202482459U)))))) ? ((~(arr_6 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (arr_3 [i_1] [i_2])))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)11))))))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((unsigned char) (_Bool)1))) | (814249282))) - (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (_Bool)1))));
                        arr_22 [i_0] [i_1] [i_0] [i_7] |= ((/* implicit */short) ((0ULL) << (((((((/* implicit */_Bool) -252976774)) ? (7471104260527086614ULL) : (arr_12 [i_1 + 1] [i_0] [i_1] [i_1] [i_1 + 2]))) - (7471104260527086609ULL)))));
                    }
                    var_29 ^= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))) : (3127011486U)))), (((unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_1 - 1] [i_2])))), (((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */int) (_Bool)0)))))));
                }
                for (int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                {
                    var_30 *= ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)34))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 2; i_9 < 7; i_9 += 1) 
                    {
                        var_31 ^= ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_0)) : (var_9))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_8] [i_8] [i_8] [i_8] [i_9] [i_9 + 1])))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3186348448U))), (4216303231U))))));
                        var_32 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
                        var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_8] [i_9 + 4]))) : (arr_12 [i_1] [i_8] [i_1] [i_9 + 1] [i_1 - 1])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 3186348464U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_8] [i_9]))) : (arr_21 [i_0] [i_1 + 2] [i_0] [i_9]))))) : (((/* implicit */unsigned long long int) 4216303190U))));
                    }
                }
                for (int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        var_34 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (1108618848U)))) ? (((/* implicit */int) arr_27 [i_0] [i_1 - 1] [i_11])) : (((((/* implicit */int) (signed char)-20)) / (((/* implicit */int) (unsigned char)65))))))) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_1] [i_11])) : (((unsigned long long int) var_11))));
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 1; i_12 < 9; i_12 += 1) 
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) min(((~(((((/* implicit */int) (unsigned short)31526)) + (((/* implicit */int) (signed char)-43)))))), (((/* implicit */int) min((arr_30 [i_0] [i_12] [i_12 + 2] [i_12]), (arr_30 [i_10] [i_10] [i_12 + 2] [i_10])))))))));
                            var_36 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : ((~(2ULL)))))) ? (min(((-(arr_26 [i_10]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_10] [i_11])) / (((/* implicit */int) (unsigned char)11))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((929265007U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27)))))) ? ((+(((/* implicit */int) (signed char)124)))) : (min((var_0), (((/* implicit */int) arr_13 [i_0] [i_10] [i_10] [i_11] [i_12])))))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            var_37 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-55))));
                            var_38 ^= ((/* implicit */_Bool) (~(((unsigned long long int) (_Bool)1))));
                            var_39 |= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [i_0] [i_11] [i_1 + 2] [i_11] [i_13])), (3870888491U))))));
                        }
                        for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) var_10))));
                            var_41 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22616)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_11)) : (7684158653313954732LL)))) || (((/* implicit */_Bool) ((signed char) (_Bool)1))))))) : (min((-7684158653313954743LL), (((/* implicit */long long int) 2849514088U))))));
                        }
                        var_42 |= ((/* implicit */unsigned long long int) arr_31 [i_0] [i_10] [i_0] [i_11] [i_11]);
                        var_43 -= ((/* implicit */unsigned int) var_0);
                    }
                    var_44 *= ((/* implicit */short) min((((((min((-841582677), (((/* implicit */int) (unsigned short)17704)))) + (2147483647))) >> (((min((arr_12 [i_0] [i_10] [i_1] [i_10] [i_10]), (((/* implicit */unsigned long long int) var_6)))) - (1483594135093139575ULL))))), (min((((/* implicit */int) var_12)), (((arr_1 [i_0]) ? (((/* implicit */int) (unsigned short)46980)) : (((/* implicit */int) (signed char)43))))))));
                    var_45 ^= ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)18556));
                    var_46 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (min((((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_1])), ((unsigned short)18556)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((((/* implicit */_Bool) 385664770U)) ? (((/* implicit */unsigned long long int) 3186348447U)) : (arr_7 [i_0] [i_1] [i_10] [i_10]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_10 [i_0] [i_1] [i_10] [i_0] [i_0] [i_10])))))));
                }
                var_47 *= ((/* implicit */unsigned int) max((((arr_2 [i_1] [i_1 + 3] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1 - 1] [i_1 + 3]))) : (-7684158653313954733LL))), (((/* implicit */long long int) var_0))));
                var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1 + 2] [i_1 + 2]) ? (((arr_39 [i_0] [i_1 + 1] [i_1 + 2] [i_0] [i_0] [i_0] [i_0]) << (((arr_32 [i_0] [i_1] [i_1] [i_1] [i_1 + 3] [i_0] [i_0]) - (940879048210397270ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))))))))) ? (((((/* implicit */_Bool) 45241924698162817LL)) ? (((((/* implicit */_Bool) -226429709)) ? (8301279680417371880ULL) : (2393413342114924035ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)46971)) <= (((/* implicit */int) (unsigned short)46980)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_15 = 4; i_15 < 24; i_15 += 4) 
    {
        var_49 ^= ((/* implicit */unsigned char) (((!(((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_15]))))))) ? (((/* implicit */int) var_2)) : ((-((-(var_0)))))));
        var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)0))) ? (((-1459720246) / (((/* implicit */int) arr_40 [i_15] [i_15 - 1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_41 [i_15])), ((unsigned char)223))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)182)), (1459720246)))) ? (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) (unsigned short)13583))))) : (var_4))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_41 [i_15])))))))))))));
        var_51 ^= ((/* implicit */int) ((unsigned char) arr_41 [i_15]));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1380)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (9151738782280857181LL))))));
        /* LoopNest 3 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_20 = 3; i_20 < 10; i_20 += 4) /* same iter space */
                        {
                            var_53 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-1885742859))))));
                            var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_18 [i_16] [i_16] [i_18] [i_20])) ? (((/* implicit */int) var_10)) : (1885742844))))))));
                            var_55 ^= ((/* implicit */signed char) ((_Bool) arr_12 [i_16] [(unsigned short)6] [i_19] [i_19] [i_20]));
                        }
                        for (unsigned int i_21 = 3; i_21 < 10; i_21 += 4) /* same iter space */
                        {
                            var_56 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (2222662992U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31)))));
                            var_57 = ((/* implicit */unsigned long long int) max((var_57), (((((/* implicit */_Bool) ((signed char) ((18446744073709551615ULL) & (4ULL))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)225)))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 0; i_22 < 11; i_22 += 4) 
                        {
                            var_58 |= ((/* implicit */unsigned char) var_0);
                            var_59 &= ((((/* implicit */long long int) -1885742844)) <= (7980228123552875093LL));
                            var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) ((((/* implicit */int) min((var_3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-15027)))))))) >= (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_61 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_16] [i_18] [i_19]), (arr_6 [i_16] [i_16] [i_16])))) ? ((+(arr_6 [i_19] [i_19] [i_18]))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (-701698834))))));
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                        {
                            var_62 -= ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_16] [i_18] [i_19] [i_18])) != (((/* implicit */int) ((((/* implicit */long long int) (~(arr_61 [i_18] [i_19] [(signed char)4])))) > (-10LL))))));
                            var_63 ^= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)-1))))));
                            var_64 = ((/* implicit */unsigned long long int) max((var_64), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) var_3))))) ? (((long long int) arr_18 [i_16] [i_17] [i_18] [i_23])) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_16] [i_17] [i_18] [i_19] [i_23 - 1] [i_17])))))))));
                            var_65 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_19])) || ((_Bool)0))))))) > (((((/* implicit */_Bool) ((long long int) var_2))) ? (((((/* implicit */_Bool) var_12)) ? (-4365667132855172104LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_18] [i_19])) ? (((/* implicit */int) arr_51 [i_19])) : (((/* implicit */int) var_2)))))))));
                            arr_63 [i_18] [(signed char)6] |= ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-40)) + (2147483647))) << (((((/* implicit */int) (signed char)70)) - (70)))));
                        }
                    }
                } 
            } 
        } 
    }
}
