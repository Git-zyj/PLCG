/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89872
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0 + 4] = ((/* implicit */long long int) ((unsigned short) var_11));
                var_19 = ((/* implicit */long long int) max((var_19), (min((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0] [4U]))))), (((((/* implicit */_Bool) -3613855963295116156LL)) ? (137438887936LL) : (var_14)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((unsigned short) ((((var_9) >> (((var_2) + (384554450425586916LL))))) << ((((~(((/* implicit */int) var_6)))) + (61005))))));
    var_21 = ((/* implicit */unsigned short) max((-137438887949LL), (((/* implicit */long long int) var_11))));
}
