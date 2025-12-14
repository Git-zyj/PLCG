/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76438
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (short)32767)) <= (-2147483645))))));
                var_14 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_9)) ? (-7049920384923490402LL) : (-7088847899394365548LL))) + (9223372036854775807LL))) >> (((max((((/* implicit */long long int) arr_1 [i_1 - 2] [i_1 - 3])), (7049920384923490402LL))) - (7049920384923490389LL)))));
                var_15 = ((/* implicit */short) (!(((var_1) < (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))));
            }
        } 
    } 
    var_16 = var_4;
}
