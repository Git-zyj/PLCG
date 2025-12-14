/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69827
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
    var_19 = var_3;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = max((((/* implicit */unsigned long long int) max((arr_1 [(unsigned short)4]), (((/* implicit */unsigned short) ((arr_3 [i_0]) < (var_17))))))), (((arr_0 [i_0 - 1]) ^ (((/* implicit */unsigned long long int) var_15)))));
                arr_4 [i_0] [i_1] &= ((/* implicit */short) var_11);
                var_21 = arr_1 [0ULL];
                var_22 = ((/* implicit */unsigned short) arr_2 [8LL] [i_0] [(_Bool)1]);
            }
        } 
    } 
}
