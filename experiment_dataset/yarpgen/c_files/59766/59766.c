/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [i_3] [i_0] [i_3] [i_3] [i_3] = (min((arr_2 [i_0]), (((((max(1, (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) <= (((arr_3 [i_2]) << (var_2 - 7260))))))));
                            var_18 = (max(var_18, ((min((max((arr_7 [i_0] [8] [i_0] [i_0] [i_0] [i_0]), var_12)), -23319)))));
                        }
                    }
                }
                var_19 = (9783719031102799403 ? var_16 : (arr_4 [i_0] [i_1] [i_1]));
            }
        }
    }
    var_20 |= var_16;
    #pragma endscop
}
