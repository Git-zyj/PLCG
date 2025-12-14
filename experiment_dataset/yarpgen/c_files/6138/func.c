/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6138
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) arr_0 [i_1]);
                arr_5 [i_0] [12ULL] = ((/* implicit */unsigned int) ((arr_1 [i_0] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 25ULL)))) || (((/* implicit */_Bool) arr_2 [i_1] [i_0]))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_0] [i_2] [i_1] [i_0] [i_0] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_0] [i_1] [i_2] [i_3]) != (((/* implicit */unsigned long long int) var_4)))))) | (arr_14 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 + 1]))));
                                arr_17 [i_3 - 2] [11LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0]))))) << (((((max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_3 - 2])))) >> (((var_7) - (6231004772193150975ULL))))) - (812479980833ULL)))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((max((((/* implicit */unsigned long long int) arr_13 [i_0])), (var_17))) / (arr_2 [i_4] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((var_11), (var_11)))) >= (arr_13 [i_3 - 1]))))))));
                                var_20 = arr_12 [i_1] [9LL] [i_3] [i_4];
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_11 [i_1] [i_3 - 2] [i_4] [i_4]), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_3] [i_4])) && (((/* implicit */_Bool) arr_14 [0ULL] [i_1] [i_2] [i_3 + 1] [i_2])))))) ^ (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_4]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 -= ((((min((var_2), (var_9))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) == (var_15))))))) ^ (((var_16) << (((max((var_14), (var_16))) - (3002092151U))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_17)))) && (((/* implicit */_Bool) var_12)))))));
}
