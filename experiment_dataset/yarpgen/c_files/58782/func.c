/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58782
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
    var_15 = ((/* implicit */unsigned int) (+(((var_14) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (780406146U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (var_10)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_16 += ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((arr_4 [i_1]) << (((arr_4 [i_1]) - (4002496073528294546ULL))))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_8 [i_2] [i_2] = (((+(780406148U))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))));
            var_18 += ((/* implicit */long long int) var_7);
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (_Bool)1))));
            var_20 |= ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_0)))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13893189571697606804ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_6 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (((((/* implicit */_Bool) 4553554502011944811ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_5 [i_1] [(signed char)4] [i_1]))))))));
        }
        for (unsigned int i_3 = 3; i_3 < 18; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4 - 1] [i_3] [i_4 - 1] [i_3 - 2]))) | (((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))))));
                            var_23 = ((/* implicit */long long int) var_13);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_1] [i_1] = ((/* implicit */_Bool) 13870342622458545166ULL);
                            arr_25 [i_3 - 3] [i_3 - 3] [i_5] = ((/* implicit */signed char) var_14);
                            var_24 = ((arr_22 [i_4 + 1] [i_4] [i_4 + 1] [(signed char)16] [i_4] [i_4 - 1] [i_4 + 2]) ? (arr_11 [i_3 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3 - 1] [i_4 + 1] [i_4 + 2] [i_5]))));
                            arr_26 [1ULL] [i_5] [(signed char)7] [i_4] [i_3 - 3] [i_1] = ((/* implicit */_Bool) arr_20 [0LL] [i_4]);
                            var_25 = ((/* implicit */signed char) min((var_25), (arr_10 [i_5])));
                        }
                        arr_27 [i_5] [i_4] [i_3] [i_4] [i_3] [i_1] = ((/* implicit */signed char) 13893189571697606822ULL);
                        arr_28 [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (signed char)18));
                        var_26 ^= arr_15 [i_1] [i_3] [i_1] [i_5];
                        var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42)))))) ? ((~(arr_16 [i_1] [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [6LL] [4ULL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-81)))))));
                    }
                } 
            } 
            arr_29 [i_3] = ((/* implicit */unsigned char) var_13);
        }
        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            arr_32 [i_8] = ((unsigned long long int) arr_31 [i_8]);
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (var_13)));
        }
        var_29 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1] [i_1]))));
        /* LoopNest 3 */
        for (long long int i_9 = 3; i_9 < 17; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                for (signed char i_11 = 4; i_11 < 18; i_11 += 4) 
                {
                    {
                        arr_41 [i_1] [i_9] [i_10] [i_11 - 2] = ((/* implicit */signed char) ((9223372036854775807LL) / (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_1] [i_1])))))));
                        var_30 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_10] [i_11 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (3907241729881629062ULL)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_13 = 2; i_13 < 18; i_13 += 1) 
        {
            arr_49 [(unsigned char)14] [i_13 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)81))));
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                for (long long int i_15 = 2; i_15 < 16; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) (signed char)37);
                            var_32 -= ((unsigned long long int) ((var_10) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_15 + 3] [i_15])))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned char) var_7);
            var_34 -= max((((((/* implicit */_Bool) var_7)) ? (((var_4) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : ((+(4294967295U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_37 [(_Bool)1] [i_13] [i_13])) : (((/* implicit */int) arr_53 [i_12] [i_13]))))) ? (((/* implicit */int) arr_52 [i_13 - 2] [i_13 + 1])) : (((/* implicit */int) (!(arr_55 [i_12] [14U] [i_12] [i_12] [(_Bool)1]))))))));
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (+(max((((unsigned int) arr_39 [i_12] [i_12] [i_12] [i_17] [(signed char)2] [12ULL])), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))))))))));
            var_36 = ((/* implicit */unsigned char) var_2);
            arr_62 [(signed char)4] [i_17] = ((/* implicit */long long int) arr_17 [i_12] [i_17] [i_12] [i_12]);
        }
        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 1) 
        {
            arr_65 [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_18])) ? (var_9) : (((((/* implicit */_Bool) arr_38 [i_12] [i_12] [i_12] [i_18] [i_18])) ? ((~(780406147U))) : (max((var_1), (((/* implicit */unsigned int) (signed char)100))))))));
            var_37 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((14951125480527501762ULL), (((/* implicit */unsigned long long int) min((-5205951977438747866LL), (((/* implicit */long long int) arr_47 [i_12] [8U] [7U])))))))) ? (-2324452933076132140LL) : (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_2)), (arr_16 [i_12] [i_18]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)92)) || (((/* implicit */_Bool) arr_4 [i_12]))))))))));
        }
        arr_66 [(_Bool)1] |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_38 [(unsigned char)11] [i_12] [4U] [i_12] [(signed char)16])) ? (arr_38 [17ULL] [(signed char)9] [i_12] [i_12] [i_12]) : (arr_38 [4ULL] [i_12] [i_12] [i_12] [i_12])))));
    }
}
