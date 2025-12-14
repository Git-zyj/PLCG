/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77646
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [(unsigned char)13] = ((/* implicit */signed char) arr_6 [0ULL] [(short)17] [i_0]);
                var_15 = ((/* implicit */unsigned int) 13076520599091562794ULL);
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) ((18446744073709551612ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [5LL] [i_1])))));
                var_16 = (+(17738624184212322572ULL));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~((-(13076520599091562794ULL)))));
    var_18 = ((/* implicit */unsigned char) ((max((var_9), (max((4ULL), (((/* implicit */unsigned long long int) -1944851963630118558LL)))))) >= (708119889497229048ULL)));
}
