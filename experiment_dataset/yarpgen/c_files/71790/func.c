/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71790
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
    var_10 = ((/* implicit */int) var_5);
    var_11 = ((/* implicit */unsigned short) ((_Bool) (~(((11738125739866073444ULL) << (((((/* implicit */int) var_1)) - (41))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_7 [(unsigned short)7] = ((/* implicit */unsigned long long int) var_3);
                var_12 = ((/* implicit */short) ((((/* implicit */int) (signed char)-85)) > (((arr_0 [i_0 + 1]) - (((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_1 + 2]))))));
            }
        } 
    } 
}
