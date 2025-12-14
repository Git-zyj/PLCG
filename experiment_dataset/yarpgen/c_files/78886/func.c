/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78886
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) / (min((arr_3 [i_0] [i_1 - 2] [i_1]), (arr_3 [i_1] [i_1 - 2] [5U])))))) ? (((/* implicit */unsigned long long int) (~(-8199204802825723919LL)))) : ((+(17623936519364144579ULL)))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [8LL])), (arr_3 [i_1 - 2] [i_1 - 2] [i_1]))))))), (arr_0 [i_0])));
                arr_5 [i_1 - 1] = ((long long int) arr_0 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((var_6) / (((((/* implicit */_Bool) var_4)) ? (8199204802825723940LL) : (var_13)))));
}
