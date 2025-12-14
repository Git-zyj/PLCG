/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85403
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (var_1)))) ? (var_2) : (((/* implicit */int) ((arr_2 [i_0]) >= (arr_2 [i_1]))))));
                var_12 = ((/* implicit */unsigned int) arr_1 [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (unsigned char)195))));
    var_14 = var_5;
    var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46313))))) >> (((/* implicit */int) ((((/* implicit */_Bool) 1369149100216819737ULL)) && (((/* implicit */_Bool) 1408045513U)))))));
}
