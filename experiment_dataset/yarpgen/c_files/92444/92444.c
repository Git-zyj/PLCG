/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= 226;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = (((~226) * var_6));

                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] = (min(115, (((176388384 * 107) ? (arr_5 [i_0]) : (arr_14 [i_0] [i_1] [i_0] [i_3] [i_0])))));
                                arr_16 [i_2] [i_4] [i_2] [i_3] [i_4] [i_3] |= 30;
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] = ((((arr_13 [i_3] [18] [i_0] [0] [i_3 + 2] [i_3]) * 104)));
                                var_17 -= ((5125303092529792028 * (((!(arr_9 [i_2 - 4] [i_2 - 3] [i_2 + 4]))))));
                            }
                        }
                    }
                    var_18 = (min(18446744073709551615, ((2514110956 ? 58677 : 255))));
                }
                var_19 = (min(var_19, (112 & -107)));
                var_20 = ((var_2 ? 117 : (((4958068251968093459 ? 1780856338 : -100)))));
                arr_18 [i_0] [i_1] = (min(1505695659, (max((((arr_11 [i_1] [i_0] [i_0] [i_0]) ? 255 : var_0)), (6102513258479749256 >= 11025)))));
            }
        }
    }
    #pragma endscop
}
