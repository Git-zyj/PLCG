/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81763
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(var_7))) ^ ((~(var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((-1366122686847734617LL), (((/* implicit */long long int) ((unsigned char) var_15)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (var_11) : (((/* implicit */long long int) 2147483647))))) > (max((2806045719853886539ULL), (((/* implicit */unsigned long long int) 234881024U))))))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) (+(0LL)))) : (((34909494181888ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
                arr_7 [i_0] = ((/* implicit */long long int) min((min((arr_5 [i_0]), (arr_5 [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (-2566140515548631967LL))))));
            }
        } 
    } 
}
