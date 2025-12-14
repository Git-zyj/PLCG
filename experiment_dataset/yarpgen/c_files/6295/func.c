/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6295
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [(signed char)11] [0U] [(signed char)6] [(_Bool)0] = ((/* implicit */short) (-(((unsigned int) (short)-26818))));
                    var_11 = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */int) var_0)) == (((/* implicit */int) (short)-26823)));
}
