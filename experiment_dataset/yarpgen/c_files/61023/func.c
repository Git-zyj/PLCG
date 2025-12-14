/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61023
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
    for (short i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_1)))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_0 [i_0 - 2])))))) < (max((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (min((((/* implicit */unsigned long long int) 7245087603007596631LL)), (var_6)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 7245087603007596632LL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)2))))));
    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (short i_3 = 4; i_3 < 19; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((473205388U), (473205392U)))) >= (arr_4 [i_2] [i_3 + 1])));
                    var_25 = ((/* implicit */int) var_6);
                    arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (short)2047);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        arr_16 [i_5] = ((/* implicit */unsigned int) (((-((-(arr_12 [i_5]))))) / (((/* implicit */long long int) 3821761907U))));
        arr_17 [i_5] = ((_Bool) min((-7245087603007596632LL), (7245087603007596631LL)));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) var_9)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_27 |= ((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_7] [i_8]);
                        var_28 = ((/* implicit */long long int) (!(((_Bool) var_10))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_5]) <= (3135101906U))))) - (min((arr_15 [i_6]), (arr_15 [i_8])))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) min((((long long int) min((-8629443974712886012LL), (((/* implicit */long long int) 3821761903U))))), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                        arr_27 [i_7] [i_6] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((arr_23 [i_5] [i_6] [i_7] [(short)21]) - ((-(((/* implicit */int) (unsigned char)0))))));
                        arr_28 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) min((max((-8035565217051265986LL), (((/* implicit */long long int) 3821761884U)))), (((5210311646454007982LL) / (-7245087603007596632LL)))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) 658081419)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)0)))))));
                            var_32 *= ((/* implicit */short) arr_29 [i_5] [i_5] [14LL] [i_7] [i_10] [14LL]);
                        }
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((((/* implicit */unsigned int) arr_29 [i_5] [(short)16] [i_5] [(unsigned char)8] [i_5] [i_12])) <= (9U))) ? (182882472U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)136))))))))));
                            var_34 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 3821761903U)) ? (3821761906U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))))));
                            arr_36 [i_7] = ((/* implicit */long long int) ((_Bool) arr_26 [i_5]));
                            arr_37 [i_5] [i_6] [i_7] [i_6] [i_7] [i_12] = ((/* implicit */_Bool) (((+(369947200))) << (((((8500934657638831982LL) << (((/* implicit */int) (_Bool)0)))) - (8500934657638831980LL)))));
                        }
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
                        {
                            arr_40 [i_5] [i_5] [i_5] [i_7] [i_7] [i_5] = ((/* implicit */long long int) arr_21 [i_13] [i_6]);
                            var_35 += ((/* implicit */unsigned char) ((arr_35 [i_6] [i_6] [i_7] [i_13] [i_13]) / (arr_35 [i_6] [i_6] [i_6] [i_6] [i_5])));
                            arr_41 [i_5] [i_5] [i_7] [i_10] [i_7] = ((((/* implicit */_Bool) arr_32 [i_13] [i_7] [i_7] [i_7] [i_5])) ? (((/* implicit */long long int) -658081423)) : (((long long int) arr_33 [i_5] [i_5] [i_7] [3LL] [i_10] [i_13])));
                            arr_42 [i_5] [i_5] [i_7] [i_7] [4U] [i_7] = (~(((((/* implicit */_Bool) 13362342968024060530ULL)) ? (-8696005107391490883LL) : (var_18))));
                        }
                        arr_43 [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4862939476310873724LL)))))))) ? (min((((/* implicit */long long int) -690802708)), (7245087603007596629LL))) : ((-(-7245087603007596617LL))));
                        var_36 = ((/* implicit */long long int) (((((~(((/* implicit */int) (unsigned char)124)))) + (2147483647))) << (((((long long int) max((arr_26 [i_10]), (((/* implicit */long long int) var_12))))) - (6553944395629198457LL)))));
                    }
                }
            } 
        } 
    }
    for (short i_14 = 2; i_14 < 9; i_14 += 3) 
    {
        var_37 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((arr_33 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) / (var_5)))) ? (((((/* implicit */_Bool) arr_38 [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) var_7)) : (var_6))) : (((/* implicit */unsigned long long int) -22)))), (((/* implicit */unsigned long long int) var_11))));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (short i_16 = 1; i_16 < 9; i_16 += 3) 
            {
                for (unsigned int i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    {
                        var_38 = ((/* implicit */long long int) (((+(max((((/* implicit */long long int) (unsigned char)0)), (var_16))))) > (((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_13 [i_14]) : (arr_34 [i_14] [i_14] [i_14] [i_17]))) * ((-(0LL)))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_18 = 1; i_18 < 11; i_18 += 3) 
                        {
                            var_39 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))) < (((long long int) var_9))));
                            var_40 = max(((~(arr_33 [i_14] [i_15] [i_14] [i_15] [i_14] [i_14]))), (((/* implicit */long long int) (-((~(((/* implicit */int) var_2))))))));
                        }
                        for (long long int i_19 = 0; i_19 < 12; i_19 += 2) /* same iter space */
                        {
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -462233516)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17))))) <= (min((arr_13 [19U]), (((/* implicit */long long int) var_9))))))) == ((~(((/* implicit */int) ((short) (-2147483647 - 1))))))));
                            var_42 = ((/* implicit */long long int) (unsigned char)97);
                            var_43 = ((/* implicit */unsigned long long int) min((max((arr_24 [i_14] [i_14] [i_14] [i_14] [0ULL]), (((/* implicit */int) ((0LL) < (((/* implicit */long long int) arr_9 [i_14] [i_16 - 1] [(unsigned char)5] [i_14]))))))), (max((arr_29 [i_14 + 3] [i_15] [i_15] [i_17] [i_19] [i_16]), (((/* implicit */int) max(((short)4095), (((/* implicit */short) (unsigned char)24)))))))));
                            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (max((((-4862939476310873725LL) | (-6889969538050670032LL))), (((/* implicit */long long int) arr_51 [i_16 + 3] [11LL] [i_14 + 2]))))));
                        }
                        for (long long int i_20 = 0; i_20 < 12; i_20 += 2) /* same iter space */
                        {
                            arr_67 [i_14] [i_15] [i_14] [i_14] [i_15] = 23LL;
                            arr_68 [i_14] [i_15] [i_16] [i_15] [i_14] [i_14] [i_15] = var_14;
                            arr_69 [i_14] [i_14] [i_16] [i_14] [i_14] [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_14])))))));
                            arr_70 [i_14] [i_14] = ((/* implicit */long long int) (~(((unsigned int) (-(3821761892U))))));
                            var_45 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_16 - 1] [i_16 + 3] [i_16 - 1])) ? (((/* implicit */int) arr_51 [i_16 + 2] [i_16 + 1] [i_16 + 3])) : (((/* implicit */int) arr_51 [i_16 + 2] [i_16 + 1] [i_16 - 1]))))) < (var_16)));
                        }
                        for (long long int i_21 = 0; i_21 < 12; i_21 += 4) 
                        {
                            arr_73 [i_14] [i_15] [i_16] [i_17] [i_14] = ((/* implicit */long long int) arr_7 [i_15] [i_14]);
                            arr_74 [i_14] [i_14] [i_14] [i_17] [i_15] = var_18;
                            var_46 = ((/* implicit */unsigned long long int) arr_65 [i_14] [i_14] [i_15] [i_14] [i_14] [i_14] [i_14]);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        arr_78 [i_22] = ((/* implicit */long long int) ((((1151795604700004352LL) != (((/* implicit */long long int) ((/* implicit */int) var_2))))) ? (arr_7 [i_22] [i_22]) : (((/* implicit */unsigned long long int) var_0))));
        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_22])) ? (arr_30 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]) : (((((/* implicit */_Bool) -2946774501071579018LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_17))))));
        arr_79 [i_22] = ((/* implicit */short) (~(((/* implicit */int) (!((_Bool)1))))));
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 16; i_23 += 2) 
        {
            for (short i_24 = 1; i_24 < 15; i_24 += 2) 
            {
                {
                    var_48 = ((((/* implicit */unsigned long long int) 3821761898U)) > (90183021526902929ULL));
                    var_49 = var_5;
                    var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_22] [i_22]))) : (5084401105685491095ULL)))) ? (((((/* implicit */_Bool) arr_24 [i_22] [i_23] [i_22] [i_24] [14LL])) ? (arr_82 [i_22] [i_22]) : (((/* implicit */unsigned long long int) 369947203)))) : (((((/* implicit */_Bool) 2U)) ? (17845703395017004631ULL) : (((/* implicit */unsigned long long int) 1LL))))));
                    arr_85 [i_23] [i_23] [i_23] [i_24] &= ((/* implicit */long long int) arr_29 [i_22] [i_23] [i_23] [i_23] [i_24] [(unsigned char)4]);
                }
            } 
        } 
    }
}
