/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56714
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) var_4)) + (1111754806))) : (((/* implicit */int) arr_0 [i_0]))));
        var_14 |= ((/* implicit */long long int) ((((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_5)))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    arr_12 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) ((1111754806) | (-1111754810)));
                    arr_13 [i_0] [i_1] [i_2] [(signed char)23] = ((/* implicit */signed char) var_2);
                }
                for (signed char i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
                {
                    var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))))) || (((/* implicit */_Bool) 2947422772U))));
                    arr_16 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */signed char) var_10);
                    var_16 = ((unsigned char) 1347544503U);
                }
                for (signed char i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
                {
                    arr_19 [i_5] [i_1] = ((/* implicit */unsigned char) ((signed char) arr_3 [i_0] [i_1] [i_5 - 1]));
                    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) != (arr_15 [0LL] [i_0] [i_2] [i_0])))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_1 [i_1]))))));
                }
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) 5497189749790235905ULL);
                    arr_23 [(unsigned char)2] [i_2] [i_6] &= ((/* implicit */short) ((((/* implicit */unsigned int) ((int) arr_17 [8LL] [i_6] [i_0] [i_1] [i_0] [(signed char)5]))) / (arr_8 [i_0])));
                    var_19 = ((/* implicit */_Bool) 4398046511103LL);
                    arr_24 [i_6] [i_0] [i_0] = ((/* implicit */signed char) ((arr_8 [9]) <= (2947422765U)));
                }
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (((long long int) (signed char)90)))))));
            }
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 22; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 2) 
                    {
                        {
                            arr_31 [(_Bool)1] [i_7] [i_7] [i_8] [i_9 + 2] [i_7] [i_0] = (i_8 % 2 == 0) ? (((((((/* implicit */int) arr_29 [i_9 - 3] [i_9 + 1] [(short)17] [i_9] [i_8] [i_9])) + (2147483647))) << (((((/* implicit */int) arr_26 [i_0] [i_1] [i_8 - 1])) - (2642))))) : (((((((((/* implicit */int) arr_29 [i_9 - 3] [i_9 + 1] [(short)17] [i_9] [i_8] [i_9])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_26 [i_0] [i_1] [i_8 - 1])) - (2642)))));
                            arr_32 [i_8] = ((/* implicit */unsigned char) var_3);
                            var_21 = ((/* implicit */signed char) (-(2947422760U)));
                        }
                    } 
                } 
                var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_10) : (var_10)));
            }
            for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                arr_36 [i_0] [i_0] [2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1347544520U)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_1] [i_1] [i_10] [i_10])))) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_10] [i_10] [i_10]))));
                arr_37 [i_10] [(signed char)9] [7] |= ((/* implicit */unsigned char) (+(arr_21 [10] [i_1] [i_10] [(unsigned short)6])));
                arr_38 [i_10] [(short)20] [(short)20] = ((/* implicit */signed char) ((short) arr_28 [i_0] [i_1] [i_10] [i_0] [i_10] [(_Bool)1]));
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    var_23 -= ((/* implicit */signed char) (-((-(((/* implicit */int) var_0))))));
                    var_24 = ((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_0] [(unsigned char)11] [i_0] [i_0]);
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) | (arr_15 [i_11] [i_10] [20U] [i_11])))) ? (arr_22 [i_0] [i_1] [12LL] [i_11]) : (((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) (signed char)75))))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) arr_14 [i_10]);
                    var_27 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) * (2947422760U)));
                    arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((2947422772U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55907)))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                {
                    arr_49 [i_13] = ((/* implicit */unsigned int) var_4);
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)55902)) > (((/* implicit */int) (unsigned short)5221))))) % (((((/* implicit */_Bool) 2947422755U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_13] [i_1] [i_0]))))));
                }
            }
            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
        }
        /* LoopNest 2 */
        for (unsigned int i_14 = 2; i_14 < 21; i_14 += 4) 
        {
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                {
                    arr_55 [i_0] [i_14] [i_14] [i_0] = ((/* implicit */short) arr_28 [(signed char)11] [(signed char)11] [i_0] [i_14] [i_15] [i_15]);
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 1347544510U))) ? ((-(672239137))) : ((-(((/* implicit */int) arr_20 [i_0] [i_0] [i_14] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 3; i_16 < 9; i_16 += 2) 
    {
        var_31 ^= ((/* implicit */unsigned int) (-(-755503120)));
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_40 [i_16 - 1] [(_Bool)1]))));
        var_33 -= ((/* implicit */signed char) ((unsigned int) (signed char)96));
        arr_59 [(unsigned char)10] &= arr_6 [i_16 + 2];
    }
    var_34 = ((/* implicit */int) var_13);
}
