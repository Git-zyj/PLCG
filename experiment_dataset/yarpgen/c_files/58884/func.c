/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58884
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) (~(var_10)))) || (((/* implicit */_Bool) 7149838957480028788LL)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((var_2) ? (((/* implicit */long long int) var_0)) : (-7149838957480028788LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(7149838957480028788LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) <= (var_0))))) : (((((/* implicit */_Bool) -7149838957480028789LL)) ? (-7149838957480028788LL) : (7149838957480028788LL)))))) : (var_5)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 4; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned long long int) var_2);
                        var_13 = ((/* implicit */int) 7149838957480028787LL);
                        var_14 = ((/* implicit */int) max((var_14), ((~(arr_7 [i_3 - 3] [i_3 - 3])))));
                    }
                    for (unsigned int i_4 = 4; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        var_15 -= ((((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 7149838957480028788LL)))) && ((!(((/* implicit */_Bool) -7149838957480028788LL)))))) ? (var_10) : (((/* implicit */unsigned long long int) arr_3 [i_4 + 1] [i_4 - 1])));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(7149838957480028788LL)))) ? (7149838957480028788LL) : (((/* implicit */long long int) arr_3 [6ULL] [i_4]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */int) 7149838957480028788LL);
                        var_18 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7149838957480028788LL)) ? (7149838957480028788LL) : (var_3))))));
                        var_19 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (-7149838957480028788LL) : (7149838957480028788LL)))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))));
                    }
                    arr_16 [i_0] [i_0] [(short)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_2) ? (-7149838957480028789LL) : (var_9)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (var_8)))))) ? (max((((((/* implicit */_Bool) var_10)) ? (-7149838957480028788LL) : (((/* implicit */long long int) var_4)))), ((+(7149838957480028788LL))))) : (((/* implicit */long long int) var_6))));
                    var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_8 [i_0] [i_1] [i_2] [i_0]))) ? (((((/* implicit */long long int) var_6)) | (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (7149838957480028788LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))) : (7149838957480028788LL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 3; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((var_4), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) 7149838957480028788LL))))) ? (7149838957480028788LL) : ((-(arr_11 [i_0] [i_1] [i_2] [i_6] [i_1] [i_2])))))) : (((((/* implicit */_Bool) 7149838957480028788LL)) ? (((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_6])) + (var_8))) : (((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_1] [i_2] [i_6 + 1]), (var_3))))))));
                        var_23 |= ((/* implicit */_Bool) min((((-7149838957480028788LL) | (max((var_9), (((/* implicit */long long int) arr_5 [i_0] [i_0])))))), (((/* implicit */long long int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (7149838957480028788LL)))), (((((/* implicit */_Bool) 7149838957480028788LL)) ? (var_10) : (((/* implicit */unsigned long long int) arr_8 [i_6] [i_2] [i_1] [i_0]))))))) ? (((var_10) >> (((((((/* implicit */_Bool) arr_0 [i_0])) ? (-7149838957480028788LL) : (-7149838957480028788LL))) + (7149838957480028805LL))))) : (((/* implicit */unsigned long long int) var_3))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 4; i_7 < 21; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0])) ? (7149838957480028788LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7 - 1] [i_0] [i_1] [i_0])))))) ? ((-(((/* implicit */int) arr_10 [i_7] [(_Bool)1] [i_2] [(_Bool)1] [i_0])))) : (((/* implicit */int) arr_6 [i_6] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_10 [i_6 - 1] [i_7 - 4] [i_7 - 1] [i_7 - 2] [i_6 - 1])) ? (-7149838957480028789LL) : (7149838957480028788LL))) : (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_6 + 1] [(signed char)13] [i_7 + 1])) ? (var_9) : (max((-7149838957480028788LL), (((/* implicit */long long int) var_7)))))))))));
                            arr_21 [i_6] = ((/* implicit */int) max((max((arr_19 [i_6 - 2] [i_1] [i_1] [i_6] [i_7] [4U]), (((/* implicit */unsigned long long int) 7149838957480028789LL)))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [(_Bool)1] [i_0]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 3; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) var_8);
                        arr_24 [i_0] [i_1] [i_2] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_8 + 1] [i_2] [i_8] [i_1] [i_2])) ? (arr_8 [i_0] [i_8 - 3] [i_8 - 3] [i_8 - 3]) : (arr_8 [i_0] [i_8 - 2] [i_2] [i_8])));
                    }
                }
            } 
        } 
        arr_25 [i_0] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -7149838957480028789LL)) ? (arr_13 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (7149838957480028788LL)))))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(max((((-7149838957480028789LL) - (-7149838957480028788LL))), (((((/* implicit */_Bool) 7149838957480028788LL)) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_22 [i_0] [i_0] [3LL] [i_0])))))))))));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 7149838957480028788LL)) ? (7149838957480028788LL) : (7149838957480028788LL))), (((((/* implicit */_Bool) (~(var_10)))) ? (7149838957480028788LL) : ((-(7149838957480028789LL)))))));
                        arr_36 [i_0] [i_9] [11ULL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7149838957480028788LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-7149838957480028789LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned char)14] [(unsigned char)14]))) / (var_9))) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))) * ((+(((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9] [i_11]))) / (-7149838957480028789LL)))))));
                        arr_37 [i_0] = ((/* implicit */unsigned int) arr_23 [i_0]);
                        var_29 = max((((/* implicit */long long int) (((-(var_8))) != (((/* implicit */unsigned long long int) ((((-7149838957480028789LL) + (9223372036854775807LL))) << (((7149838957480028789LL) - (7149838957480028789LL))))))))), ((+((~(-7149838957480028788LL))))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((((/* implicit */_Bool) max((((-7149838957480028789LL) / (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_11])) >> (((((((/* implicit */_Bool) -7149838957480028789LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (7149838957480028788LL))) - (172LL)))))) : (var_5)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (7149838957480028788LL)))) ? (max((((/* implicit */long long int) arr_38 [i_14])), (arr_14 [i_12] [i_13] [i_13] [i_13]))) : (arr_33 [i_12] [i_13] [i_14] [i_12])))) | (((((/* implicit */unsigned long long int) -7149838957480028789LL)) * (var_8)))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 1; i_15 < 12; i_15 += 2) 
                    {
                        for (short i_16 = 2; i_16 < 12; i_16 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) max((7149838957480028788LL), ((+((-(-7149838957480028788LL)))))));
                                var_33 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_12] [i_13] [i_14] [i_15] [i_14])) : (arr_3 [i_14] [i_14])))), (((var_1) ? (((/* implicit */unsigned long long int) var_9)) : (var_5)))))));
                                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) 7149838957480028789LL))));
                                arr_48 [(short)8] [i_14] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -7149838957480028788LL)) ? (-7149838957480028788LL) : (-7149838957480028788LL)));
                            }
                        } 
                    } 
                }
                for (unsigned int i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned int) ((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) >= (var_6)))))));
                        var_36 = ((/* implicit */unsigned int) (((+(var_9))) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_12] [i_13])))));
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_19 [i_12] [i_12] [i_12] [i_13] [i_12] [i_12])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_34 [i_18])), (7149838957480028788LL)))) : (((arr_19 [i_12] [i_13] [4] [i_18] [i_18] [i_17]) ^ (((/* implicit */unsigned long long int) -7149838957480028788LL)))))))));
                        arr_55 [i_18] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) 7149838957480028789LL);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_20 = 0; i_20 < 13; i_20 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_12] [i_13] [i_17] [i_20])) ? (arr_41 [i_13] [i_12]) : (arr_41 [i_12] [i_12])));
                            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_17] [i_13])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_12] [i_13])))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 13; i_21 += 2) 
                        {
                            var_40 = ((/* implicit */long long int) max((var_40), ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_50 [i_13] [i_13])))) : (((((/* implicit */_Bool) var_4)) ? (7149838957480028787LL) : (-7149838957480028788LL)))))));
                            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) var_9))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_22 = 3; i_22 < 10; i_22 += 2) 
                        {
                            var_42 = ((/* implicit */_Bool) 7149838957480028789LL);
                            var_43 ^= ((/* implicit */unsigned char) var_4);
                            arr_68 [i_17] [i_13] [i_17] [i_17] [i_22] |= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 7149838957480028788LL)) ? (arr_9 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) : (var_4)))) : (((var_2) ? (-7149838957480028789LL) : (7149838957480028788LL)))));
                            arr_69 [i_12] [i_12] [i_17] [i_19] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 7149838957480028788LL)) ? (-7149838957480028788LL) : (-7149838957480028788LL))) / (-7149838957480028789LL)));
                        }
                        for (unsigned char i_23 = 0; i_23 < 13; i_23 += 2) 
                        {
                            arr_72 [0U] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_70 [i_13] [i_19] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_12] [i_12] [i_12]))) : (((((/* implicit */_Bool) arr_17 [i_12] [i_12])) ? (-7149838957480028788LL) : (-7149838957480028788LL)))));
                            var_44 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((7149838957480028788LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_20 [i_12] [i_13] [i_17] [i_13])) ? (-7149838957480028788LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                            var_45 = var_9;
                        }
                        arr_73 [i_12] [i_12] [i_13] [i_13] [i_17] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_12] [i_13] [i_17])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_70 [i_12] [i_12] [i_19])))) ? (((((/* implicit */_Bool) arr_50 [i_12] [i_12])) ? (((/* implicit */unsigned int) arr_35 [i_19] [i_17] [i_12] [i_12] [i_12])) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((var_10) - (1196818337351370371ULL))))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_77 [i_12] [i_17] [i_12] [i_12] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_12] [i_12]))) : (var_10)))) ? (((((/* implicit */_Bool) var_5)) ? (-7149838957480028788LL) : (-7149838957480028789LL))) : (-7149838957480028788LL))), (7149838957480028787LL)));
                        var_46 -= ((/* implicit */unsigned char) (~(((long long int) arr_32 [(unsigned char)13] [i_13] [i_17] [i_24]))));
                        var_47 = ((/* implicit */unsigned char) max((-7149838957480028790LL), (max((((((/* implicit */_Bool) var_0)) ? (var_3) : (-7149838957480028789LL))), (max((-7149838957480028789LL), (((/* implicit */long long int) var_1))))))));
                    }
                    for (short i_25 = 0; i_25 < 13; i_25 += 4) 
                    {
                        arr_82 [i_12] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 7149838957480028788LL)) >= (var_5)))) == (((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) arr_12 [i_25] [i_13] [i_13] [i_12]))))))))));
                        var_48 = ((/* implicit */long long int) var_2);
                        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) max((7149838957480028788LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-7149838957480028789LL)))) ? (((((/* implicit */unsigned int) arr_4 [i_12])) & (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_44 [i_12] [i_13] [i_17] [i_25] [i_12]))))))))))));
                    }
                }
                arr_83 [i_13] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (-7149838957480028789LL) : (((((((/* implicit */_Bool) 7149838957480028788LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [15U]))) : (var_9))) & (max((((/* implicit */long long int) arr_10 [i_12] [i_12] [i_12] [i_13] [i_13])), (arr_12 [(_Bool)1] [i_13] [i_13] [i_13])))))));
                arr_84 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (~(var_10)));
            }
        } 
    } 
}
