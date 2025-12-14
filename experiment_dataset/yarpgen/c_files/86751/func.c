/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86751
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
    var_14 = ((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) var_0);
                        arr_12 [i_0] [i_1] = ((unsigned long long int) arr_0 [i_2 - 3]);
                    }
                } 
            } 
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (arr_10 [(unsigned char)12] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))));
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_0] [i_1] [(short)6] [i_0])))))));
        }
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((arr_9 [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4]))));
        arr_18 [i_4] = ((/* implicit */int) ((unsigned int) arr_8 [i_4] [(unsigned short)13] [i_4]));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_9 [i_4] [12] [12] [12]))));
    }
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 7; i_6 += 1) 
        {
            arr_24 [3ULL] [i_5] [i_6] = ((/* implicit */unsigned char) 8090225513002007328ULL);
            arr_25 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_6 + 3] [i_6 + 3]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [i_7]))))) - (((((/* implicit */_Bool) arr_4 [i_5] [i_7] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_5]))) : (var_13))))))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 2; i_8 < 7; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 2) 
                {
                    arr_34 [i_8 - 1] [i_9] [i_8 - 2] [i_8] = ((((/* implicit */_Bool) (~(arr_10 [i_5] [i_7] [i_7] [i_7] [i_9])))) ? (((((/* implicit */_Bool) arr_22 [(unsigned char)6] [i_5])) ? (arr_14 [i_8] [1]) : (((/* implicit */unsigned long long int) arr_22 [i_5] [i_7])))) : (((/* implicit */unsigned long long int) ((arr_9 [i_5] [i_9] [i_9] [i_5]) ? (((/* implicit */unsigned int) arr_20 [(unsigned char)3])) : (1444368428U)))));
                    arr_35 [i_5] [i_9] = ((/* implicit */unsigned short) arr_6 [i_9] [i_9]);
                    arr_36 [i_9] [i_9] = ((/* implicit */short) ((arr_14 [i_9 + 1] [i_9]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55184)))));
                    var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(914656323)))) ? (((/* implicit */int) arr_7 [i_5] [i_7] [i_8] [i_8])) : (((/* implicit */int) arr_15 [i_5] [i_5]))));
                    var_21 *= ((/* implicit */unsigned long long int) ((arr_9 [(_Bool)1] [i_8] [i_9 - 2] [i_9 - 1]) ? ((~(((/* implicit */int) arr_9 [i_5] [i_7] [i_5] [i_5])))) : ((+(((/* implicit */int) var_7))))));
                }
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    arr_40 [3] [i_7] [i_8] [3] = ((arr_9 [i_8 - 2] [i_8] [i_8 + 1] [i_8 - 1]) ? (((/* implicit */int) (signed char)102)) : (1893224356));
                    arr_41 [i_5] [i_7] [6] [(unsigned short)7] = ((/* implicit */unsigned char) arr_0 [i_5]);
                    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_33 [i_8 + 1] [5ULL] [i_8] [i_8 - 1]))));
                }
                arr_42 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_19 [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_8 - 2] [i_8 - 1] [i_8 + 1] [(unsigned char)0]))) : (arr_26 [i_8 + 1] [i_8 + 3] [i_8 + 2])));
                arr_43 [3ULL] [i_7] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_5] [i_7]))));
                /* LoopSeq 4 */
                for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    arr_48 [(unsigned short)8] [i_7] [3] [i_7] = ((/* implicit */unsigned long long int) var_6);
                    arr_49 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_44 [i_5] [i_7] [(short)4] [i_11]))) ? (((((/* implicit */_Bool) arr_32 [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [1U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8]))) : (arr_26 [i_5] [i_8] [(signed char)6]))) : (((arr_3 [(_Bool)1] [i_7]) ? (((/* implicit */unsigned int) var_0)) : (arr_21 [i_5])))));
                }
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    var_23 = ((/* implicit */unsigned short) (~(var_5)));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_46 [i_8 + 2])))))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_38 [i_5] [i_5] [i_5] [i_8 + 3] [(_Bool)1] [i_12])))) ? ((~(arr_14 [i_5] [i_7]))) : (((/* implicit */unsigned long long int) ((int) var_12))))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_47 [i_5] [i_5] [i_5])))))))));
                    var_27 = (~(((/* implicit */int) arr_4 [i_8 + 1] [i_8] [4ULL])));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    arr_58 [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_5] [(unsigned char)7] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) var_1)) : (13447733768213399456ULL)))) ? (arr_39 [i_8] [i_8] [(unsigned char)0] [i_7] [i_5]) : (((/* implicit */int) arr_29 [i_5] [i_14]))));
                    arr_59 [i_5] [i_7] [i_8 + 3] [i_7] [i_8 + 3] = ((/* implicit */unsigned char) 4999010305496152156ULL);
                    arr_60 [(unsigned char)4] [i_8 + 2] [i_7] [i_7] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                    arr_61 [i_5] [i_8] [i_5] [i_14] [i_5] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) arr_29 [i_5] [i_14])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(unsigned short)5] [(unsigned short)5])) ? (arr_32 [i_8] [5ULL] [i_8] [(unsigned char)1]) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_5]))))) : (((((/* implicit */_Bool) (unsigned char)17)) ? (arr_16 [i_5]) : (15894034309482658247ULL)))));
                }
                arr_62 [9ULL] [i_8 - 2] = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)238))))));
            }
            for (int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    arr_68 [i_5] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_7] [i_15] [i_15] [i_16]))));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) arr_64 [9] [i_7])) + (((/* implicit */int) arr_64 [i_5] [i_7])))))));
                }
                arr_69 [i_15] [i_15] [(signed char)8] [4ULL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_7])) ? (((((/* implicit */int) (unsigned short)65516)) >> (((/* implicit */int) (unsigned char)8)))) : ((~(((/* implicit */int) (unsigned short)10))))));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10)) << (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_0 [i_15])) : (((/* implicit */int) var_7))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned long long int) arr_8 [i_5] [i_5] [i_18])), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) (unsigned short)22091))) : (((/* implicit */int) arr_75 [i_5] [i_5] [4]))));
                arr_76 [i_5] [i_5] [i_17] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2084408328U)) % (max((((/* implicit */unsigned long long int) (_Bool)1)), (1825828092831628860ULL)))));
            }
            /* vectorizable */
            for (unsigned int i_19 = 4; i_19 < 7; i_19 += 2) 
            {
                var_31 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (unsigned short)12)))));
                arr_79 [i_5] [i_17] [i_19 + 1] [i_17] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1005436111)) ? (arr_31 [(unsigned char)0] [i_19] [6ULL] [i_19 + 1] [i_5] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_5]))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
            }
            arr_80 [i_17] [i_17] [i_5] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)133))))), (((unsigned long long int) arr_4 [i_17] [i_17] [i_5])))), (arr_1 [i_17])));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_67 [9U] [i_17] [i_17] [i_5]))));
            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((~(arr_45 [i_5] [i_17] [(_Bool)1] [i_17]))) : (min((((/* implicit */unsigned long long int) var_10)), (arr_57 [i_5] [(_Bool)1] [i_5] [i_17])))))) ? ((+(((/* implicit */int) arr_30 [i_5] [(_Bool)0] [i_5])))) : (((arr_0 [i_5]) ? (((/* implicit */int) ((arr_39 [i_5] [i_5] [i_5] [i_17] [i_17]) != (((/* implicit */int) arr_77 [i_5] [i_5] [i_5] [i_17]))))) : (((((/* implicit */_Bool) arr_52 [i_5] [i_5] [(unsigned char)0])) ? (((/* implicit */int) arr_72 [i_5] [i_17])) : (-612378375)))))));
        }
        var_34 = ((/* implicit */unsigned short) var_3);
    }
    var_35 = min((((/* implicit */unsigned long long int) var_2)), (var_9));
    var_36 *= ((/* implicit */unsigned char) var_13);
}
