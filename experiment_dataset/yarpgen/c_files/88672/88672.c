/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [2] |= 5029204257451487181;
                arr_5 [i_0] [i_0] [i_0] = (((!(((~(arr_1 [i_0])))))) || 1);
                arr_6 [i_0] [i_0] [i_1] = (((((max(4032, 127)))) - (arr_1 [i_1 + 1])));
                var_18 = (min(((((29 << (52 - 42))))), var_12));
            }
        }
    }
    var_19 |= ((6564487729650115743 >= ((((2147483647 >= var_7) ? (84 / 1) : ((min(1, var_2))))))));
    var_20 = var_10;
    var_21 = (max(var_21, ((((((max(var_3, var_2)) ? var_14 : (((max(var_7, var_1)))))))))));
    var_22 = var_2;
    #pragma endscop
}
