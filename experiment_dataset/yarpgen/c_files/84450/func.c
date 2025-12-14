/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84450
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_13 &= ((/* implicit */long long int) 2147483647);
        arr_3 [(short)14] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)24466)))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (arr_2 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1632147614)) ? ((-(arr_1 [i_0]))) : (-2147483647)))) : (max((max((var_7), (var_7))), (min((((/* implicit */long long int) var_8)), (-7961255526851354976LL)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1] [5])) ? (((/* implicit */long long int) var_2)) : (arr_4 [i_0] [i_1] [i_2])));
                arr_12 [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)0)) : (-2147483644)));
                var_15 = ((/* implicit */long long int) arr_7 [10] [10]);
            }
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    arr_19 [i_0] [i_0] |= (short)-12549;
                    arr_20 [i_0] [i_0] [19LL] [i_0] = (+(((((/* implicit */_Bool) 2147483647)) ? (7486683923152719402LL) : (((/* implicit */long long int) 13719823)))));
                    arr_21 [4] [0] [i_3] [3] = ((/* implicit */long long int) ((int) arr_18 [i_4 + 2] [15LL] [i_3] [i_4]));
                    arr_22 [i_4] [i_3] [i_0] [i_0] |= (((!(((/* implicit */_Bool) 17179869183LL)))) ? (((/* implicit */long long int) 1427606833)) : (arr_10 [i_4 + 2] [i_4 + 1]));
                    arr_23 [i_4] [16LL] [i_3] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) arr_8 [i_4 - 1] [(short)16] [i_4 + 1] [i_4])) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (7985955268754288266LL))));
                }
                for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_16 ^= ((/* implicit */short) ((arr_0 [i_3]) & (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    arr_26 [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((arr_6 [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                    arr_27 [i_0] [0] [0] [i_3] [i_5] |= ((/* implicit */long long int) ((int) ((long long int) arr_8 [i_5] [i_3] [i_1] [i_0])));
                }
                arr_28 [i_0] [i_0] [1LL] [1LL] &= arr_0 [i_0];
            }
            arr_29 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1])) ? (((/* implicit */long long int) ((var_8) & (var_12)))) : (arr_10 [i_0] [i_1])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_32 [i_0] = ((((/* implicit */_Bool) arr_0 [4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [16] [i_6] [16]))) : (17179869183LL));
            var_17 += ((arr_0 [i_6]) >> (((13719823) - (13719786))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                var_18 = (~(arr_1 [i_0]));
                /* LoopSeq 1 */
                for (int i_8 = 1; i_8 < 20; i_8 += 1) 
                {
                    arr_39 [i_0] [i_0] [i_0] [13LL] = arr_13 [i_0] [i_6] [i_0];
                    arr_40 [i_7] = ((/* implicit */int) (short)26313);
                }
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_4))));
                arr_41 [(short)18] [i_0] = var_2;
            }
        }
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)14)) : (((/* implicit */int) (short)-26313))));
    }
    for (int i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
    {
        arr_44 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_9] [i_9] [0] [0])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_9] [i_9] [i_9])))))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -17179869183LL)) ? (((/* implicit */int) arr_35 [i_9])) : (((int) 1250915141))))) ? ((-(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (short)2047))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
    {
        arr_48 [i_10] [i_10] = ((/* implicit */int) arr_0 [i_10]);
        /* LoopSeq 3 */
        for (int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_12 = 2; i_12 < 12; i_12 += 3) 
            {
                var_22 = arr_50 [10LL] [i_11];
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [(short)2] [i_11] [10])))))));
                var_24 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (arr_30 [i_10] [i_11] [i_12]))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5744470382071671228LL)) || (((/* implicit */_Bool) var_2))))))));
            }
            for (int i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                arr_59 [i_10] [i_10] [i_10] [i_11] |= 0LL;
                var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_34 [i_10] [i_10] [i_10]))));
                arr_60 [i_10] [i_11] [i_11] [i_11] = ((/* implicit */short) ((-13719823) < (1839136408)));
                var_26 = ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-17546)) + (2147483647))) >> (((((/* implicit */int) (short)6590)) - (6562)))))) ? (((((/* implicit */_Bool) arr_30 [(short)12] [i_11] [(short)12])) ? (var_0) : (2147483644))) : ((+(((/* implicit */int) var_11)))));
                var_27 |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_43 [i_10]))));
            }
            for (int i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                arr_63 [i_10] [i_10] [i_10] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_10] [16] [i_14])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [3] [i_10]))))) : (((/* implicit */int) (short)-1))));
                var_28 ^= var_9;
                var_29 = ((((/* implicit */_Bool) arr_6 [i_14])) ? (arr_6 [(short)8]) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                var_30 = ((/* implicit */long long int) (short)21461);
            }
            arr_64 [i_10] [i_10] = ((/* implicit */long long int) 511);
            var_31 |= (~(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))));
        }
        for (short i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (arr_14 [i_10] [i_10] [i_10])))) ? (-1248548419) : (arr_7 [(short)9] [i_15])));
            arr_67 [i_10] = ((/* implicit */long long int) var_6);
        }
        for (short i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (short)17))));
            arr_71 [i_10] [i_10] [i_10] = (short)-1;
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_10] [i_16] [i_16])) ? (0) : (((/* implicit */int) var_9)))))));
            arr_72 [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) -2985441277597656487LL))));
        }
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
    {
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_17 [i_17] [i_17] [i_17] [16LL])));
        var_36 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (arr_75 [7LL] [i_17])));
        var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_17] [i_17] [i_17] [i_17]))));
        arr_77 [15] |= ((/* implicit */short) ((3628179565313727991LL) + ((-9223372036854775807LL - 1LL))));
    }
    var_38 = ((/* implicit */long long int) var_0);
    var_39 = ((/* implicit */int) min((9223372036854775807LL), (((/* implicit */long long int) (short)0))));
    var_40 = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (1839136408) : (34703509));
}
