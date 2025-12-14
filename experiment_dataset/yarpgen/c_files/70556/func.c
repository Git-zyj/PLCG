/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70556
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((-725827497930826278LL), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0 - 1])))))))) << (((min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (725827497930826275LL))))) + (32LL)))));
                var_20 = ((/* implicit */long long int) arr_2 [i_0 + 1]);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_10);
    var_22 *= ((/* implicit */unsigned short) var_17);
}
