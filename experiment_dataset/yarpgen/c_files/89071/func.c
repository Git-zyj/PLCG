/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89071
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max(((~((+(((/* implicit */int) var_6)))))), (((/* implicit */int) (short)28767)))))));
    var_15 ^= ((/* implicit */long long int) (!(var_12)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), ((~(((unsigned long long int) min((arr_5 [i_0]), (((/* implicit */int) var_13)))))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned short) (-(350545192U)))))));
            }
        } 
    } 
}
