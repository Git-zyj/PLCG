/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76066
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] &= ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) arr_1 [i_0])))));
                arr_5 [i_0] [i_1] [(unsigned short)5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32759))));
                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) (short)-31133)), ((unsigned short)31))), (((/* implicit */unsigned short) (short)14336))))) ? (((/* implicit */int) (unsigned short)15100)) : (((((/* implicit */int) arr_1 [19])) >> (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [i_0]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (short)-14336);
}
