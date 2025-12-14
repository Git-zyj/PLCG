/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((((max(var_10, var_2))) ? 18305165801837436779 : 1997239571)) <= (arr_2 [i_0] [i_1 - 1])));
                var_13 = (max(var_13, (~var_6)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 -= (arr_10 [i_2]);
                            arr_11 [i_3] [i_1] [i_1] [i_0] = ((!((((arr_1 [i_2 + 3]) ? (arr_1 [i_0 + 3]) : (arr_4 [i_0] [i_2 + 1]))))));
                        }
                    }
                }
                var_15 = (min(var_15, (((min((arr_10 [i_1 + 1]), (arr_1 [i_1 - 1])))))));
                var_16 = (((((((18305165801837436779 ? (arr_0 [i_0]) : 1017556577))) ? -861639775 : (!255))) - (((max(0, -1590605366)) + ((2764 ? 1 : 65526))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            {
                arr_17 [i_5] = (((arr_15 [i_5 + 2] [i_5]) >= (arr_15 [i_5 - 1] [i_5])));
                var_17 += max(((((((arr_12 [i_5]) ? -43 : (arr_16 [i_4 + 3] [i_5])))) ? (arr_14 [i_5]) : ((((-127 - 1) && 65535))))), var_11);
            }
        }
    }
    #pragma endscop
}
