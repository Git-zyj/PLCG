/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_8, (~1)));
    var_19 = ((((((var_16 ? 14491133547610249805 : 0))) ? ((var_7 ? 7992234395479277450 : -6445743410960683783)) : (var_6 > -1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((min((-32759 ^ -2147483637), 1227706859))) ? 8 : (((((0 ? (arr_2 [1]) : (arr_1 [i_0]))))))));
                arr_5 [2] [i_1] = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
