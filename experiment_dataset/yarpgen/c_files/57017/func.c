/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57017
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((var_13) <= (6565479499001995685ULL))) ? ((~(arr_0 [i_0] [i_3]))) : (arr_0 [i_0] [i_0])));
                                var_15 = ((/* implicit */unsigned long long int) ((max((arr_4 [i_3] [i_0] [i_0] [i_0]), (var_9))) <= (arr_10 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] [i_4])));
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((17714155115191610296ULL) + (11881264574707555931ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] = var_11;
                                arr_20 [i_2] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) arr_18 [i_2] [i_6] [i_2] [i_1] [i_1]);
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [0ULL] [i_5 - 1] [i_5 - 1] [16ULL] [i_6]), (((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_5] [i_6] [i_5]))))) ? (((int) var_6)) : (var_5))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) (+((~(arr_16 [i_0 + 1] [i_1] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                {
                    arr_28 [i_9] [i_7] = (((-(min((17700886892131447016ULL), (((/* implicit */unsigned long long int) var_3)))))) ^ (max((((/* implicit */unsigned long long int) arr_25 [i_8] [i_7])), ((-(6565479499001995701ULL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            {
                                var_18 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6565479499001995701ULL)) ? (((/* implicit */unsigned long long int) (+(arr_23 [17ULL] [i_10])))) : (min((7831540497141982286ULL), (((/* implicit */unsigned long long int) var_3))))))) ? (min((arr_31 [i_7] [i_11] [i_11] [i_9] [i_9]), (1546738883))) : (((/* implicit */int) ((max((var_2), (((/* implicit */unsigned long long int) var_5)))) == (((/* implicit */unsigned long long int) var_12))))));
                                var_19 += 10615203576567569329ULL;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((arr_23 [i_7] [i_7]) ^ (var_5))))));
                    arr_34 [i_7] [i_8] [i_7] [i_9] &= (-(((((/* implicit */_Bool) (+(6557834210205707527ULL)))) ? (((((-1430771012) + (2147483647))) << (((((arr_26 [i_7] [i_7] [i_7] [i_9]) + (491244626))) - (7))))) : (arr_29 [i_7] [i_7] [i_9] [i_7] [0] [i_7]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        for (int i_13 = 2; i_13 < 19; i_13 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (~(((6565479499001995680ULL) ^ (((/* implicit */unsigned long long int) arr_23 [i_12] [i_13 + 2])))))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((max((6745187532471859370ULL), (11338534521922069951ULL))) & (((/* implicit */unsigned long long int) -1430771012))))));
                                arr_40 [i_7] [i_7] [i_9] [3] [i_7] = ((((/* implicit */_Bool) min((arr_29 [i_13] [i_13] [i_13] [i_13 - 2] [i_13 + 1] [i_13 + 2]), (arr_29 [i_13] [i_13] [i_13] [i_13 + 1] [i_13 - 2] [4ULL])))) ? (((/* implicit */unsigned long long int) -1555071025)) : (var_13));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (arr_38 [i_8] [i_8] [i_13] [i_8] [i_12] [i_12] [i_8])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -420586826)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -420586832)) <= (var_11))))))) || (((/* implicit */_Bool) arr_22 [i_7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
