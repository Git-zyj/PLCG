/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8593;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 -= 20178;
                var_14 = (((min((max(14302709335367973105, 1)), ((14302709335367973105 ? var_5 : 14302709335367973090)))) << (4099 - 4064)));
                var_15 -= 14302709335367973093;
            }
        }
    }
    var_16 = (max(var_16, 186));

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_6 [i_2] = (-62 * 207);
        var_17 = (((((!16717) ? ((65535 ? 52784 : 27811)) : 8587)) % (-28395 <= 62)));
    }
    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        var_18 = (((-127 - 1) ? 51483 : 4144034738341578517));
        var_19 *= 53;
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_11 [i_4] = 0;
        arr_12 [i_4] = ((((max(-4144034738341578521, ((min(1268132492, 32768)))))) ? ((1093903182 / (-127 - 1))) : var_9));
        var_20 = ((4144034738341578516 ? (-127 - 1) : (min(44618, var_11))));
        var_21 ^= var_1;
        arr_13 [i_4] = 115;
    }
    #pragma endscop
}
