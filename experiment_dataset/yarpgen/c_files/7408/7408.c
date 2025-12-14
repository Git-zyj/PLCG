/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (((min((arr_5 [i_0] [i_0] [i_2]), 107))) / (((arr_5 [i_2] [i_0] [i_0]) ? (arr_5 [i_2] [i_0] [i_0]) : (arr_5 [i_2] [i_0] [i_0]))));
                    var_12 = (((((260568488 ? 5451373375681016982 : 42150))) ? ((107 | (((arr_5 [i_1] [i_0] [1]) / 11791074373915711361)))) : (((~(arr_5 [i_0] [i_0] [i_2]))))));
                    arr_7 [i_0] [3] [i_0] = 5979923107820596578;
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (arr_3 [i_0] [i_0] [i_0]);
                }
            }
        }
        arr_9 [i_0] = ((-((+((-107 ? (arr_3 [i_0] [i_0] [3]) : (arr_4 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = 8058386928144702589;
        arr_14 [i_3] = (arr_0 [8]);
        arr_15 [i_3] [i_3] = (4034398828 ^ 260568488);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_13 += 94;
        arr_18 [i_4] [i_4] |= (min((min(4232645865, (arr_11 [i_4] [i_4]))), (arr_5 [i_4] [20] [20])));
    }
    var_14 &= ((var_1 ^ (min((var_9 ^ 5451373375681016982), (~18446744073709551600)))));
    var_15 += ((-(var_6 / var_3)));
    #pragma endscop
}
