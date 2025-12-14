/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (((((var_8 % -17071) ^ (1655712272221414717 <= 16252928)))) ? (((((min(var_10, 27808))) > (-32767 - 1)))) : var_16);
                arr_6 [i_0] [i_0] [i_1] = ((((((((var_16 ? (arr_1 [i_1]) : 6))) ? (arr_3 [i_0] [i_1]) : (var_11 - var_8)))) ? var_1 : (0 | 39484)));
                var_18 = (arr_0 [i_0] [i_1]);
            }
        }
    }
    var_19 = (min(var_19, (((var_8 ? var_4 : var_8)))));
    var_20 = -1655712272221414717;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, 12));
                                arr_19 [i_4] [i_6] [i_5] [i_4] [i_3] [i_4] = ((90338922 ? ((255 ? -1655712272221414717 : 12513213519233701695)) : ((((min((arr_11 [3] [i_4] [17]), 200))) ? ((786220552 ? 1397998538 : 31219)) : 0))));
                            }
                        }
                    }
                    var_22 += ((var_1 ? ((((arr_8 [i_3]) > ((min((arr_12 [1] [i_3] [i_4]), -13430)))))) : (((!((max(var_2, (arr_10 [i_4])))))))));
                    var_23 = min(((var_1 == (arr_10 [i_4 + 1]))), (arr_14 [i_3 + 3] [1] [i_4] [i_4] [i_4 + 1] [i_2]));
                }
            }
        }
    }
    #pragma endscop
}
