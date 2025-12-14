/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92846
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [(signed char)2] = arr_1 [i_0];
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_10))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_14 = ((unsigned long long int) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((18014398509481728LL) & (2199023255551LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [14] [14])))));
        var_15 = ((/* implicit */long long int) 786972082);
        var_16 = ((/* implicit */signed char) ((int) (unsigned char)236));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_17 = ((/* implicit */int) (~(32U)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                arr_11 [i_1] [i_2] [5U] = ((/* implicit */unsigned short) ((var_9) > (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (-9223372036854775779LL))))));
                var_18 = ((long long int) var_5);
                var_19 -= ((/* implicit */_Bool) (~(9223372036854775776LL)));
                var_20 -= ((arr_5 [i_3] [i_1]) / (arr_5 [i_1] [i_2]));
            }
        }
        for (int i_4 = 3; i_4 < 19; i_4 += 3) 
        {
            arr_15 [i_4] [i_4] [i_4] = ((/* implicit */int) min((var_6), (((/* implicit */unsigned long long int) ((int) arr_10 [i_4] [i_4 + 1] [i_4 + 2])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_3 [i_4] [7]))));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 4; i_6 < 18; i_6 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_2))));
                    var_23 += ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) arr_7 [i_4 - 2] [i_5 + 1])), (arr_5 [i_4 - 2] [i_5 + 1])))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_7 [i_1] [8LL]))));
                    var_25 = ((/* implicit */signed char) ((long long int) min((((/* implicit */long long int) ((arr_16 [i_4] [4LL] [i_5]) != (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (arr_16 [i_4] [i_4 - 2] [i_5 - 2]))));
                }
                for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((_Bool) (+(min((((/* implicit */long long int) (unsigned char)19)), (-9223372036854775770LL))))));
                        arr_27 [i_4] [i_5 + 3] [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_8 - 1]))))), (min((((/* implicit */long long int) (unsigned short)35518)), ((-9223372036854775807LL - 1LL))))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [9LL] [i_7] [9LL] [9LL] [i_9]))) + (max((arr_18 [i_1] [6LL] [i_1] [i_1]), (arr_18 [i_4] [i_4] [i_1] [i_1]))))))));
                        var_28 = ((/* implicit */signed char) arr_20 [i_1] [i_4] [i_5 + 1] [i_4] [i_9]);
                        arr_30 [i_4] [i_7] [i_7] [i_5 - 1] [i_4] [i_4] = ((/* implicit */int) (((+(((unsigned long long int) var_0)))) % (((/* implicit */unsigned long long int) arr_6 [i_9]))));
                    }
                    for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) var_11);
                        arr_33 [i_1] [i_4] [i_7] [i_1] [(_Bool)1] [i_4] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))), (arr_23 [i_7])));
                    }
                    var_30 = ((/* implicit */unsigned char) ((long long int) ((unsigned short) var_0)));
                }
                arr_34 [i_4] [i_5] = ((/* implicit */unsigned char) arr_10 [i_4 + 1] [i_5] [i_5 + 1]);
            }
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
    {
        arr_39 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_20 [(unsigned short)3] [i_11] [i_11] [(unsigned short)3] [i_11]))))) % (var_10)));
        arr_40 [7ULL] [i_11] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) arr_3 [(unsigned char)5] [(_Bool)1])));
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((arr_25 [i_11] [12ULL] [i_11] [i_11] [i_11] [i_11]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_3)) - (7401))))))));
        var_32 ^= ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) / (9223372036854775779LL));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 1) 
    {
        arr_43 [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_12 + 1])) ? (var_8) : (var_2)));
        var_33 = ((/* implicit */unsigned char) var_4);
    }
    for (long long int i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_15 = 1; i_15 < 14; i_15 += 3) 
            {
                for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    {
                        arr_52 [i_13] [i_13] = ((/* implicit */int) var_11);
                        /* LoopSeq 4 */
                        for (long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((int) arr_13 [i_13] [i_13] [(unsigned short)10]));
                            var_35 -= ((/* implicit */long long int) arr_31 [i_15] [i_14] [i_15 - 1] [(unsigned short)6] [(_Bool)0] [12ULL]);
                        }
                        for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            var_36 = ((/* implicit */signed char) min((9223372036854775784LL), (((/* implicit */long long int) 598228677U))));
                            arr_61 [(unsigned short)1] [i_13] [i_16] [i_18] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((arr_25 [5LL] [(unsigned short)3] [i_13] [i_13] [(unsigned char)20] [i_13]) - (((/* implicit */long long int) var_4))))))));
                            arr_62 [i_13] [i_13] [i_15] [i_13] [i_13] = ((/* implicit */long long int) var_7);
                        }
                        for (long long int i_19 = 0; i_19 < 17; i_19 += 4) 
                        {
                            arr_67 [i_13] [i_13] [i_13] [i_15] [6ULL] [i_13] = ((/* implicit */unsigned short) arr_8 [15LL] [i_14] [i_14]);
                            arr_68 [i_13] [i_14] [i_15 + 2] [i_19] [i_19] [i_13] &= ((/* implicit */int) max((((/* implicit */long long int) ((-6002791881462471684LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) -6002791881462471684LL))))))))), (min(((~(var_12))), (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_13] [(signed char)9]))) ^ (-9223372036854775779LL)))))));
                            var_37 = ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11)));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_38 = arr_10 [i_13] [i_16] [i_15 + 2];
                            arr_71 [i_13] = ((long long int) ((arr_23 [i_15 + 3]) <= (arr_23 [i_15 + 3])));
                        }
                        var_39 *= ((/* implicit */_Bool) var_7);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 4) 
                        {
                            arr_75 [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((+(var_2))), (((/* implicit */unsigned long long int) arr_8 [i_15 + 3] [i_15 + 3] [i_13])))))));
                            arr_76 [16LL] [i_14] [(unsigned char)8] [(_Bool)1] [i_21] [i_21] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_64 [i_15 - 1] [i_13] [9ULL] [i_13] [i_15 + 2]), (arr_64 [i_15 + 2] [i_13] [12LL] [i_13] [i_15 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))) : (((((/* implicit */_Bool) arr_13 [i_15 + 3] [i_15 - 1] [i_13])) ? (arr_13 [i_15 + 1] [i_15 + 1] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                            var_40 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((arr_56 [i_13] [i_13]) | (((/* implicit */int) arr_29 [i_13]))))), (var_1))), (((/* implicit */unsigned long long int) arr_73 [(unsigned short)9] [i_21] [(unsigned short)9] [i_15] [i_14] [12LL]))));
                        }
                        for (unsigned char i_22 = 0; i_22 < 17; i_22 += 4) 
                        {
                            arr_79 [i_13] [i_22] [i_13] [i_13] [i_13] [i_22] [14] &= ((unsigned short) arr_77 [8] [i_15] [i_15 + 1] [i_14] [8]);
                            var_41 = ((/* implicit */unsigned short) min((min((var_6), (((/* implicit */unsigned long long int) arr_25 [i_13] [i_22] [19LL] [i_13] [i_15 + 2] [19ULL])))), (((/* implicit */unsigned long long int) ((arr_49 [i_13] [(unsigned short)2] [i_14]) >= (arr_49 [i_13] [i_14] [i_15]))))));
                        }
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_32 [i_14])), (min((((unsigned long long int) arr_55 [i_13] [i_14] [(unsigned short)10] [(unsigned short)4] [6])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_13])) >= (((/* implicit */int) var_0)))))))));
        }
        var_43 = ((/* implicit */int) arr_5 [i_13] [i_13]);
        arr_80 [i_13] [i_13] = arr_65 [i_13] [i_13] [i_13] [(unsigned char)15] [i_13];
    }
    var_44 = ((/* implicit */long long int) var_11);
    var_45 = ((/* implicit */int) max((((/* implicit */long long int) ((int) min((var_1), (((/* implicit */unsigned long long int) var_3)))))), (((-8451246010408536205LL) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
}
