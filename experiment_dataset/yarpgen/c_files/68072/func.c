/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68072
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
    var_16 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((1708174563789255770LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_6 [i_1] [i_0] = ((/* implicit */_Bool) ((arr_5 [20] [20] [i_2]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))));
                    var_18 = ((/* implicit */long long int) ((var_6) < ((+(-2147483630)))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 23; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_4] [i_4] [i_5] &= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)55492))));
                            arr_17 [i_0] [i_0] [i_1] [i_3] [i_3 - 1] [i_0] [i_5] = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_15))) | (5204720278522707597LL))));
                            var_19 |= ((/* implicit */int) ((long long int) arr_15 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_0] [i_5 + 1]));
                            var_20 = ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4] [i_5 - 1] [16] [i_5] [i_3])) ? (3307239078014181958LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [11] [i_4] [i_5 + 1] [15] [i_5] [i_3]))));
                            arr_18 [i_0] [i_1] [(unsigned char)17] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) (+(8139038465676726288LL)));
                        }
                        var_21 = ((/* implicit */int) ((unsigned short) arr_2 [i_3 + 1] [(_Bool)1] [i_3]));
                        var_22 = ((long long int) 3057045642457031068LL);
                    }
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3 - 1])))))));
                    arr_19 [i_0] [22LL] [i_3] [i_3 - 1] = (-(5940655843703833727LL));
                    arr_20 [i_3] [i_3] = ((/* implicit */signed char) -7652902732008136481LL);
                    var_24 = ((/* implicit */int) arr_2 [i_0] [i_1] [i_3 + 1]);
                }
                for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    for (int i_7 = 1; i_7 < 21; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (-5940655843703833727LL)));
                        arr_25 [i_6] [(_Bool)1] [i_6] [i_7] = ((/* implicit */int) (-(-7652902732008136481LL)));
                        var_26 = ((((/* implicit */_Bool) (-(arr_8 [i_7] [i_1] [i_7])))) ? (((((/* implicit */_Bool) arr_8 [i_1] [(signed char)22] [i_7])) ? (arr_8 [i_0] [i_1] [i_7]) : (arr_8 [i_6] [i_6] [i_7]))) : ((-(arr_8 [i_0] [i_6] [i_7]))));
                    }
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_30 [i_0] [i_0] = ((/* implicit */signed char) ((int) (~(2147483644))));
                        arr_31 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 3438850505095224961LL))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */_Bool) arr_34 [18LL] [(unsigned short)20]);
                            var_28 = 2147483647;
                            arr_36 [i_0] [i_1] [i_8] [i_8] [i_1] = ((/* implicit */signed char) arr_22 [(short)5] [i_6] [i_8] [i_6]);
                            var_29 = ((/* implicit */long long int) arr_14 [i_0] [i_1] [i_6] [i_0] [(short)18] [i_8] [i_9]);
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 22; i_10 += 1) 
                    {
                        var_30 ^= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)5))));
                        var_31 = (~(((/* implicit */int) (unsigned short)12)));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            arr_41 [i_11] [i_11] [i_6] [i_11] [(unsigned short)11] [i_0] [i_11] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)5));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) -1343534614))));
                        }
                    }
                    for (unsigned long long int i_12 = 3; i_12 < 23; i_12 += 2) 
                    {
                        arr_46 [i_0] [i_1] [4LL] [i_12] = ((/* implicit */signed char) (unsigned short)39207);
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (-(-7652902732008136479LL))))));
                    }
                    arr_47 [i_0] = ((/* implicit */signed char) (~(0)));
                }
                for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    var_34 = ((/* implicit */int) max((var_34), ((~(((/* implicit */int) max(((!(((/* implicit */_Bool) 1LL)))), (arr_5 [i_0] [i_0] [8LL]))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 2; i_15 < 22; i_15 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned long long int) var_4);
                                var_36 += ((/* implicit */int) arr_9 [2LL] [i_1] [(unsigned char)7] [3]);
                                arr_57 [i_15] [i_15] [i_1] [i_15] [22] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (signed char)101))))))));
                                var_37 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 1015808))));
                            }
                        } 
                    } 
                }
                arr_58 [i_0] [i_0] &= ((/* implicit */long long int) ((max(((+(var_1))), (-2147483638))) > (((int) (unsigned short)8196))));
                var_38 = ((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_1] [i_1]);
            }
        } 
    } 
}
