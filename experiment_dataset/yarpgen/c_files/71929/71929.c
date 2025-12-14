/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (max(743190250908132139, ((max(1, (arr_2 [i_0]))))));
        arr_4 [i_0] = ((min(var_4, -743190250908132139)));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_14 &= min(((~(var_8 * 8094357602584099589))), (min(((8094357602584099607 ? 10352386471125452021 : (arr_8 [i_1 - 1] [6] [i_0]))), (arr_8 [i_1 + 1] [i_1 + 3] [i_1 + 2]))));
            var_15 += (((((min(var_8, var_1)))) / 7866364663099279829));
        }
        arr_9 [i_0] = (!((max(-1360031610909383511, (arr_5 [i_0] [i_0])))));
        arr_10 [i_0] [i_0] &= var_1;
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_16 = min(10352386471125452042, (((31 ? -8505410891786734502 : 743190250908132132))));
                var_17 *= ((max(((((-127 - 1) && 224))), var_12)) + (((max((max((arr_13 [i_3] [i_2] [i_2]), 1)), (((!(arr_12 [i_2])))))))));
            }
        }
    }
    var_18 = var_7;
    var_19 = var_5;
    #pragma endscop
}
