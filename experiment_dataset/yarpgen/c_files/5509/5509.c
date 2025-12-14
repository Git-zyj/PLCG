/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((((max(137791916635250142, 14829))) ? var_1 : -3704575824)), ((~(~590391472)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 = (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), 3704575824));
                                arr_11 [i_0] [i_0] [i_0] = -744693900775205619;
                                var_15 |= (arr_10 [1] [i_2] [i_0] [i_2] [i_0] [i_0] [i_0]);
                                arr_12 [i_0] [i_0] [13] [i_0] [i_0] [i_0] [i_0] = ((3704575824 > (!3714634229622587517)));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] = (((((arr_0 [i_0]) ? var_7 : var_10))) ? ((((3145952994 <= (arr_0 [i_0]))))) : 35184237871104);
                            }
                        }
                    }
                }
                var_16 = (arr_8 [i_1] [i_1] [i_0] [i_1] [i_0]);
            }
        }
    }
    var_17 &= ((var_12 ? 3145952994 : var_8));
    var_18 = var_2;
    #pragma endscop
}
