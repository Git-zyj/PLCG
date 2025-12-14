/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((1131527729235466803 ? 4095626 : 17315216344474084813)), ((((-1 / var_3) * ((var_16 ? -24 : var_13)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = (~var_17);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_22 = (max((((((max(16480452275943329435, -2147483631))) ? (arr_8 [i_2] [i_2] [i_2] [i_2]) : (var_11 | var_9)))), -5));
                        var_23 = (((max(1131527729235466803, (arr_0 [i_3] [i_1]))) >> (((arr_9 [i_0] [i_0] [i_0] [i_0]) - 6210947283490807753))));
                        var_24 = (((((((((arr_2 [i_2]) ? (arr_2 [i_3]) : (arr_6 [i_0] [i_1] [i_2])))) * ((-1467459488 ? 3076502187 : 33554431))))) ? (((((((arr_5 [i_1]) * (arr_10 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])))) ? (arr_6 [i_3] [i_1] [i_0]) : 4294967279))) : (max(var_6, (((arr_0 [i_2] [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_3] [i_0])))))));
                    }
                }
            }
            var_25 = (max(var_25, ((((min(1006632960, (((arr_10 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]) ? -471533887 : (arr_4 [i_0])))))) ? 17315216344474084813 : 0))));
        }
    }
    var_26 = (((((max(var_15, 131040)) <= var_15))) * 1);
    var_27 = (13 ? (((((var_8 ? 4294967295 : 1809192404))) ? var_6 : var_5)) : ((var_17 ? var_9 : 2147483647)));
    #pragma endscop
}
