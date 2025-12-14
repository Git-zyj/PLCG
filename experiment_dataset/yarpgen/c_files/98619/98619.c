/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (((~(((!(arr_5 [i_0] [i_1] [i_2] [i_1])))))));
                    arr_8 [i_0] [i_1] = (((arr_5 [i_0] [i_0] [i_2] [i_2]) * (arr_1 [i_2])));
                    var_10 = (3714636862138459800 == 101);
                }
            }
        }
    }
    var_11 = (max(var_11, 23300));
    var_12 = 1035114602;
    #pragma endscop
}
