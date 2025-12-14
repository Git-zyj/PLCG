/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((((-32767 - 1) ? var_9 : var_3))) ? (~var_9) : (!var_2))), (((((var_4 ? var_1 : 9363461829379021201))) ? var_8 : (8191 && 10971239728097664717)))));
    var_13 = var_4;
    var_14 = ((744667598 ? 78 : 4367082606451886533));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [7] = ((min(((57344 ? var_4 : var_0), 4367082606451886517))));
                var_15 = (((max((((168 ? -14 : var_6))), ((var_2 ? 9083282244330530415 : var_1)))) % var_0));
                var_16 |= 3200857643610789106;
            }
        }
    }
    var_17 = (min(var_17, var_4));
    #pragma endscop
}
