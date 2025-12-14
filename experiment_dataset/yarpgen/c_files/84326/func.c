/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84326
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
    for (int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) ((int) ((unsigned int) 6613357570644596012LL)));
                var_14 -= ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) 7668461380032569935ULL)) ? (var_0) : (((/* implicit */int) var_11))))), (((long long int) var_5)))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 7668461380032569937ULL)) ? (((/* implicit */int) (unsigned short)49430)) : (var_10))) > (var_2))))));
            }
        } 
    } 
    var_15 = ((((long long int) var_1)) > (((/* implicit */long long int) var_5)));
}
