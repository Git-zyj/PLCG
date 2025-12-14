/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56910
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_3] [i_0]))) : (((((/* implicit */_Bool) (short)-27788)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_0)))))) ? (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0])))))) : (min((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) arr_6 [i_0] [i_2] [i_0]))))), (max((((/* implicit */unsigned long long int) var_0)), (var_9)))))));
                                var_14 = ((/* implicit */_Bool) ((((_Bool) 0U)) ? (((/* implicit */unsigned long long int) arr_2 [i_2])) : (min((1665902739268027813ULL), (((/* implicit */unsigned long long int) (unsigned short)7))))));
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4 + 1] = var_4;
                                var_15 = ((/* implicit */unsigned long long int) 0U);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */long long int) (!(var_2)));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-(max((17U), (((/* implicit */unsigned int) (unsigned short)24959))))))) : (((max((16780841334441523802ULL), (var_11))) + (((((/* implicit */_Bool) var_5)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
}
