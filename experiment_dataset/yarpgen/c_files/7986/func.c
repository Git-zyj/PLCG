/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7986
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_2 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)83)) && (((/* implicit */_Bool) (signed char)121)))))) : (var_4))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)-105))) ? (((int) max((((/* implicit */unsigned long long int) 4294967270U)), (var_7)))) : (((/* implicit */int) var_17)))))));
}
