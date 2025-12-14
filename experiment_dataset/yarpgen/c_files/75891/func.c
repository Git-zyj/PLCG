/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75891
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
    var_14 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (arr_2 [i_1] [i_1] [i_1]) : (arr_0 [i_0])))) : (arr_3 [i_0])));
                var_15 |= ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_0 [i_1]) : (arr_2 [8ULL] [6LL] [8ULL]))), (min((arr_2 [(short)0] [i_1] [12LL]), (((/* implicit */int) var_9)))))), (max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_2 [16] [16] [i_1])) ? (arr_0 [5U]) : (((/* implicit */int) (unsigned char)0))))))));
            }
        } 
    } 
}
