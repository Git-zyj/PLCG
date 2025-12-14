/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56313
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) | (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (arr_2 [i_0]))))) : (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_7))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_11))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_1);
    var_19 -= ((/* implicit */long long int) var_6);
}
