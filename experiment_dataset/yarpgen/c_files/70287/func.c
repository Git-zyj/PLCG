/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70287
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
    var_18 = ((int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) (-(min((arr_4 [i_0] [i_0] [i_1 - 1]), (((/* implicit */long long int) (+(3519793762U))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) var_6);
            }
        } 
    } 
}
