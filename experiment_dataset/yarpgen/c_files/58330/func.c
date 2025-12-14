/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58330
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -16)) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)59)) ? (var_5) : (((/* implicit */long long int) var_9)))) : (((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (0LL))))) : (((/* implicit */long long int) max((565890514), (((/* implicit */int) var_4)))))));
                var_16 = ((/* implicit */short) max((max((7349395229503855841ULL), (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) (unsigned short)37192))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)214))));
    var_18 = ((/* implicit */int) ((0U) >> (4U)));
    var_19 = ((/* implicit */long long int) (unsigned short)56293);
}
