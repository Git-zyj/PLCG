/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79385
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
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) -385949469)) : (797343002U));
                    arr_10 [i_0 - 1] [11ULL] [5ULL] [i_0 - 1] = ((/* implicit */unsigned short) (-(max((1406706768), ((-2147483647 - 1))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((var_15) ^ (((/* implicit */unsigned long long int) var_4))))))) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (16777215U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned short)61091)) : (var_13)))));
}
