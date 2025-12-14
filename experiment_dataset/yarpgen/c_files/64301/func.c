/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64301
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
    var_13 ^= ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_5)) : (arr_0 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))) || ((!(((/* implicit */_Bool) var_0))))));
        var_14 ^= ((/* implicit */int) arr_0 [i_0]);
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_15 += max((((/* implicit */unsigned short) arr_3 [10ULL])), (max((min((var_3), (var_3))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_0 [i_1]))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_11 [i_1] [(_Bool)1] [i_2] [i_3] = (~((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))))));
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1])) ? (arr_6 [i_1 - 1] [i_1 + 1]) : (arr_6 [i_1 - 1] [i_1 + 1]))), (((/* implicit */unsigned long long int) ((arr_5 [i_1 + 1] [i_2]) <= (arr_6 [i_1 - 1] [i_1 + 1]))))));
                        arr_16 [i_3] [i_1] [9] [i_4] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (~(arr_0 [i_1])))))) ? (((/* implicit */int) min((((arr_13 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [9ULL] [8ULL] [i_2] [i_1]))) >= (arr_6 [i_3] [i_2])))))) : ((+(max((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26835)) >> (((((/* implicit */int) (signed char)124)) - (109)))));
                        var_18 = ((/* implicit */unsigned short) (~(arr_10 [i_1] [i_3] [i_2] [i_1])));
                        arr_19 [i_3] [i_2] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) >= (arr_5 [i_1 + 1] [i_1])));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2] [i_2])) > (((/* implicit */int) arr_9 [i_3] [i_2] [i_3] [i_5]))));
                    }
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_1 + 1] [i_2] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1]))));
                            arr_27 [i_1 - 1] [i_2] [i_1] [(_Bool)1] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            arr_32 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_10 [i_1] [i_6] [i_1] [i_1]);
                            arr_33 [i_1] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2183043041936324076ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1962878428)))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 15967940854654308739ULL))));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            arr_38 [i_1] [i_2] [i_1] [i_6] [i_9] = ((/* implicit */signed char) ((arr_12 [i_1 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_12 [(_Bool)1] [i_1 - 1])) : (((/* implicit */int) arr_12 [i_1] [i_1 - 1]))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10617619190757118781ULL)) ? (10617619190757118781ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9)))))) ? (((/* implicit */int) arr_21 [i_1] [i_1 - 1] [i_1 + 1] [(_Bool)1] [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [7ULL] [7ULL] [(unsigned short)10] [i_1])) || (((/* implicit */_Bool) arr_20 [i_1] [i_1])))))));
                            var_22 ^= ((/* implicit */signed char) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_1] [i_2] [i_3] [i_6] [i_3]))))))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) var_12);
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) var_5);
                        /* LoopSeq 4 */
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) (signed char)0);
                            arr_44 [i_11] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))) - (879048603U)));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (arr_4 [i_2])))) : (arr_30 [i_2] [i_3])));
                        }
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                        {
                            var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_1] [(signed char)3] [i_1])) : (((/* implicit */int) arr_8 [i_1 - 1]))));
                            var_28 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))) * (((/* implicit */int) arr_21 [i_1] [i_1] [(signed char)0] [i_1] [i_12]))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                        {
                            arr_50 [i_1] = ((/* implicit */unsigned short) arr_40 [(_Bool)1] [i_1]);
                            var_29 = ((/* implicit */_Bool) ((arr_40 [i_1 - 1] [i_1]) - (arr_40 [i_1 - 1] [i_1])));
                            var_30 = ((/* implicit */signed char) ((arr_36 [i_1] [i_2] [i_3] [i_10] [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))));
                            arr_51 [i_1] [i_2] [i_3] [i_1] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_31 [i_1 - 1] [(signed char)0] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) ((signed char) arr_29 [i_10] [5ULL]));
                            arr_55 [(_Bool)1] [5LL] [i_1] = ((/* implicit */_Bool) arr_43 [i_1] [i_1 + 1] [i_1] [i_1 + 1]);
                            var_32 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_36 [i_14] [i_10] [i_3] [i_2] [i_1 - 1]))))));
                        }
                    }
                }
            } 
        } 
    }
    var_33 = ((/* implicit */signed char) max((var_8), (min((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) var_2))))), (var_8)))));
    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) var_5))));
}
