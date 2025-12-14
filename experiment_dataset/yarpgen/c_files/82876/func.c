/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82876
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
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 = ((((/* implicit */_Bool) arr_4 [i_1] [i_0 - 3])) ? (((unsigned long long int) 5078236025375576080ULL)) : (max((0ULL), (13368508048333975529ULL))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_11 = ((((/* implicit */_Bool) (+(arr_10 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0])))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [11ULL] [i_1] [i_2]))) ? (var_9) : (arr_11 [4ULL] [i_1] [i_1] [i_3]))) : ((((~(arr_1 [i_1] [2ULL]))) & (((unsigned long long int) arr_4 [i_3] [i_2 + 1])))));
                            var_12 *= arr_11 [i_0] [i_1] [i_2 + 1] [i_3];
                            var_13 = arr_12 [i_0] [i_0] [i_0] [i_0];
                            var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((0ULL) > (14589579975541336866ULL))))));
                            var_15 = ((unsigned long long int) ((unsigned long long int) 13063480008001097180ULL));
                        }
                    } 
                } 
                var_16 = arr_10 [i_1] [3ULL] [i_1] [i_1] [2ULL] [i_1];
                var_17 = var_3;
            }
        } 
    } 
    var_18 *= ((unsigned long long int) 16248183621732871175ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((2647144380709706091ULL), (13368508048333975536ULL)))));
                var_20 = ((5078236025375576080ULL) + (8038786045227499615ULL));
            }
        } 
    } 
}
