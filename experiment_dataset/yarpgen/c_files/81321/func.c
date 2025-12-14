/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81321
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
    var_14 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (arr_7 [i_3] [i_0] [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0])))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_6)))) ? (((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))))) : (((765529300U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))) : (((max((705733100U), (((/* implicit */unsigned int) (signed char)-1)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [i_0]))))))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) >> (((-1LL) + (24LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [(unsigned short)10] [i_1] [i_2])) == (((/* implicit */int) arr_9 [(unsigned short)8])))))) : (((long long int) arr_0 [i_1])))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) (+(((int) (~(((/* implicit */int) (signed char)-48)))))));
                        var_17 = ((/* implicit */signed char) max(((~(-1LL))), (((((/* implicit */_Bool) ((arr_15 [(short)5] [i_1] [(unsigned char)3] [(unsigned char)3] [(short)8]) << (((arr_10 [i_1]) - (4166285280106949064ULL)))))) ? (min((arr_12 [i_0] [i_1] [(unsigned short)5] [i_1]), (-594403379425635318LL))) : ((+(var_11)))))));
                        var_18 = ((/* implicit */short) (~(((int) arr_5 [i_0]))));
                        var_19 = var_2;
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_14 [i_2] [i_2] [i_2] [(short)1] [i_2] [i_2]), (arr_14 [1LL] [i_1] [i_1] [i_2] [i_2] [i_4])))) >> ((((+(((((/* implicit */unsigned long long int) arr_15 [(unsigned char)3] [i_1] [(unsigned char)3] [i_1] [i_1])) + (var_5))))) - (16256086422625544805ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        arr_18 [i_0] [10U] [i_2] [10U] = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [(signed char)8] [i_0] [5LL] [i_0] [i_0])) ^ ((-(((/* implicit */int) (signed char)30))))));
                        arr_19 [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0])) || (arr_4 [(signed char)8] [i_2] [i_1])))));
                        var_21 = ((((/* implicit */long long int) (+(((/* implicit */int) var_8))))) / (((5230660191889285943LL) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_0] [i_2] [i_6] [(unsigned char)0] = max((((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_6] [i_7])) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0]))))), (((short) -6961181318695838796LL)));
                                var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                                arr_28 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((1763851894U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1763851897U)))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) 6961181318695838795LL))));
                    var_24 = ((/* implicit */unsigned short) max((min((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */long long int) 336952080U)))), (((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_2]))))) & ((+(-12LL)))))));
                    var_25 = ((/* implicit */int) min((-2162990155264777325LL), (((/* implicit */long long int) (signed char)43))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_35 [i_0] [0] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9])) ? (((/* implicit */int) arr_11 [i_0] [i_9 - 1] [i_9] [i_9 - 1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_9 - 1] [(signed char)2] [i_9 - 1] [i_9 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_26 = ((/* implicit */short) ((((336952072U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
                            arr_38 [i_10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)150)) ? (-289061140) : (((/* implicit */int) var_7)))));
                        }
                    }
                    var_27 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (0U)))));
                    arr_39 [i_0] [6ULL] [i_8] = (-(arr_0 [i_0]));
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((int) var_0)))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        arr_43 [i_0] [i_0] [i_8] [(unsigned char)2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_41 [i_11] [i_8] [i_0] [i_0] [i_0]))))) / (arr_20 [(signed char)4] [i_1] [i_8] [i_11])));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((_Bool) arr_26 [i_0] [i_0] [(signed char)8] [i_1] [i_8] [i_11])))));
                        var_30 = ((/* implicit */unsigned short) ((336952072U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                        var_31 = ((/* implicit */_Bool) var_7);
                    }
                }
                for (long long int i_12 = 4; i_12 < 10; i_12 += 3) 
                {
                    arr_47 [i_0] [i_1] [i_12] [i_0] = ((/* implicit */unsigned short) 0LL);
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_13)))));
                        var_33 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned char) arr_23 [i_12 - 2] [i_12 + 1] [i_12 - 2] [i_12 - 2]))), (arr_20 [i_0] [i_1] [i_12] [i_13])));
                    }
                    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) arr_10 [i_0]))));
                    arr_50 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) >> (((((/* implicit */int) var_3)) - (64633)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((((_Bool)1) ? (arr_10 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [i_1] [i_0] [i_1])))))))) && (((/* implicit */_Bool) max(((-(var_2))), (((/* implicit */long long int) ((var_9) / (((/* implicit */int) arr_31 [i_1] [i_0] [i_0] [i_1]))))))))));
                    arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_45 [i_0] [i_12 - 1] [i_12 - 4] [i_12 - 4]);
                }
                /* LoopSeq 2 */
                for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-8045)) || (((/* implicit */_Bool) 336952080U)))) || (((((/* implicit */_Bool) 13LL)) && (((/* implicit */_Bool) 4294967295U)))))))));
                    arr_54 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_12 [i_0] [i_0] [i_0] [i_14]))) ? ((~((~(((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                    arr_55 [i_0] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_49 [i_0] [i_1] [i_1] [i_14])))));
                }
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 1; i_17 < 10; i_17 += 4) 
                        {
                            {
                                arr_63 [i_0] [8U] [i_0] [i_15 + 1] [i_16 - 1] [i_17] [i_17 - 1] = ((/* implicit */long long int) (((-((-(arr_0 [i_15]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) -1218751354)))))));
                                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)8035)) ? (((/* implicit */unsigned int) -1218751362)) : (336952072U)));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned char) ((int) ((unsigned int) -23088857)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_18 = 2; i_18 < 10; i_18 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */int) ((arr_10 [i_15]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_0] [i_15 + 1] [i_18 - 1])))))) | (((arr_36 [i_0] [(short)8] [(_Bool)1] [i_18] [i_15 + 1]) / (((/* implicit */int) arr_24 [i_18] [i_18 - 2] [i_18] [(signed char)8] [i_18 + 1])))))))));
                        var_39 = ((/* implicit */long long int) ((((4635131129944484963ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_15]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_0] [i_0] [i_15] [i_15 + 1])))));
                    }
                    var_40 = ((/* implicit */_Bool) ((int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)6] [i_0] [i_1])))))));
                    var_41 = ((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_0] [i_1]);
                }
            }
        } 
    } 
    var_42 -= ((/* implicit */int) ((long long int) 1218751349));
    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((-2147483647 - 1)) - (-93404890)))) ? ((~(-1016929286295985990LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6961181318695838801LL))))) : ((-(((/* implicit */int) ((_Bool) -7)))))));
}
