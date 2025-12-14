/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69474
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
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((((long long int) (_Bool)1)), (((/* implicit */long long int) var_13))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_14 = ((/* implicit */unsigned int) max((max(((~(arr_6 [i_0] [i_0] [i_1] [i_2]))), (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (0) : (((/* implicit */int) (short)983))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_6 [i_0 - 1] [i_0 - 1] [i_3 + 2] [i_3])) - (7722574945945933235LL)));
                            var_15 += ((/* implicit */_Bool) ((int) (signed char)0));
                            var_16 = ((/* implicit */long long int) var_8);
                        }
                    } 
                } 
                arr_16 [i_0] [i_2] = ((/* implicit */int) (-(max((((/* implicit */unsigned int) arr_12 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])), (3444555747U)))));
            }
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                arr_20 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_5] [i_1] [i_1] [i_0 - 1] [i_1] [i_5])) ? (arr_11 [i_0] [i_1] [i_5] [i_0] [i_5] [i_0]) : (((/* implicit */int) var_3)))) != (((/* implicit */int) max((var_12), (((/* implicit */short) var_7)))))));
                var_17 = ((/* implicit */int) arr_5 [i_0] [i_1] [i_5]);
            }
            /* LoopSeq 1 */
            for (long long int i_6 = 3; i_6 < 22; i_6 += 4) 
            {
                var_18 -= ((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_1] [i_6]);
                var_19 += ((/* implicit */unsigned short) var_9);
                var_20 = ((/* implicit */unsigned long long int) 3444555742U);
            }
            var_21 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((arr_5 [i_1] [i_0] [i_0]) ? (arr_19 [i_0]) : (((/* implicit */unsigned int) -1416981206)))))))), (((int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (850411548U))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    for (long long int i_9 = 1; i_9 < 22; i_9 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */short) min((((((/* implicit */_Bool) var_12)) ? (arr_10 [i_9 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) min((-7601450034910436709LL), (((/* implicit */long long int) (unsigned char)105)))))));
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0] [i_0])) ^ (((/* implicit */int) arr_7 [i_0] [i_1] [i_7] [i_8]))))) ? (max((var_2), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_7] [i_8])))) : (((/* implicit */long long int) ((arr_24 [i_0 - 1] [i_0] [i_0]) ? (((/* implicit */int) arr_24 [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_8] [i_8] [i_7] [i_8])))))));
                            var_24 = ((/* implicit */short) (-(-1089476141)));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 2017459449172236480LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_7 [i_9] [i_8] [i_1] [i_0]))))), (((((/* implicit */unsigned long long int) var_2)) + (((((/* implicit */unsigned long long int) 2418669733559328597LL)) - (var_8))))))))));
                            arr_30 [i_0 + 2] [i_1] [i_0 + 2] [i_8] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 + 1])))))) % (max((((/* implicit */unsigned int) (!(var_0)))), (max((3288811168U), (arr_1 [i_0] [i_0])))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_10 [i_1] [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 2]))));
        }
        for (long long int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
        {
            arr_34 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 1089476140)) ? (((/* implicit */unsigned long long int) -1221035557)) : (12112908042131403258ULL)))));
            var_27 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) -1360072351)) ? ((~(((/* implicit */int) arr_7 [i_10] [i_10] [i_10] [i_0])))) : (((/* implicit */int) (!((_Bool)1)))))));
            /* LoopSeq 4 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
            {
                var_28 += ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_10] [i_0] [i_0 + 2])) ? ((-(max((2702073811U), (((/* implicit */unsigned int) (unsigned short)12816)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49)))));
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    arr_40 [i_0] [i_10] [i_10] [i_0] [i_10] = ((/* implicit */signed char) var_8);
                    var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_0] [i_10] [i_11] [i_0] [i_10] [i_12]))));
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 + 1]))))))));
                    arr_41 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (arr_3 [i_0 - 1])))));
                }
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (+(min((((/* implicit */int) max((var_3), (((/* implicit */signed char) var_0))))), (((var_0) ? (((/* implicit */int) (signed char)49)) : (1089476140))))))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 1; i_13 < 21; i_13 += 2) 
                {
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            arr_49 [i_0] [i_10] [i_0] [i_11 + 1] [i_13] [i_0] = ((/* implicit */long long int) (((~(var_6))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-24588))))) ? (((/* implicit */int) max((var_3), (var_13)))) : ((~(((/* implicit */int) var_1)))))))));
                            var_32 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((1694793379U), (((/* implicit */unsigned int) (short)-11704)))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111))) - (3288811168U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_10] [i_11] [i_13])))))));
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */short) var_0);
                arr_52 [i_0] [i_10] [i_15] = ((/* implicit */short) -5755374219075238612LL);
                arr_53 [i_15] [i_15] [i_10] [i_0 + 1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_10])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))))));
                var_34 += ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_10])) - ((+(((/* implicit */int) (unsigned short)21201))))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_35 *= ((/* implicit */_Bool) (unsigned short)58292);
                        arr_59 [i_16] [i_16] [i_15 + 1] [i_16] [i_17] = min((((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) 3288811168U)) + (arr_47 [i_16] [i_10] [i_16] [i_17])))))), (min((0ULL), (((/* implicit */unsigned long long int) -3724744085777592323LL)))));
                        arr_60 [i_16] = ((/* implicit */short) var_13);
                        arr_61 [i_17] [i_16] [i_15] [i_15 + 1] [i_10] [i_16] [i_0] = ((/* implicit */long long int) max((max(((-(2334242475U))), (((/* implicit */unsigned int) ((arr_11 [i_0] [i_10] [i_15] [i_15] [i_16] [i_17]) + (((/* implicit */int) arr_17 [i_0] [i_10] [i_0] [i_0]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */int) (short)5367)) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_10] [i_15] [i_0] [i_18]))) != (4ULL))))))));
                        var_37 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)0)) - (((/* implicit */int) var_1)))))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        arr_67 [i_0] [i_16] [i_10] [i_15] [i_0] [i_16] [i_19] = ((/* implicit */unsigned short) var_6);
                        arr_68 [i_0] [i_10] [i_10] [i_10] [i_10] [i_0] &= ((/* implicit */int) (signed char)-112);
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) ((-1201321309) != (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) arr_29 [i_19])) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) / (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))))))))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-20916)) + (((/* implicit */int) var_1))))) ? (max((-1294701659), (((/* implicit */int) arr_69 [i_16] [i_15 + 1] [i_10] [i_16])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-20916)) : (((/* implicit */int) arr_69 [i_16] [i_15] [i_16] [i_20]))))));
                        arr_72 [i_0] [i_16] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)0)), (arr_32 [i_10] [i_0])));
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1360072345)))))) != (((((/* implicit */_Bool) 2790159149519708025ULL)) ? (min((((/* implicit */unsigned long long int) var_0)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))))));
                    }
                    var_41 ^= ((/* implicit */unsigned char) (!(((_Bool) (unsigned short)7244))));
                    arr_73 [i_0] [i_10] [i_16] [i_15] [i_16] [i_16] = ((/* implicit */unsigned int) var_1);
                }
            }
            for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_22 = 3; i_22 < 22; i_22 += 1) 
                {
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (-((+(((/* implicit */int) var_12)))))))));
                    arr_81 [i_0] [i_21] [i_21 + 1] [i_22] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24509)))));
                    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) var_10))));
                }
                /* vectorizable */
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    arr_85 [i_21] [i_10] [i_21 + 1] [i_10] = ((/* implicit */short) (((+(6915972539271602182LL))) / (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32193))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_10] [i_21] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_23] [i_10] [i_21] [i_21]))) : (arr_18 [i_0 + 1] [i_10] [i_21]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_36 [i_0 - 1])))))));
                }
                var_45 = ((/* implicit */unsigned char) max((((long long int) max((var_2), (((/* implicit */long long int) var_1))))), (((/* implicit */long long int) min(((~(((/* implicit */int) arr_75 [i_21 + 1])))), (((/* implicit */int) var_11)))))));
            }
            for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) /* same iter space */
            {
                arr_89 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) 1563687835500940874ULL))), (2790159149519708025ULL)))) ? (max((((/* implicit */long long int) arr_54 [i_0 + 2] [i_10] [i_24])), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_10])))));
                var_46 ^= ((/* implicit */unsigned short) arr_32 [i_0] [i_24]);
                /* LoopSeq 1 */
                for (short i_25 = 0; i_25 < 24; i_25 += 3) 
                {
                    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_70 [i_25] [i_10] [i_24] [i_10] [i_10] [i_0]))))) ? (((/* implicit */unsigned long long int) var_6)) : (min((max((var_10), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (3866910928U))))))));
                    var_48 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_2), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) | ((-(arr_0 [i_10]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) + (((/* implicit */int) var_4))))) ? (max((((/* implicit */long long int) arr_51 [i_25])), (arr_82 [i_25] [i_10] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                }
            }
        }
        for (int i_26 = 0; i_26 < 24; i_26 += 2) 
        {
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 24; i_27 += 1) 
            {
                for (short i_28 = 0; i_28 < 24; i_28 += 3) 
                {
                    for (int i_29 = 0; i_29 < 24; i_29 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)114))) : (5378518955694393494LL)));
                            var_50 = ((/* implicit */long long int) ((signed char) ((var_8) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_26])) & (((/* implicit */int) var_0))))))));
                            var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (-3125893083651810403LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57573))) : (((((/* implicit */_Bool) (unsigned short)60280)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_8))))) : (((/* implicit */unsigned long long int) max((arr_91 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0]), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 - 1])))))));
                        }
                    } 
                } 
            } 
            arr_103 [i_0 - 1] [i_26] = ((/* implicit */_Bool) arr_37 [i_0 + 1] [i_26] [i_0] [i_26] [i_26]);
            var_52 = ((arr_31 [i_0] [i_0]) * (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), ((+(-6915972539271602183LL))))));
        }
        arr_104 [i_0] = min((((((/* implicit */long long int) arr_63 [(unsigned char)2])) & (var_2))), (((/* implicit */long long int) (-(arr_63 [6ULL])))));
        arr_105 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_75 [i_0 + 2])), (3288811168U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1552)))))))) ? (((/* implicit */long long int) ((2865270795U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_0] [i_0 + 1] [i_0] [i_0])))))) : (arr_98 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])));
    }
    var_53 = ((/* implicit */_Bool) var_2);
}
