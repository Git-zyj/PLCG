/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((((var_14 ? var_8 : 8)) == 2047))) >> ((0 * (!3492684051662740654))))))));
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [9] = (((((arr_1 [i_0]) ? (arr_4 [i_0]) : (max(3664709514439001595, (arr_3 [i_0] [i_0]))))) / ((((~60) ? 1732608367 : (((!(arr_4 [3])))))))));
                arr_7 [i_1] [i_0] = (!var_4);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_17 += (!((!(((66 ? var_11 : 195))))));
                arr_14 [i_2] [i_2] [i_2] = ((((min(-20, (arr_11 [i_2] [i_2] [i_2])))) ? (arr_13 [i_2] [i_2] [14]) : -20312));
                var_18 = (((((!(arr_11 [i_3] [i_2] [i_3]))))) == 60);
                var_19 = ((-((6 ? 12101975790829771119 : 4800581239147199036))));
            }
        }
    }
    var_20 = (max((min(var_4, ((-8478 ? -10102 : var_9)))), ((((min(var_4, var_1))) ? ((-44 ? var_11 : var_4)) : (14446603482625582591 == 6)))));
    #pragma endscop
}
