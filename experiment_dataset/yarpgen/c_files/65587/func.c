/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65587
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [(short)3] [i_0] = min(((-(((long long int) arr_2 [i_0] [i_1] [i_1])))), ((+(min((((/* implicit */long long int) 1977919552)), (arr_6 [i_0] [i_0]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_17 = ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3])) ? ((~(arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)14]))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_1 - 1])) ? (arr_2 [i_0] [i_0 + 1] [i_1 + 2]) : (arr_2 [i_0] [i_0 - 1] [i_1 + 1])));
                    }
                    for (short i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        var_19 += ((/* implicit */int) ((long long int) ((short) arr_10 [i_4] [i_4] [(short)4] [i_4 + 1])));
                        var_20 = ((/* implicit */unsigned int) min((var_20), ((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_4 - 2]))) & (4294967295U)))))));
                    }
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) arr_1 [i_2]);
                        arr_19 [i_0] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */short) (~(max((((/* implicit */long long int) 1977919554)), (3226588272250811895LL)))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) min(((~(6838205583609613501LL))), (((((/* implicit */_Bool) (short)137)) ? (((/* implicit */long long int) arr_2 [10LL] [i_1] [10LL])) : (arr_6 [20] [i_1])))))) ? (((((/* implicit */_Bool) ((long long int) arr_17 [i_0] [(short)2]))) ? (((((/* implicit */_Bool) (short)-138)) ? (var_6) : (((/* implicit */unsigned long long int) -9030217495047184778LL)))) : (((/* implicit */unsigned long long int) ((long long int) (short)137))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1977919541) : (3)))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (-1206840309) : (((/* implicit */int) (unsigned char)189)))) : ((~(-1977919565)))))))))));
                        arr_20 [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_17 [i_0 - 1] [i_0])))) | (((/* implicit */int) ((short) min((var_11), (((/* implicit */long long int) 1119861205U))))))));
                    }
                }
            } 
        } 
        arr_21 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))) > (3560645274U))) ? (min((arr_10 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) 261888U)))) : (((/* implicit */long long int) ((/* implicit */int) (short)6236)))));
        var_23 = ((/* implicit */long long int) arr_13 [i_0 - 1] [i_0] [i_0 + 1] [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            arr_25 [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) 9102660604255552530LL)))))));
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                arr_28 [i_0] = ((/* implicit */long long int) arr_13 [13LL] [13LL] [i_7] [(unsigned char)20]);
                arr_29 [i_0] [i_6] [i_0] [i_7] = ((/* implicit */short) ((unsigned char) -6408596635011857279LL));
            }
            for (short i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                var_24 = ((/* implicit */long long int) ((int) (-(arr_9 [i_0 - 1] [i_6] [i_8] [i_6] [i_0 - 1]))));
                arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_0 + 1]))));
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 - 2] [19])) ? (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : ((-(arr_11 [i_8] [i_0 + 1] [i_0 + 1]))))))));
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                for (int i_10 = 1; i_10 < 19; i_10 += 4) 
                {
                    {
                        arr_40 [i_0] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6]))))) || (((/* implicit */_Bool) (-(arr_11 [i_0] [i_0] [i_0]))))));
                        var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [1U] [1U] [i_9] [i_9])) << (((((/* implicit */int) (unsigned char)88)) - (87)))))) ? (arr_9 [i_0] [i_0 - 1] [i_0 - 2] [i_10 - 1] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_9] [i_10] [i_10 - 1] [i_10 + 2])))));
                    }
                } 
            } 
        }
        for (short i_11 = 2; i_11 < 18; i_11 += 3) 
        {
            var_27 += ((/* implicit */unsigned long long int) ((-1977919575) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)0] [i_0 - 1] [i_11 - 2])))))));
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */long long int) 261892U)) + (-11LL))) != (((/* implicit */long long int) ((/* implicit */int) ((261888U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))))))));
        }
        for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 2) 
        {
            arr_45 [i_0] [i_0] [i_12] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((709001733) / (((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) ((((/* implicit */int) (short)-7734)) >= (((/* implicit */int) (short)20228))))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-31082)) : (((int) (-9223372036854775807LL - 1LL)))))));
            /* LoopSeq 1 */
            for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                arr_49 [i_0] [i_0] [18U] [i_0] = ((max((((/* implicit */int) (!(((/* implicit */_Bool) 2438820083U))))), (((int) var_4)))) ^ (((/* implicit */int) ((unsigned char) arr_31 [i_0 - 2] [i_0] [i_12 + 1] [i_0]))));
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 227819427290565927LL)) ? (2184103264U) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 8794367274695688083LL)) && (((/* implicit */_Bool) arr_4 [i_13]))))) : (((/* implicit */int) arr_8 [i_0 - 1] [i_13]))))) || (((/* implicit */_Bool) var_3)))))));
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (-(((long long int) arr_9 [i_0] [i_12] [8ULL] [8ULL] [i_0])))))));
            }
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_0 [i_12]))));
        }
    }
    for (unsigned char i_14 = 3; i_14 < 21; i_14 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            arr_56 [i_14] [i_14] [i_14] = ((/* implicit */int) arr_51 [i_14]);
            arr_57 [(short)0] [i_14] [9LL] = ((/* implicit */unsigned int) (unsigned char)156);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_16 = 1; i_16 < 20; i_16 += 4) 
        {
            arr_60 [i_14] [i_16 + 2] [i_14] = ((short) (short)7761);
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                for (unsigned int i_18 = 2; i_18 < 21; i_18 += 3) 
                {
                    {
                        arr_65 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) 261861U)) ? (734322021U) : (arr_62 [i_14] [i_18 + 1] [i_14] [i_18])));
                        /* LoopSeq 1 */
                        for (long long int i_19 = 3; i_19 < 21; i_19 += 1) 
                        {
                            arr_69 [i_17] [i_17] [i_17] [i_14] = ((/* implicit */long long int) arr_55 [i_17]);
                            var_32 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_54 [0]))))));
                        }
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_20 = 3; i_20 < 11; i_20 += 2) 
    {
        for (long long int i_21 = 0; i_21 < 14; i_21 += 1) 
        {
            {
                var_33 += ((/* implicit */unsigned char) ((min(((~(arr_61 [i_20] [i_21] [i_21]))), (((/* implicit */unsigned long long int) (-(arr_6 [(unsigned char)6] [i_21])))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [(short)14])) ? (min((var_11), (((/* implicit */long long int) arr_64 [i_20] [i_20])))) : (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) -1)))))))))));
                var_34 += (unsigned char)209;
                arr_75 [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 2016817883U)) - (9223372036854775807LL)))) ? (arr_55 [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) <= (arr_36 [i_20] [i_20 + 1] [i_20])))))));
                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_16 [i_20] [i_20] [i_20] [8U])), (min((((/* implicit */unsigned long long int) ((9223372036854775782LL) / (((/* implicit */long long int) arr_47 [10] [i_21]))))), (min((274877906943ULL), (((/* implicit */unsigned long long int) 4294967291U)))))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned char) (short)7742);
    var_37 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9173))) <= (((var_13) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1162860144)) ? (22) : (var_8))))))));
}
