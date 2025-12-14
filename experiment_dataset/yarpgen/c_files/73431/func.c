/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73431
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (~(min(((-9223372036854775807LL - 1LL)), (min((9223372036854775807LL), (9223372036854775807LL)))))));
                                var_18 = ((/* implicit */unsigned int) var_3);
                                var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((arr_7 [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                } 
                var_20 *= ((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) min((9223372036854775807LL), (9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -9223372036854775797LL)))) : (-9223372036854775785LL))));
                            /* LoopSeq 1 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (-9223372036854775797LL) : ((-9223372036854775807LL - 1LL))))))));
                                var_23 = ((/* implicit */short) var_12);
                                var_24 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_0]), (9223372036854775792LL)))) ? (9223372036854775807LL) : (9223372036854775807LL)))) ? (max((((/* implicit */long long int) ((unsigned char) 9223372036854775807LL))), (((((/* implicit */_Bool) 9223372036854775778LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-9223372036854775807LL - 1LL)))))) : ((-9223372036854775807LL - 1LL))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) ((-9223372036854775786LL) / ((-9223372036854775807LL - 1LL)))))))))));
                            }
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775796LL))))));
                            var_28 = ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0]);
                            var_29 = ((/* implicit */unsigned char) (((+((-9223372036854775807LL - 1LL)))) > (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_5 + 1] [i_6] [i_5]))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_1 [1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 23; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_10)));
                                var_32 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10 - 2] [i_10] [i_10 + 1] [i_10]))) * (-9223372036854775789LL))) < (max((9223372036854775796LL), (-9223372036854775807LL)))));
                                var_33 = ((/* implicit */signed char) (~(min(((-9223372036854775807LL - 1LL)), (9223372036854775807LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */short) (+(min((9223372036854775796LL), ((-9223372036854775807LL - 1LL))))));
                    var_35 = ((/* implicit */signed char) -9223372036854775790LL);
                }
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(9223372036854775806LL)))) ? (9223372036854775797LL) : ((-(-9223372036854775807LL)))))));
                    /* LoopNest 2 */
                    for (short i_15 = 2; i_15 < 22; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) 9223372036854775806LL);
                                var_38 = ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_17 = 1; i_17 < 23; i_17 += 4) 
                    {
                        for (unsigned long long int i_18 = 4; i_18 < 21; i_18 += 2) 
                        {
                            {
                                var_39 = var_4;
                                var_40 = ((/* implicit */unsigned long long int) (-(min((arr_38 [i_18 - 4] [i_18 - 1] [i_18 + 2] [i_18 - 4] [i_18 + 3]), (arr_38 [i_18 + 3] [i_18 - 3] [i_18 - 2] [i_18 - 2] [i_18])))));
                                var_41 = arr_50 [i_8] [i_9] [i_14] [i_14] [i_8];
                            }
                        } 
                    } 
                }
                for (unsigned char i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (max((arr_46 [i_8] [i_9]), (9223372036854775797LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775807LL))))))));
                    var_43 = ((/* implicit */int) -9223372036854775797LL);
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        for (int i_21 = 4; i_21 < 23; i_21 += 4) 
                        {
                            {
                                var_44 = ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775803LL)) ? ((+(9223372036854775802LL))) : (max((-9223372036854775797LL), (-9223372036854775800LL)))));
                                var_45 = ((/* implicit */short) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                                var_46 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_64 [i_8] [i_9] [i_19] [i_20] [i_21 - 4] [i_21 - 2])) - (((/* implicit */int) arr_64 [i_8] [i_9] [i_19] [i_19] [i_20] [i_21 - 1]))))) ? (min((-9223372036854775807LL), (9223372036854775806LL))) : (max((((/* implicit */long long int) arr_64 [i_19] [i_9] [i_9] [i_19] [i_9] [i_21 - 3])), (-9223372036854775807LL))));
                                var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-9223372036854775791LL)))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_9] [i_9]))) % (9223372036854775806LL))))) : ((~(-9223372036854775807LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        for (short i_23 = 0; i_23 < 24; i_23 += 4) 
                        {
                            {
                                var_48 = arr_59 [i_22] [i_22] [i_22] [i_22];
                                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775784LL)) ? (-9223372036854775807LL) : (max((-9223372036854775796LL), (9223372036854775788LL)))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_24 = 0; i_24 < 24; i_24 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 24; i_25 += 1) 
                    {
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */signed char) arr_25 [i_8] [i_9] [22LL]);
                                var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (9223372036854775798LL))))));
                            }
                        } 
                    } 
                    var_52 = ((/* implicit */int) ((((max(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL)))) ^ (max((-9223372036854775784LL), (-9223372036854775788LL))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))));
                    /* LoopSeq 1 */
                    for (int i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-9223372036854775806LL) + (9223372036854775800LL)))) ? ((-9223372036854775807LL - 1LL)) : (-9223372036854775801LL)));
                        /* LoopSeq 3 */
                        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) /* same iter space */
                        {
                            var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775797LL)) && (((/* implicit */_Bool) 9223372036854775800LL))));
                            var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -9223372036854775789LL)) ? (9223372036854775784LL) : (-9223372036854775801LL))))))));
                            var_56 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -9223372036854775798LL)), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_28] [i_28 - 1] [i_28 - 1] [i_28] [i_28] [i_28 - 1]))) : ((+(9223372036854775801LL))))), (((/* implicit */long long int) var_8))));
                        }
                        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) /* same iter space */
                        {
                            var_57 = (-(var_4));
                            var_58 = ((/* implicit */unsigned char) arr_69 [i_8] [i_9] [i_24]);
                        }
                        for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) /* same iter space */
                        {
                            var_59 = ((((/* implicit */int) arr_73 [i_30] [i_9] [i_24] [7])) * (((/* implicit */int) ((9223372036854775789LL) < (((/* implicit */long long int) ((/* implicit */int) arr_82 [i_30 - 1] [i_30] [i_30] [i_30] [i_30 - 1] [i_30 - 1] [i_30])))))));
                            var_60 = ((/* implicit */signed char) (+((((!(((/* implicit */_Bool) var_13)))) ? ((~(9223372036854775788LL))) : (((((/* implicit */_Bool) arr_55 [i_8] [i_8] [i_8] [i_8])) ? (-9223372036854775788LL) : (-9223372036854775796LL)))))));
                        }
                        var_61 = ((/* implicit */unsigned short) max((-9223372036854775801LL), (-9223372036854775807LL)));
                    }
                }
                /* LoopNest 3 */
                for (long long int i_31 = 2; i_31 < 22; i_31 += 4) 
                {
                    for (int i_32 = 2; i_32 < 23; i_32 += 2) 
                    {
                        for (unsigned long long int i_33 = 2; i_33 < 21; i_33 += 1) 
                        {
                            {
                                var_62 = ((/* implicit */int) (((!(((/* implicit */_Bool) -9223372036854775798LL)))) ? (((/* implicit */unsigned long long int) (~(arr_54 [i_31 + 1])))) : (max(((+(arr_94 [i_33 + 3] [i_33 + 3] [(signed char)9] [i_33 + 2]))), (((/* implicit */unsigned long long int) arr_91 [i_8] [i_8] [i_8]))))));
                                var_63 = ((9223372036854775792LL) - (9223372036854775788LL));
                                var_64 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((9223372036854775784LL), (((/* implicit */long long int) arr_23 [i_32]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_34 = 0; i_34 < 20; i_34 += 2) 
    {
        for (unsigned long long int i_35 = 0; i_35 < 20; i_35 += 2) 
        {
            for (short i_36 = 0; i_36 < 20; i_36 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_37 = 0; i_37 < 20; i_37 += 1) 
                    {
                        for (signed char i_38 = 0; i_38 < 20; i_38 += 3) 
                        {
                            {
                                var_65 += ((/* implicit */signed char) arr_43 [1ULL] [i_35] [i_38]);
                                var_66 = ((/* implicit */short) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_37] [i_37] [i_37] [i_37])) || (((/* implicit */_Bool) 9223372036854775784LL))))), ((+(9223372036854775799LL)))))));
                                var_67 *= ((/* implicit */short) (~(9223372036854775798LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                    {
                        var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775799LL)) ? (-9223372036854775780LL) : (-9223372036854775792LL)));
                        var_69 = ((/* implicit */signed char) max((-9223372036854775797LL), ((-9223372036854775807LL - 1LL))));
                    }
                }
            } 
        } 
    } 
    var_70 = ((/* implicit */unsigned char) (-((-(var_11)))));
}
