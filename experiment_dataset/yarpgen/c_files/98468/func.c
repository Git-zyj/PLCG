/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98468
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] [4] [(unsigned short)5] = ((/* implicit */unsigned short) min((0ULL), (((/* implicit */unsigned long long int) -75747186))));
                arr_7 [i_1] = ((/* implicit */signed char) (-((~(arr_3 [i_0] [i_1 + 1] [i_0])))));
            }
        } 
    } 
    var_10 = (-((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))));
    var_11 += ((/* implicit */short) var_5);
}
