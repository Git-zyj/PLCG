/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85909
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_7))))) ? ((+(var_11))) : ((-(((/* implicit */int) var_3)))))) / (var_12)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)18] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_12)) >= (arr_3 [i_0 - 1] [i_0 + 1]))))) & (max((max((arr_3 [i_1] [i_0]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-92)), ((unsigned short)52410))))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (((-(-2922810133998380798LL))) * (0LL)));
            }
        } 
    } 
}
