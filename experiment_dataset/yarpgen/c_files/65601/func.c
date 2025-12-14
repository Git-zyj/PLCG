/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65601
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
    var_12 = var_1;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */_Bool) (~(((arr_0 [i_0]) ^ (((/* implicit */long long int) 3952853759U))))))) ? (((/* implicit */long long int) 1188735894U)) : (var_6)))));
                var_14 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) 2146959360U)) : (arr_0 [6LL]))), (var_5)))) ? (var_7) : (max((arr_3 [i_1 + 3]), (arr_0 [i_1 + 2]))));
            }
        } 
    } 
}
