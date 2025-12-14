/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min((max(1656394820185956374, (15605146362463575047 && 25792))), var_1));
                var_11 = (arr_4 [i_0]);
                arr_7 [i_0] [i_0] = (arr_0 [i_0]);
                arr_8 [i_0] [i_1] = (min((arr_2 [i_0]), (arr_2 [i_0])));
            }
        }
    }
    var_12 = (min(var_7, var_2));
    var_13 |= (((var_2 | 15605146362463575023) / (max(var_7, (max(12, 1))))));
    var_14 = ((((~(var_9 / var_9))) % (max((~var_9), (var_6 ^ var_1)))));
    #pragma endscop
}
