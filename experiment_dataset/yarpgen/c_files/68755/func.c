/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68755
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((long long int) (!(((/* implicit */_Bool) (signed char)32))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) max(((unsigned short)26847), (((/* implicit */unsigned short) (short)-17274))))), ((-(((/* implicit */int) ((signed char) (unsigned short)26847)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned short) (signed char)16)), ((unsigned short)56952))))), (var_9)));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) (signed char)50)))))));
}
