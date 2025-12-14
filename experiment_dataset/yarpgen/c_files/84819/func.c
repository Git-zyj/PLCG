/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84819
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
    var_11 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) (((+(18446744073709551615ULL))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9813)) || (((/* implicit */_Bool) (unsigned short)55742))))))))));
                var_12 *= ((/* implicit */unsigned long long int) (unsigned short)9813);
            }
        } 
    } 
}
