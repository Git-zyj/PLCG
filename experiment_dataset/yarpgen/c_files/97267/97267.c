/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [6] [i_1] &= (max((14060923375177918551 / -6808762806271326649), -var_12));

                for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_15 = (min(var_15, ((max(6808762806271326665, 144115188075855871)))));
                    arr_9 [i_0] [i_1] [i_2] = ((~(max((((!(arr_2 [14])))), ((-1106547315404022022 ? var_6 : var_4))))));
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_16 = (((-6808762806271326649 ? 13276168324728327615 : 6)));
                    var_17 = var_7;
                    arr_13 [i_0] [11] [i_3] = ((15322252327755554539 ? 61 : (max((arr_11 [i_3 - 2] [10] [i_0 - 2]), var_2))));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_18 [7] [i_1] [i_1] [12] = ((((min(((min(255, 4194303))), ((56 ? 15322252327755554539 : (-9223372036854775807 - 1)))))) ? (arr_2 [10]) : ((((min(6, 242))) ? var_7 : 5438920607579123079))));
                    var_18 = (max(var_18, var_2));
                }
            }
        }
    }
    #pragma endscop
}
