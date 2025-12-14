/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76465
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) << ((((-(arr_1 [i_0]))) - (2604219268137605748LL)))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_12 = ((/* implicit */signed char) min((11058714228447481955ULL), (((/* implicit */unsigned long long int) -1531203533))));
            arr_6 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))));
            arr_7 [i_1] = ((/* implicit */unsigned int) arr_1 [i_0]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 2; i_2 < 19; i_2 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2 + 3]))));
                            var_14 = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_1] [i_2] [i_3]));
                        }
                    } 
                } 
                arr_16 [i_0] &= var_4;
                var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_2 - 2] [i_2] [i_2 + 1] [i_2 + 1]))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((arr_0 [i_1 + 1] [i_1 + 1]) & (arr_0 [i_1 - 1] [i_1 + 3]))))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2] [(signed char)14] [i_1 - 1] [i_0])) & (((int) (_Bool)1)))))));
            }
            /* vectorizable */
            for (signed char i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5 + 3] [i_5 + 1])) * (((/* implicit */int) arr_13 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_5 + 2]))));
                    arr_21 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned long long int) arr_15 [i_1 + 3] [i_1 + 3] [i_5 + 2])) >= (11058714228447481939ULL));
                    var_19 ^= ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_5]);
                }
                for (int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    arr_25 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 610633113U)) : (7388029845262069660ULL)));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 7388029845262069652ULL))));
                    var_21 = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_5] [i_5 + 3]);
                }
                var_22 = ((((/* implicit */int) arr_3 [i_1 + 1])) > (((/* implicit */int) arr_24 [i_0] [i_5] [i_5] [i_5 - 1] [i_1])));
            }
            for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) arr_15 [i_9 + 2] [i_1 - 1] [i_8]);
                    arr_33 [i_0] [i_1] [i_1] [i_9 + 1] = 7388029845262069668ULL;
                    var_24 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_30 [i_1])), (min((arr_22 [i_0] [i_9 + 1] [i_1]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) >= (var_5))))))));
                }
                arr_34 [i_0] [i_0] [i_1] [i_8] = ((/* implicit */short) min((((11058714228447481939ULL) ^ (11058714228447481938ULL))), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3774))) : (7388029845262069635ULL))), (((/* implicit */unsigned long long int) arr_18 [i_1 + 3] [i_1] [i_1] [i_1]))))));
                arr_35 [i_1] [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_18 [i_1] [i_1 + 2] [i_1] [i_1 + 3])) & (((/* implicit */int) max((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */signed char) arr_11 [i_0]))))))));
            }
            var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1]))) / ((-(18225398363578689040ULL)))));
        }
        var_26 ^= ((/* implicit */unsigned short) arr_17 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (long long int i_10 = 1; i_10 < 20; i_10 += 2) 
        {
            var_27 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) arr_11 [i_10 - 1])) : (((/* implicit */int) arr_14 [i_0] [i_10] [i_0] [i_10] [i_10 - 1])))))));
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_12 = 3; i_12 < 20; i_12 += 4) 
                {
                    arr_43 [i_10] [i_0] [i_10] [i_0] = ((/* implicit */long long int) ((int) arr_38 [i_10]));
                    var_28 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_11]))));
                }
                for (signed char i_13 = 2; i_13 < 19; i_13 += 3) 
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) max((7388029845262069669ULL), (((/* implicit */unsigned long long int) (unsigned char)154)))))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7388029845262069665ULL)) || (((/* implicit */_Bool) (+(arr_5 [i_10 - 1] [i_10 + 2] [i_10 + 2]))))));
                }
                var_31 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_10 + 1] [i_10] [i_10 + 2] [i_11])) >= (((/* implicit */int) arr_23 [i_10 + 1] [i_10] [i_10 + 1] [i_10]))))), (arr_23 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10])));
                arr_46 [i_10] = min((((/* implicit */unsigned long long int) ((int) max((((/* implicit */long long int) (signed char)-100)), (-1990822707688233899LL))))), (((((/* implicit */unsigned long long int) 28388368)) * (max((7388029845262069669ULL), (11058714228447481939ULL))))));
            }
        }
        var_32 = ((/* implicit */short) (+(((((/* implicit */int) min((((/* implicit */short) var_10)), (arr_20 [i_0] [i_0] [i_0])))) / (max((((/* implicit */int) (signed char)94)), (1708005952)))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 3; i_14 < 8; i_14 += 4) 
    {
        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            {
                var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)127)), (3346878866U)))) > (max((arr_22 [i_15] [i_15] [i_15]), (-9012056248696251107LL))))))));
                /* LoopSeq 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_34 = max((arr_37 [i_16]), (((/* implicit */long long int) max((max((var_0), (arr_11 [i_15]))), (((((/* implicit */_Bool) (short)-28511)) && (((/* implicit */_Bool) arr_42 [i_14] [i_15] [i_16] [i_16] [i_16] [i_16]))))))));
                    var_35 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_30 [i_15])), (7388029845262069677ULL))), (max((((/* implicit */unsigned long long int) arr_48 [i_14 + 2] [i_14 + 2])), (((unsigned long long int) (unsigned char)128))))));
                    arr_53 [i_14] [i_15] [i_16] = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_14 - 2]))));
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2742282646208167549ULL)) ? (9012056248696251089LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_14] [i_14] [i_14] [i_14])))))) || (((/* implicit */_Bool) ((unsigned char) arr_50 [i_14] [i_14 - 2]))))))))));
                    var_37 ^= ((/* implicit */unsigned char) max((max((9012056248696251107LL), (9012056248696251091LL))), (((/* implicit */long long int) ((unsigned int) 0ULL)))));
                }
                for (short i_17 = 1; i_17 < 9; i_17 += 1) 
                {
                    var_38 = ((/* implicit */unsigned char) 9012056248696251095LL);
                    arr_56 [i_15] [i_17] = ((/* implicit */signed char) min(((unsigned short)0), (((/* implicit */unsigned short) (short)-28521))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 1) 
    {
        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            {
                arr_62 [i_18] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (((long long int) (_Bool)0))));
                arr_63 [i_18] [9] = ((/* implicit */unsigned char) max((9012056248696251091LL), (((/* implicit */long long int) (short)2206))));
                arr_64 [i_19] [i_18] = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) max((((/* implicit */unsigned short) arr_59 [i_19])), ((unsigned short)16790)))))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((int) (unsigned short)43426))))))));
                var_39 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_59 [i_18])), (7388029845262069693ULL))) >= (((/* implicit */unsigned long long int) arr_61 [i_18] [15U] [i_18]))));
            }
        } 
    } 
    var_40 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) max((var_1), (var_2)))), (7388029845262069664ULL))), (((/* implicit */unsigned long long int) var_9))));
    var_41 -= var_7;
}
