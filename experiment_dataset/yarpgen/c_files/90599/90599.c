/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (arr_0 [i_0] [10]);
                var_14 = ((18238756053330905315 == (((((min(-44, 1658673518))) ? (((arr_2 [i_0] [i_0 + 1] [10]) ? 1819044520 : 48)) : 2475922771)))));
                var_15 |= (var_7 ^ (((((min(28691, var_4))) ? 0 : (min(-7084848614842639372, (arr_0 [i_0] [i_0])))))));
            }
        }
    }
    var_16 = (var_11 ^ (min((min(1089683022218643181, 3514)), var_2)));
    var_17 = (((max((7084848614842639372 == var_5), var_3)) ? var_3 : var_5));
    var_18 |= ((-7084848614842639388 ? 0 : 18446744073709551615));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_19 = max((-39 != 70368710623232), var_12);
                            arr_15 [i_2] [i_2] [i_2] [i_2] = ((1310662778 ? 9683265249559846769 : 1));
                            var_20 = (min(var_5, 1103713281));
                            arr_16 [i_2] [i_2] [i_2] [i_4] [i_5] = (~12607606416499987724);
                        }
                    }
                }
                var_21 = 4100162545491217044;
                var_22 = (min(var_22, ((((((6867846160527452649 * (arr_13 [12] [12] [12] [i_2]))) == -6))))));
            }
        }
    }
    #pragma endscop
}
