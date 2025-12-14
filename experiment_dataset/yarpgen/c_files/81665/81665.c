/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(var_8, var_9))) ? (((~255) * var_6)) : ((min(17757969963319567779, 145))));
    var_19 &= (185 != var_7);
    var_20 = min(1321476266, var_14);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 += ((((max(((133 ? 102 : 9223372036854775807)), 1454699003))) ? (((arr_6 [i_0 + 1] [i_0] [i_0 - 4]) ? 0 : (241 / 5257434948923591006))) : (((min((arr_1 [0]), (arr_1 [6])))))));
                    arr_10 [i_0] = (arr_2 [i_0 - 1] [i_1]);
                }
            }
        }
    }
    var_22 = ((((min(47013, 31592))) << ((((((112 ? -1 : 139))) && var_14)))));
    #pragma endscop
}
