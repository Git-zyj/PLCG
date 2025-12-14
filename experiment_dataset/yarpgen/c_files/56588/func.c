/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56588
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
    var_19 = ((long long int) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1 + 1] [i_0] [i_1] = max((9223372036854775807LL), (((long long int) ((var_10) % (var_18)))));
                    var_20 ^= var_4;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        for (long long int i_4 = 4; i_4 < 8; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_21 = var_15;
                                var_22 = var_6;
                                var_23 = -1LL;
                                arr_20 [i_7] = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_12)) ? (var_18) : (9223372036854775790LL))) : ((((~(-9223372036854775795LL))) >> (((9223372036854775790LL) - (9223372036854775773LL))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_8 = 2; i_8 < 7; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 1; i_9 < 6; i_9 += 2) 
                    {
                        var_24 = ((arr_9 [i_3 - 1]) % (var_9));
                        var_25 = var_10;
                    }
                    for (long long int i_10 = 2; i_10 < 7; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 3; i_11 < 9; i_11 += 2) 
                        {
                            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_11] [i_11 - 2] [i_11] [i_11 + 1] [i_11 - 3] [i_11 - 3] [i_11]))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                        }
                        arr_30 [i_3 + 1] = ((/* implicit */long long int) ((var_18) >= (arr_18 [i_3] [8LL] [i_3] [i_3 - 2] [2LL])));
                        var_28 = (+(4611686018427387903LL));
                    }
                    arr_31 [i_3] |= (~(((long long int) var_7)));
                    var_29 &= arr_4 [i_3 - 2];
                    var_30 = ((long long int) arr_29 [i_3 - 1] [i_3] [i_3] [i_4] [i_8] [i_8] [i_8 + 3]);
                }
                for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_13 = 1; i_13 < 6; i_13 += 2) 
                    {
                        var_31 = var_5;
                        var_32 &= max((min((((((/* implicit */_Bool) var_11)) ? (1099511627775LL) : (var_5))), (arr_18 [i_4 - 2] [i_4 - 1] [i_3] [i_3] [4LL]))), ((-(131071LL))));
                    }
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        var_33 = ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_27 [i_3 + 1] [i_4] [i_4 + 2] [i_4] [i_12] [i_12] [i_14]) >= (var_16))))) : (((((/* implicit */_Bool) var_2)) ? ((+((-9223372036854775807LL - 1LL)))) : (min((var_2), (9223372036854775807LL))))));
                        var_34 ^= ((((/* implicit */long long int) ((/* implicit */int) (((+(var_1))) != (1099511627775LL))))) & (min(((~(0LL))), (((0LL) & (arr_21 [i_14] [i_14]))))));
                        var_35 = ((long long int) ((((/* implicit */_Bool) ((1152903912420802560LL) ^ (4503599627370495LL)))) ? (var_9) : (max((var_14), (var_4)))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_15 = 1; i_15 < 9; i_15 += 4) /* same iter space */
                    {
                        var_36 = ((((9LL) <= (arr_40 [i_3] [i_3] [i_12] [i_15 - 1]))) ? (var_0) : ((+(var_11))));
                        arr_42 [i_15 - 1] [i_15] [i_3] [i_15 - 1] [i_15] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_36 [i_3] [i_4] [i_12] [0LL] [i_12]) : (var_0)))) ? (((long long int) 20LL)) : (((long long int) var_1)));
                        var_37 = var_2;
                    }
                    /* vectorizable */
                    for (long long int i_16 = 1; i_16 < 9; i_16 += 4) /* same iter space */
                    {
                        var_38 = 9223372036854775804LL;
                        arr_47 [i_3] [i_16] [i_12] [i_16 - 1] = ((((/* implicit */_Bool) (+(arr_36 [i_3 + 1] [i_16] [i_3 + 1] [i_16 + 1] [i_3])))) ? (((63LL) & (var_15))) : (((long long int) var_6)));
                        var_39 = (-9223372036854775807LL - 1LL);
                        /* LoopSeq 3 */
                        for (long long int i_17 = 3; i_17 < 9; i_17 += 2) /* same iter space */
                        {
                            arr_51 [i_3] [i_16] [i_4] [i_3] [i_16] [i_4] = ((var_5) << (((((arr_26 [i_3 + 1] [7LL]) + (8073691513756498572LL))) - (34LL))));
                            var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8191LL))));
                            var_41 = (~(arr_8 [i_3 - 1]));
                        }
                        for (long long int i_18 = 3; i_18 < 9; i_18 += 2) /* same iter space */
                        {
                            var_42 = ((/* implicit */long long int) max((var_42), ((+(((((/* implicit */_Bool) 0LL)) ? (var_16) : (var_11)))))));
                            var_43 = var_9;
                            var_44 |= ((((/* implicit */_Bool) var_14)) ? (((var_11) >> (((var_12) + (927128265309351310LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((63LL) >= (262143LL))))));
                        }
                        for (long long int i_19 = 3; i_19 < 9; i_19 += 2) /* same iter space */
                        {
                            var_45 = ((long long int) 8796093021184LL);
                            var_46 = var_1;
                        }
                    }
                    var_47 = ((/* implicit */long long int) min((var_47), (((((/* implicit */_Bool) ((long long int) ((9223372034707292160LL) / (var_14))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (8388608LL) : (var_1)))) ? ((~(arr_37 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2]))) : (((long long int) 0LL)))) : ((+(var_7)))))));
                    var_48 = ((((var_16) + (9223372036854775807LL))) >> (((((long long int) arr_33 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_4 - 1])) + (8472009279221980671LL))));
                }
            }
        } 
    } 
}
