/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9497
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
    var_19 &= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (~(6U)))) ? (152349680672354834LL) : (max((var_6), (((/* implicit */long long int) var_7)))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_18);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [6LL] [i_0])) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */int) (signed char)-113))));
                        var_21 = ((/* implicit */int) ((arr_3 [i_3 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_2] [i_3])))));
                        var_22 = ((/* implicit */int) ((long long int) (~(-152349680672354839LL))));
                    }
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        var_23 = (~(-152349680672354834LL));
                        arr_15 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_1 [i_0])))));
                        var_24 = ((/* implicit */signed char) ((((((/* implicit */long long int) var_11)) > (-8232609914605392152LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_8 [i_0 + 1] [i_1] [i_2] [i_1])))) : (((((arr_5 [i_0] [i_1] [i_2] [i_3 - 1]) + (9223372036854775807LL))) >> (((var_12) + (2547862043163110885LL)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        var_25 *= ((/* implicit */unsigned int) arr_8 [i_0] [i_2] [i_3 - 1] [i_6]);
                        var_26 = ((/* implicit */short) (-(9223372036854775807LL)));
                    }
                    var_27 = ((/* implicit */int) arr_0 [i_0 + 3] [i_1]);
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) -492507267)) : ((~(-152349680672354853LL)))));
                }
                arr_19 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) 0U)) / (((((/* implicit */_Bool) var_13)) ? (-9223372036854775807LL) : (((/* implicit */long long int) 2147483647))))));
            }
            var_29 -= ((/* implicit */unsigned int) min(((-(((/* implicit */int) (signed char)21)))), (var_10)));
            var_30 -= ((/* implicit */unsigned int) arr_13 [i_0 + 2] [18LL] [i_0] [i_0 - 1] [i_1]);
        }
        for (int i_7 = 4; i_7 < 20; i_7 += 3) 
        {
            arr_22 [i_0] [i_0] [i_7 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7]))))) : (((((/* implicit */_Bool) (short)32678)) ? (2147483647) : (((/* implicit */int) (short)30250))))));
            arr_23 [i_0] [i_7 - 3] [i_7] = ((/* implicit */unsigned int) -8885266996552718296LL);
            arr_24 [i_0] [i_0] [i_0] = var_13;
        }
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (+(max((0LL), (var_2))))))));
        var_32 = ((/* implicit */short) ((long long int) ((unsigned int) ((((((/* implicit */int) (short)-25666)) + (2147483647))) >> (((((/* implicit */int) (short)-4554)) + (4566)))))));
    }
    for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        var_33 = ((/* implicit */long long int) var_16);
        arr_27 [i_8] = arr_26 [i_8];
        var_34 = ((/* implicit */int) (-(9223372036854775807LL)));
    }
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    var_35 = ((/* implicit */int) ((max((((/* implicit */int) ((short) 2835576097U))), (max((132118058), (2147483647))))) > (max((((/* implicit */int) (signed char)-43)), (((((/* implicit */_Bool) var_1)) ? (arr_20 [20] [i_10]) : (((/* implicit */int) (signed char)112))))))));
                    arr_35 [0LL] = ((/* implicit */short) (+(arr_21 [i_9] [i_10] [i_11])));
                }
                for (long long int i_12 = 3; i_12 < 17; i_12 += 3) 
                {
                    var_36 = ((((/* implicit */_Bool) max((((/* implicit */int) min((arr_16 [i_9] [i_9] [i_9] [18LL] [i_9] [i_9] [i_12]), (arr_38 [i_10] [i_10] [i_12])))), ((~(var_16)))))) ? ((+(max((((/* implicit */unsigned int) arr_20 [i_12] [i_12])), (var_1))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_9] [i_9] [i_12] [i_9]))))));
                    var_37 = ((/* implicit */short) arr_26 [i_9]);
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        arr_42 [10LL] [i_12] [i_12] [i_9] = (~(((long long int) min((arr_16 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_12]), (arr_0 [i_9] [i_10])))));
                        /* LoopSeq 3 */
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
                        {
                            var_38 = max((((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_12] [i_12] [i_12] [i_12 - 2] [i_12 - 2] [i_12] [i_12]))))), (max((arr_13 [i_9] [i_12] [i_14] [i_12 - 2] [i_12 - 2]), (arr_13 [i_9] [i_12] [i_12 + 1] [i_12 - 2] [i_14]))));
                            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_12 - 1] [i_10] [i_12 - 1] [i_12])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)25))) > (var_14))))))))));
                            var_40 = max((-8885266996552718296LL), (((/* implicit */long long int) (short)19041)));
                            arr_46 [i_9] [i_14] [(short)9] [i_12] [13LL] = ((/* implicit */int) ((((/* implicit */_Bool) 2924856933U)) ? (((/* implicit */long long int) (~(((((/* implicit */int) arr_33 [i_10] [i_12] [i_14])) ^ (((/* implicit */int) (signed char)-118))))))) : (arr_37 [i_12] [i_12 - 2] [i_12 - 2] [i_12 - 2])));
                            arr_47 [i_9] [i_12] = ((/* implicit */int) 28U);
                        }
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            arr_50 [i_15] [i_12] [i_12 - 3] [i_12 - 3] [i_15] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_11 [i_9] [i_10] [i_12] [i_13] [i_15])) ? (1102498453) : (((/* implicit */int) (signed char)-45))))));
                            arr_51 [i_12] [i_10] [i_10] [i_12] [i_12] [i_10] = ((((/* implicit */_Bool) arr_9 [i_12] [i_12 - 2] [i_12 - 1])) ? (arr_9 [i_12] [i_12 + 1] [i_12 + 1]) : (arr_9 [i_12] [i_12 - 3] [i_12 - 3]));
                        }
                        for (unsigned int i_16 = 1; i_16 < 16; i_16 += 2) 
                        {
                            var_41 = ((/* implicit */long long int) ((4294967289U) >> (((-1LL) + (30LL)))));
                            var_42 = ((/* implicit */signed char) -1LL);
                            var_43 = ((/* implicit */signed char) 0);
                        }
                    }
                }
                var_44 += ((/* implicit */unsigned int) min((((arr_37 [8LL] [i_9] [i_9] [i_9]) + (((/* implicit */long long int) ((/* implicit */int) (short)-13568))))), (-152349680672354834LL)));
                arr_56 [5U] = ((/* implicit */unsigned int) (-(((long long int) arr_54 [4U] [i_10] [i_10]))));
                var_45 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((arr_39 [i_9] [i_9] [14LL] [i_9]) + (2147483647))) >> (((((/* implicit */int) var_5)) - (16453))))))))));
                /* LoopSeq 3 */
                for (signed char i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    arr_61 [i_17] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_54 [i_17] [i_10] [i_17])))) ? (max((((/* implicit */long long int) -2147483642)), (-1748525855115706408LL))) : (((((/* implicit */_Bool) ((var_1) - (3U)))) ? (((((/* implicit */_Bool) arr_1 [i_17])) ? (arr_5 [i_17] [i_9] [i_17] [i_10]) : (((/* implicit */long long int) 132118079)))) : (((/* implicit */long long int) 2147483647))))));
                    var_46 ^= ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_9] [i_9]))))), ((-(((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_17] [i_10] [i_9]))) : (2924856938U)))))));
                }
                for (unsigned int i_18 = 0; i_18 < 18; i_18 += 3) /* same iter space */
                {
                    arr_64 [i_18] [i_18] [i_18] [i_9] = ((/* implicit */long long int) max((((int) arr_14 [i_9] [5LL] [i_9] [i_10] [i_18] [5LL] [i_18])), (((/* implicit */int) ((((/* implicit */int) arr_14 [i_9] [i_9] [18] [i_10] [i_18] [i_18] [i_18])) > (((/* implicit */int) var_5)))))));
                    var_47 = ((((/* implicit */_Bool) arr_29 [i_9] [i_10])) ? ((~(arr_29 [i_9] [i_10]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_9] [i_9]))))));
                    var_48 ^= ((/* implicit */long long int) arr_43 [i_9] [12LL] [i_9] [i_9] [i_10] [(signed char)0] [12LL]);
                    arr_65 [i_9] [i_9] [i_10] [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                }
                for (unsigned int i_19 = 0; i_19 < 18; i_19 += 3) /* same iter space */
                {
                    var_49 = ((/* implicit */unsigned int) -9223372036854775802LL);
                    var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((((/* implicit */_Bool) arr_45 [i_9] [(short)6] [i_9] [i_9])) ? (1423834304) : (((/* implicit */int) arr_45 [i_9] [(short)16] [i_9] [i_9])))) : (arr_28 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((0), (174651347)))))))) : (((((/* implicit */_Bool) -8229758400286562367LL)) ? (0LL) : (-9223372036854775802LL))))))));
                }
            }
        } 
    } 
}
