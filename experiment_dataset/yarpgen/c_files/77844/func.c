/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77844
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
    var_15 = ((/* implicit */unsigned long long int) var_5);
    var_16 = ((/* implicit */unsigned long long int) ((int) (_Bool)0));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = var_4;
                var_17 = ((max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) var_4)))) ^ (((((/* implicit */int) (short)3774)) ^ (((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
