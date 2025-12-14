/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99435
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
    var_15 = ((/* implicit */_Bool) var_6);
    var_16 |= ((/* implicit */_Bool) var_3);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
                        arr_11 [i_0] [i_1] [22LL] [(unsigned short)13] [i_4] [i_2 + 1] = arr_1 [12U];
                        arr_12 [i_0] [i_4] [0LL] [i_3] [(signed char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2 + 1] [i_2])) ? (((((/* implicit */_Bool) 0U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 4030140336U)))) : (((/* implicit */long long int) (+(264826959U))))));
                        arr_13 [(_Bool)1] [i_4] [i_2] [i_3] [i_4 + 2] = ((/* implicit */unsigned char) var_3);
                    }
                    var_18 = ((/* implicit */short) arr_7 [(_Bool)0] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1]);
                    arr_14 [(unsigned short)12] [i_3] [15U] = arr_2 [i_2 + 1];
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_1] [15U] [i_2] [i_2 - 1] [i_3])))))));
                }
                arr_15 [i_0] [i_0] [i_2 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0])) != (((/* implicit */int) var_7))));
            }
            for (unsigned int i_5 = 2; i_5 < 22; i_5 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_7))));
                var_21 ^= ((/* implicit */int) var_12);
                arr_18 [i_0] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_14)))));
                arr_19 [i_5] = ((/* implicit */_Bool) var_13);
            }
            for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (((-(max((((/* implicit */unsigned long long int) arr_8 [19LL] [i_1] [i_1] [i_6] [(short)5])), (arr_22 [i_0] [(short)9] [19ULL] [i_6]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
                arr_24 [i_6] [i_1] [i_0] = ((/* implicit */long long int) min(((_Bool)1), (arr_1 [i_1])));
                var_23 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) && ((!(((/* implicit */_Bool) arr_16 [i_1] [i_6 + 2] [i_0]))))));
            }
            /* vectorizable */
            for (unsigned int i_7 = 2; i_7 < 22; i_7 += 1) /* same iter space */
            {
                arr_28 [i_7] = var_12;
                arr_29 [i_0] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_7 - 2] [i_7 - 2] [i_7]))));
            }
            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4150)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)248))))) ? (min((((/* implicit */unsigned long long int) arr_4 [10U] [10U] [10U] [i_1])), (arr_22 [i_0] [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((4030140350U) ^ (var_13)))))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_5))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]))) + (arr_27 [i_0] [i_1] [i_0]))))))));
        }
        var_25 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 2701878765U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) arr_17 [(signed char)10] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_3 [i_0] [(unsigned short)12] [(unsigned char)12]))))) : (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0])), (var_3))))))));
    }
    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_34 [i_9] [i_9] = ((/* implicit */unsigned char) (unsigned short)7142);
            arr_35 [i_9] = ((/* implicit */unsigned short) arr_33 [i_9] [i_9]);
            arr_36 [i_9] [i_9] = ((/* implicit */signed char) var_13);
            arr_37 [i_9] [i_9] = ((/* implicit */unsigned char) (~(arr_23 [i_8 - 1] [i_8 + 2] [i_8 - 2] [i_8 - 1])));
        }
        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) != ((-(((/* implicit */int) (unsigned short)61426)))))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        var_27 = ((/* implicit */unsigned short) arr_4 [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 2]);
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_33 [(short)14] [8U])))) ? (((/* implicit */long long int) ((arr_3 [i_8 + 2] [i_8 - 1] [i_8]) ? (((/* implicit */int) arr_9 [i_8] [i_8 + 2] [i_8] [i_8])) : (((/* implicit */int) var_2))))) : (min((arr_33 [i_8] [(unsigned char)0]), (arr_33 [i_8] [(signed char)0]))))))));
    }
    for (unsigned char i_10 = 1; i_10 < 9; i_10 += 3) 
    {
        var_29 = ((/* implicit */unsigned long long int) max((1593088520U), (((/* implicit */unsigned int) var_3))));
        var_30 = ((/* implicit */_Bool) min((((/* implicit */int) ((9223372036854775801LL) < (-5576139412710134246LL)))), (((((/* implicit */int) arr_38 [i_10] [i_10])) + (((((/* implicit */int) arr_3 [i_10] [i_10] [(_Bool)1])) + (((/* implicit */int) (unsigned short)61426))))))));
    }
}
