/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76893
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
    var_11 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) min((min((((/* implicit */long long int) (_Bool)1)), (2897746677326274092LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((2897746677326274092LL) - (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_0 [i_0] [i_1])))), (var_6))))));
            }
        } 
    } 
}
