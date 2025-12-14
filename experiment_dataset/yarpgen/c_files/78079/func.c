/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78079
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
    var_18 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_0 [i_0])))) | (min((((/* implicit */int) arr_2 [i_0])), ((~(((/* implicit */int) (_Bool)1))))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_15);
}
