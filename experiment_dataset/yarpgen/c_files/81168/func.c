/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81168
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(_Bool)1] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */int) (short)32704)) > ((~(arr_4 [i_1] [(unsigned short)10] [i_0])))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 6802864478485579312ULL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_1 - 1] [i_1 - 1])), (11643879595223972323ULL))))));
            }
        } 
    } 
    var_19 = var_0;
}
