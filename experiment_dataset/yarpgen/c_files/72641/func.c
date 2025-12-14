/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72641
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
    var_13 = ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((511), (arr_4 [i_0 + 1])))) ? (((((/* implicit */int) var_9)) * (arr_4 [i_0 + 1]))) : ((+(arr_4 [i_0 + 1])))));
                    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) (unsigned short)50505))));
                    arr_8 [4] [i_1] [i_0] = min((((/* implicit */long long int) max((((int) (unsigned short)50505)), (((/* implicit */int) (unsigned short)15030))))), ((-(arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                    var_15 *= (+(12912376142579803359ULL));
                }
            } 
        } 
    } 
}
