/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71909
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
    var_15 = max((((unsigned short) (+(((/* implicit */int) var_11))))), (var_8));
    var_16 = ((/* implicit */long long int) max((var_16), (var_0)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)63518)) << (((var_2) - (6921757654071027953LL)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (min((8400434308887947003LL), (var_9))) : (max((var_9), (((/* implicit */long long int) var_10)))))))));
                var_18 = ((/* implicit */long long int) max((var_18), (min((max((min((-1LL), (var_3))), (((/* implicit */long long int) ((648226978712224682LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63532)))))))), ((+((-(var_1)))))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned short) (~(1LL)));
}
