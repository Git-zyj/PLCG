/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76726
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((arr_2 [i_0 + 1]) + (2147483647))) >> (((var_5) - (969854390)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) (~((+(var_17)))));
            /* LoopSeq 4 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_3 - 1] [i_3 + 1] [0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_1]) : (((((/* implicit */_Bool) 5673749817777518664LL)) ? (arr_10 [i_3]) : (arr_9 [i_0] [i_0] [(signed char)8] [i_2] [(short)3])))));
                    var_21 = ((/* implicit */short) -2072906201);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_22 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_11)) == (((((/* implicit */_Bool) (unsigned char)142)) ? (331822106310435777ULL) : (((/* implicit */unsigned long long int) -1098827647))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) var_0);
                    }
                }
                arr_16 [4] [i_2] = var_15;
                var_23 = ((/* implicit */unsigned char) 331822106310435771ULL);
            }
            for (long long int i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) ((int) arr_6 [i_1 + 2] [i_1] [i_1]));
                var_25 ^= ((/* implicit */int) ((var_16) >= (((/* implicit */unsigned long long int) var_17))));
            }
            for (signed char i_6 = 2; i_6 < 16; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((((/* implicit */_Bool) 716973346)) ? (var_14) : (((/* implicit */long long int) -2072906216))))));
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (short)-13788))));
                    var_28 = ((/* implicit */int) ((var_8) / (((/* implicit */long long int) arr_4 [i_0 + 1]))));
                    arr_26 [i_0] [i_0] [i_1] [i_6] [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_18));
                }
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        var_29 = 1921677239;
                        var_30 = (~(var_19));
                        var_31 = ((/* implicit */int) max((var_31), (var_11)));
                    }
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        arr_33 [0ULL] [i_1 + 1] [i_8] [i_1 + 1] [i_8] [i_8] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                        var_32 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) != (((/* implicit */int) (unsigned char)2)))) ? (((var_7) / (var_2))) : (((/* implicit */int) (unsigned short)28736))));
                        arr_34 [i_0] [i_1 + 1] [i_6] [i_1 + 1] [i_10] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) - (var_2)));
                        arr_35 [i_0] [i_1] [i_6] = ((/* implicit */unsigned long long int) (-(-1227655157)));
                    }
                    arr_36 [i_6] [i_1] [i_6] [i_8] = (unsigned char)243;
                }
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 15; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) 1208733166013573585LL)))));
                            var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)132))));
                            var_35 = ((/* implicit */int) (unsigned char)240);
                        }
                    } 
                } 
                arr_42 [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0] [i_6] [i_0 + 2] [i_0 + 2])) ? (var_18) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_1] [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) var_10)))))));
                var_36 = ((int) arr_4 [i_1 - 1]);
            }
            for (signed char i_13 = 2; i_13 < 16; i_13 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */int) var_0);
                /* LoopNest 2 */
                for (unsigned char i_14 = 1; i_14 < 16; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */int) min((var_38), (((((/* implicit */_Bool) arr_13 [14] [14] [i_0 + 1] [i_0 + 1] [i_1 + 2])) ? (((/* implicit */int) (unsigned char)22)) : (var_11)))));
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (-(16711680))))));
                        }
                    } 
                } 
                arr_52 [i_0] [i_0] [5] = ((/* implicit */int) var_12);
            }
            var_40 = ((/* implicit */unsigned char) ((arr_1 [i_1 - 1]) - (arr_1 [i_1 - 2])));
            arr_53 [i_0 - 1] = ((/* implicit */unsigned short) ((int) ((unsigned char) var_19)));
        }
        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) 1227655135))));
        /* LoopSeq 2 */
        for (long long int i_16 = 2; i_16 < 16; i_16 += 1) 
        {
            var_42 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_16 - 2] [i_16] [i_0 + 1] [i_16] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_14)));
            var_43 = ((/* implicit */int) var_0);
        }
        for (int i_17 = 0; i_17 < 17; i_17 += 4) 
        {
            var_44 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_17])));
            var_45 = ((/* implicit */unsigned long long int) var_13);
            var_46 = ((/* implicit */int) 13980422248783424913ULL);
            arr_60 [i_0] [i_17] = var_17;
        }
    }
    /* vectorizable */
    for (unsigned char i_18 = 2; i_18 < 15; i_18 += 1) /* same iter space */
    {
        var_47 = ((/* implicit */int) max((var_47), (((((/* implicit */_Bool) (unsigned char)150)) ? (var_9) : (((var_15) - (-145230266)))))));
        var_48 = ((/* implicit */int) var_12);
        var_49 = ((/* implicit */int) max((var_49), (var_11)));
        var_50 = ((/* implicit */unsigned char) ((signed char) var_9));
        /* LoopNest 2 */
        for (int i_19 = 3; i_19 < 16; i_19 += 1) 
        {
            for (short i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 17; i_21 += 2) 
                    {
                        for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 3) 
                        {
                            {
                                var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) ((unsigned short) arr_25 [i_22] [i_22] [i_22] [i_19 - 3])))));
                                arr_73 [i_18 - 2] [5] [5] = ((/* implicit */unsigned char) var_7);
                            }
                        } 
                    } 
                    arr_74 [i_18 + 1] [4] [i_18 + 2] [i_18] = ((((/* implicit */int) (unsigned char)90)) - (arr_64 [i_18] [i_20]));
                    arr_75 [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) var_7);
                }
            } 
        } 
    }
    var_52 = ((int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned char)220)))) : (((((/* implicit */int) (unsigned char)83)) / (2147483638)))));
}
