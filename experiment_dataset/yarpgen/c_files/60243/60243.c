/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = ((((min(var_5, (~var_9)))) ? 4194303 : (4494803534348288 ^ -9151463525730090334)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_15 -= (min(var_12, ((((min(3145201267945886277, 4494803534348289))) | ((-4494803534348290 ? var_7 : var_5))))));
                    var_16 = var_12;
                    arr_6 [i_0] [i_1] = (arr_0 [i_0 - 1]);
                }
                var_17 = ((((max((((arr_2 [i_0]) ? var_12 : var_6)), (arr_1 [i_0 - 1])))) ? (max(-5436222323939933948, -49)) : (((arr_1 [7]) ^ -4494803534348284))));
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
