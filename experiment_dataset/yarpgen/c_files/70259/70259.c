/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(7362174417776116174, ((min((!var_6), ((var_1 ? -48928714 : 957445376)))))));
    var_19 = (min(var_19, (((34359738367 ? ((max(915304076, ((18010 ? 2147483647 : 66))))) : -8883471463709380520)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = ((((min(((64834 ? var_5 : var_4)), 1887683100))) ? ((var_13 ? (((var_3 ? -1887683100 : var_12))) : (min(957445376, var_11)))) : -1));
        arr_4 [i_0] = -8883471463709380512;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = ((var_17 ? (255 <= 220) : 38));
        arr_8 [6] &= (((39 & -340647656) ? 1730707622 : 9223372036854775807));
        var_22 |= -957445379;
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        var_23 = (max(var_23, 18010));
        var_24 = ((((max(((0 ? var_3 : 10062434321664837705)), ((min(7362174417776116174, -2057215198)))))) ? (((0 ? ((var_9 ? 1247721721 : var_17)) : 1))) : ((1 ? ((63 ? 26843 : 224532638809928279)) : -5893023798977629477))));
    }
    var_25 = 1;
    #pragma endscop
}
