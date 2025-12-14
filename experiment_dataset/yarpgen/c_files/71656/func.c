/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71656
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_2 + 1] [i_2] = ((/* implicit */signed char) ((max((-5033292333796580690LL), (min((var_7), (var_7))))) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-125)))));
                    arr_9 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9)))))))));
                    arr_10 [i_2] [i_1] [4LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((12955000844991947205ULL), (5491743228717604410ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((5491743228717604410ULL) < (5491743228717604410ULL))))) % (var_9))) : (((/* implicit */unsigned long long int) arr_2 [i_1]))));
                    arr_11 [i_0] [i_1] = ((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_1)), (var_7))), (((/* implicit */long long int) arr_5 [i_2 + 1] [i_2] [i_2 - 1]))))) & (((min((5491743228717604410ULL), (((/* implicit */unsigned long long int) arr_5 [6LL] [6LL] [6LL])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [0LL] [i_2 - 4] [i_2]))))));
                    var_10 = ((/* implicit */signed char) 12955000844991947205ULL);
                }
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    for (int i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 4) 
                            {
                                arr_20 [i_5] [i_5] [i_3] [i_5] [i_0] = ((/* implicit */int) max((((12955000844991947205ULL) % (5491743228717604415ULL))), (((/* implicit */unsigned long long int) var_8))));
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (12955000844991947187ULL)))) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_4] [i_4]))) >= (var_4))))))) ? ((-(((((/* implicit */_Bool) arr_0 [i_4])) ? (5491743228717604386ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_4])))))))))));
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
                            }
                            for (signed char i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                            {
                                var_13 = arr_17 [i_3] [i_3] [i_6];
                                var_14 |= ((/* implicit */signed char) ((5491743228717604414ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_3 + 3] [i_1]) != (arr_3 [i_0] [i_4])))))));
                            }
                            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                            {
                                var_15 = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [3] [i_7]))))))) != (((((/* implicit */_Bool) 12955000844991947195ULL)) ? (5491743228717604387ULL) : (((/* implicit */unsigned long long int) 0LL)))))));
                                arr_25 [i_0] [i_0] [i_3] [i_4] [(short)7] = ((/* implicit */unsigned long long int) ((((arr_12 [i_3 + 2] [i_3 - 1] [i_3 + 3] [i_4 - 1]) / (arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_4 - 2]))) != (((((/* implicit */_Bool) (signed char)-97)) ? (arr_15 [i_7] [3LL] [i_3 + 2] [i_3 + 1] [i_1] [i_0]) : (arr_15 [(signed char)14] [i_0] [i_0] [i_3 - 1] [i_4 - 1] [i_0])))));
                            }
                            /* vectorizable */
                            for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
                            {
                                arr_30 [i_0] = ((/* implicit */short) ((long long int) arr_19 [i_4 - 1] [i_4]));
                                var_16 = ((/* implicit */short) var_0);
                            }
                            var_17 = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_6 [i_3] [i_3] [i_3 + 1])) & (((/* implicit */int) arr_6 [i_3] [i_3] [i_3 + 1])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) (short)-17715);
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_2))));
}
