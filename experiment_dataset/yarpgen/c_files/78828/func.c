/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78828
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
    var_13 = var_8;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) (+((-(4083084092683079555LL)))));
                var_14 = ((/* implicit */unsigned char) arr_2 [i_1]);
                arr_5 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) var_12);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_6);
}
