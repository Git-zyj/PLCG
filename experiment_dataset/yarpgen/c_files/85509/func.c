/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85509
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
    var_18 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) var_0);
        var_20 = ((/* implicit */short) 0ULL);
        var_21 = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)59992)) && (((/* implicit */_Bool) 2872648341U)))) ? (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (max((arr_1 [i_0]), (((/* implicit */long long int) (unsigned short)5534)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) ((long long int) (unsigned short)13396));
                        var_23 = ((/* implicit */short) ((int) var_2));
                        var_24 |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)13396)) - (((/* implicit */int) (unsigned short)64068))));
                        var_25 = ((/* implicit */long long int) arr_10 [i_1 - 1] [i_2 - 1] [i_2] [i_4]);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((unsigned long long int) ((arr_9 [i_1] [i_1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    }
    for (unsigned int i_5 = 4; i_5 < 10; i_5 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (min((((((/* implicit */_Bool) 1503954034U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5 - 3] [i_5]))) : (((((/* implicit */_Bool) -1400332572791867244LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))))), (((/* implicit */unsigned int) arr_8 [i_5 + 1] [i_5] [i_5]))))));
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 10; i_6 += 3) 
        {
            for (short i_7 = 2; i_7 < 8; i_7 += 4) 
            {
                {
                    var_28 = ((/* implicit */int) ((((arr_1 [i_6 + 1]) > (arr_1 [i_6 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) : (var_9)));
                    var_29 = ((/* implicit */short) arr_0 [i_5]);
                    var_30 = ((/* implicit */unsigned short) ((int) (signed char)127));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_8 = 4; i_8 < 10; i_8 += 4) /* same iter space */
    {
        var_31 += ((/* implicit */_Bool) arr_21 [i_8 + 1] [i_8 - 3] [i_8 - 2]);
        /* LoopSeq 4 */
        for (short i_9 = 1; i_9 < 9; i_9 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                for (unsigned int i_11 = 1; i_11 < 10; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) arr_2 [i_8]);
                            var_33 = ((/* implicit */unsigned short) ((arr_34 [i_11] [i_11 - 1]) + (((/* implicit */int) var_6))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_9 + 2])) || (((/* implicit */_Bool) arr_22 [i_9 + 1]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (long long int i_13 = 3; i_13 < 10; i_13 += 3) 
            {
                var_35 = ((/* implicit */unsigned int) ((int) var_7));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 18446744073709551602ULL)) ? (arr_11 [i_14] [i_13] [i_14] [i_15]) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_15] [i_14])))));
                            var_37 += ((/* implicit */short) arr_29 [(_Bool)1] [(_Bool)1] [i_14] [(_Bool)1]);
                            var_38 = ((/* implicit */unsigned int) 8017711756529379892LL);
                        }
                    } 
                } 
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) var_4))));
                /* LoopNest 2 */
                for (short i_16 = 4; i_16 < 9; i_16 += 3) 
                {
                    for (short i_17 = 0; i_17 < 11; i_17 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */signed char) (!(arr_37 [i_9 - 1] [i_9] [i_9 - 1] [i_13] [i_13 - 3])));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_8] [i_8 - 4] [i_8] [i_8 + 1] [i_17])) ? (((/* implicit */int) arr_36 [i_16 - 1] [i_16 - 3] [i_16 + 2] [i_16 - 4])) : (((/* implicit */int) arr_35 [10LL] [i_9] [i_9]))));
                            var_42 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8] [i_9] [(signed char)2] [i_8] [(short)4] [2U])))))) <= (-6005198997204409852LL)));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 2) 
            {
                var_43 = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_0)))));
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    for (unsigned short i_20 = 2; i_20 < 8; i_20 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))));
                            var_45 += ((/* implicit */long long int) var_0);
                            var_46 = ((/* implicit */unsigned long long int) arr_16 [i_18]);
                            var_47 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (100642134) : (((/* implicit */int) (unsigned short)59998))))));
                        }
                    } 
                } 
            }
            for (signed char i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                var_48 = ((/* implicit */short) ((((/* implicit */long long int) var_7)) / (1400332572791867243LL)));
                var_49 = ((/* implicit */short) var_3);
                var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_9])) || (((/* implicit */_Bool) var_17))));
            }
            for (unsigned short i_22 = 0; i_22 < 11; i_22 += 4) 
            {
                var_51 = ((/* implicit */int) ((unsigned short) arr_33 [9ULL] [i_9 + 2] [i_22] [i_8] [i_9 + 2]));
                var_52 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_9])))))));
            }
        }
        for (short i_23 = 1; i_23 < 9; i_23 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_24 = 0; i_24 < 11; i_24 += 3) 
            {
                var_53 = ((/* implicit */long long int) ((arr_52 [i_8] [i_8] [i_23 - 1] [i_23] [(unsigned char)7]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))));
                var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2791013258U)) + (arr_53 [i_8 - 4])));
            }
            var_55 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
            var_56 = ((/* implicit */unsigned int) var_10);
            var_57 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
        }
        for (short i_25 = 1; i_25 < 9; i_25 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_26 = 0; i_26 < 11; i_26 += 4) 
            {
                for (long long int i_27 = 0; i_27 < 11; i_27 += 2) 
                {
                    {
                        var_58 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_8 + 1] [i_25] [i_26] [i_27] [i_27] [i_27])) + (arr_4 [i_27] [i_26])));
                        var_59 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -284549799)) ? (var_15) : (((/* implicit */unsigned long long int) (~(9223372036854775804LL))))));
                        var_60 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_54 [i_25 + 2]))));
                    }
                } 
            } 
            var_61 = ((/* implicit */long long int) var_0);
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            var_62 = arr_18 [i_8 - 4];
            var_63 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_40 [i_8] [(unsigned char)2] [i_8 + 1] [i_28] [i_28] [3])))));
        }
    }
    var_64 = ((/* implicit */_Bool) ((1538969937U) % (((((/* implicit */_Bool) (unsigned short)54565)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    var_65 ^= ((/* implicit */unsigned short) var_8);
}
