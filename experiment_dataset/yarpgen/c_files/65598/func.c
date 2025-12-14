/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65598
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned long long int) 4294967295U))) ? (arr_2 [i_0] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((0U) - (0U))))))))))));
                var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (min((var_5), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                arr_7 [i_0] [i_0] = min((((/* implicit */unsigned int) (unsigned short)0)), (0U));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) 765877442447037293ULL))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_5);
    var_16 = ((/* implicit */unsigned int) var_5);
}
