/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (~1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] = (~-2737);
                arr_7 [i_1] = 0;
                var_15 = ((!(((((!(arr_0 [i_1]))) ? ((-164702335 ? 18446744073709551613 : 18446744073709551615)) : (arr_2 [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_18 [i_4] &= (min((((arr_5 [i_2] [i_3] [i_4]) ? (arr_1 [i_2]) : (min((arr_9 [i_2]), (arr_5 [i_2] [i_3] [i_4]))))), (((arr_9 [i_3]) ? (arr_9 [i_4]) : (arr_9 [i_2])))));
                    arr_19 [7] [i_3] [i_3] = 2017973747;
                }
            }
        }
    }
    #pragma endscop
}
