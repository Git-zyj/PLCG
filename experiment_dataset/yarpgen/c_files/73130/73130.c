/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 9093168101464821363;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((((arr_0 [i_0] [i_0]) & (max((arr_1 [i_1]), (arr_4 [i_1] [i_1] [i_1])))))) + (arr_3 [i_0])));
                    var_20 = (max((arr_3 [i_0]), 96));
                    var_21 = 125;
                }
            }
        }
    }
    var_22 = min((((((var_0 ? 32512 : 3921600316))) ? var_7 : 237)), ((((3921600328 / 289022619) ? var_0 : (4005944694 && -47)))));
    var_23 = ((((((min(22097, var_7))) ? 18254 : ((-116 ? var_10 : 4294967277)))) ^ var_10));
    var_24 = 79;
    #pragma endscop
}
