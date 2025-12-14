/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87365
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_1]))) == (var_8))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) var_13)) : (var_12))) : (var_3)))));
                    arr_10 [i_0] = ((/* implicit */unsigned char) (+((+(arr_7 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_5 = 2; i_5 < 15; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) 
                    {
                        var_15 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_3] [i_5] [i_5 - 2] [i_3] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) : (var_11))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)221))))))));
                        arr_22 [i_3] [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)221)) ? ((+(var_13))) : (((/* implicit */int) arr_16 [i_4] [i_5 + 4] [(signed char)8]))));
                        arr_23 [i_6] = ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)-108)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6] [i_4] [i_4] [i_5 - 2] [i_5 + 4] [i_6]))))))));
                        arr_24 [i_3] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)221))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) >= (((/* implicit */int) (unsigned char)35))))) : (((/* implicit */int) arr_19 [i_4] [(unsigned short)12] [i_6 - 1]))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)220)))) | (((((/* implicit */_Bool) 9223372036854773760ULL)) ? (4611686018427386880LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        arr_27 [i_3] [i_4] [i_5] [i_7] = ((/* implicit */int) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_5] [i_4] [i_5] [i_5] [i_7] [(signed char)18])) >> (((/* implicit */int) (signed char)31))))), (((((/* implicit */_Bool) var_7)) ? (var_11) : (4181945076U))))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) ((arr_26 [i_3] [i_3] [i_3] [i_3] [i_3]) >> (((((/* implicit */int) (unsigned char)41)) - (18))))))))))));
                        var_17 = ((/* implicit */_Bool) ((unsigned long long int) ((((4611686018427386880LL) - (-4611686018427386872LL))) << (((((((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))))) + (94620661749377823LL))) - (5LL))))));
                        var_18 = ((/* implicit */short) var_11);
                    }
                    var_19 = ((/* implicit */unsigned int) -8317804702039326419LL);
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (int i_9 = 1; i_9 < 18; i_9 += 3) 
                        {
                            {
                                arr_34 [i_3] [i_9] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((113022201U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40)))))) >> ((((-(-8317804702039326419LL))) - (8317804702039326413LL))))))));
                                var_20 = ((/* implicit */unsigned int) ((unsigned long long int) arr_16 [(signed char)5] [4LL] [i_8]));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */_Bool) var_2);
                }
                for (signed char i_10 = 2; i_10 < 15; i_10 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) ((((unsigned long long int) max((((/* implicit */unsigned int) arr_25 [i_3] [i_3] [i_3] [i_3])), (113022219U)))) % (((/* implicit */unsigned long long int) max((4181945076U), (113022201U))))));
                    var_23 = ((/* implicit */signed char) ((short) (-(((/* implicit */int) (short)10394)))));
                }
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) var_13);
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) var_9);
                                arr_45 [i_11] [i_12] [i_11] = ((/* implicit */unsigned int) max((var_2), (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_1))))) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_13)) : (var_3))))))));
                                var_26 = ((/* implicit */int) (unsigned char)221);
                                var_27 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) var_5)) + (((113022200U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    arr_46 [i_4] [i_4] [i_11] [i_4] = ((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_14 = 0; i_14 < 10; i_14 += 4) 
    {
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_14] [i_14])) ? (((/* implicit */int) arr_14 [i_14] [i_14])) : (((((/* implicit */int) var_0)) - (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) var_2)) : ((-((((_Bool)1) ? (18438890830894163594ULL) : (((/* implicit */unsigned long long int) var_5)))))))))));
        var_29 ^= ((/* implicit */_Bool) var_6);
        arr_51 [i_14] = ((/* implicit */unsigned long long int) ((unsigned char) max((-8317804702039326428LL), (((/* implicit */long long int) (signed char)63)))));
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_14 [i_14] [i_14])) << (((((/* implicit */int) var_1)) - (3463))))), (((/* implicit */int) ((4611686018427386880LL) > (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))))));
        var_31 = ((/* implicit */unsigned char) min((max((4142861140827520743LL), (((/* implicit */long long int) arr_8 [i_14] [i_14] [i_14])))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)232)) == (((/* implicit */int) var_1)))))));
    }
    for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */long long int) arr_52 [i_15]);
        arr_55 [(signed char)13] [i_15] = ((/* implicit */short) var_11);
    }
    for (unsigned long long int i_16 = 1; i_16 < 22; i_16 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) 
        {
            arr_62 [i_16] [i_17] = ((/* implicit */long long int) (short)16443);
            var_33 |= ((/* implicit */unsigned long long int) var_4);
            var_34 &= min(((+(-4611686018427386872LL))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)198)) >> (((((/* implicit */int) (unsigned char)36)) - (8))))))));
            var_35 ^= ((/* implicit */unsigned short) var_1);
        }
        for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            arr_66 [i_18] [i_18] = ((/* implicit */_Bool) min((((long long int) ((((/* implicit */int) var_10)) >> (((var_11) - (3768485496U)))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 113022222U))))) != (max((((/* implicit */int) arr_53 [i_16] [i_16])), (arr_60 [i_16] [i_18]))))))));
            /* LoopSeq 1 */
            for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_58 [2U])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_18]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))))));
                    arr_72 [i_16] [i_18] [i_19] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)210)), (var_12)))) : (min((min((((/* implicit */unsigned long long int) var_6)), (var_8))), (((((/* implicit */unsigned long long int) 4181945065U)) - (var_8)))))));
                }
                var_37 |= ((((/* implicit */unsigned long long int) (((~(var_5))) - (((/* implicit */int) ((short) arr_54 [i_16 - 1])))))) < (max(((+(10909366243658360717ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_16 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))));
            }
            var_38 = ((/* implicit */short) (!(((((/* implicit */int) ((-1778962028) > (var_2)))) < (((/* implicit */int) (unsigned short)51752))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_21 = 1; i_21 < 23; i_21 += 3) 
        {
            for (unsigned int i_22 = 1; i_22 < 21; i_22 += 3) 
            {
                for (int i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    {
                        arr_80 [i_22] [i_23] [i_22] [i_23] = ((/* implicit */long long int) 113022201U);
                        /* LoopSeq 1 */
                        for (unsigned char i_24 = 0; i_24 < 24; i_24 += 3) 
                        {
                            arr_84 [i_16] [i_16] [i_16] [i_16] [(unsigned char)2] [i_22] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) max((var_3), (((/* implicit */long long int) var_13))))))));
                            arr_85 [i_16] [16ULL] [i_22] [(signed char)0] [i_24] |= ((/* implicit */unsigned int) ((long long int) ((short) (-(var_11)))));
                        }
                    }
                } 
            } 
        } 
        arr_86 [i_16] = ((/* implicit */unsigned short) -1778962044);
    }
    var_39 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))))), (min((var_12), (((/* implicit */long long int) 4181945087U))))));
    var_40 = ((/* implicit */int) (-(max((((5595646650367178053ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)196)))))))));
}
