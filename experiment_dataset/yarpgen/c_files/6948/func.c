/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6948
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((((/* implicit */_Bool) 12628666739673610892ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) min((-908759298), (((/* implicit */int) (signed char)3))))) ? (((/* implicit */unsigned int) (((-2147483647 - 1)) & (((/* implicit */int) (short)23604))))) : (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 5418230919584630178ULL))) ? (((/* implicit */int) var_11)) : (arr_4 [i_2 - 1] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((5418230919584630178ULL) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))));
}
