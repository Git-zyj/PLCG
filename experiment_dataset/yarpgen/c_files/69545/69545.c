/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (~var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_11 = (((((var_4 ? 0 : var_2))) ? -1749043748 : (81 + -1749043748)));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = var_5;
                        arr_12 [i_0] = (-174 || (((1 ? 175 : 196))));
                        arr_13 [1] [1] [7] [1] [i_3] [i_0] = (var_0 && 183);
                    }
                    var_12 += (min(25470, (max((!1584402064), -3834098003785658765))));
                }
            }
        }
    }
    var_13 = -var_8;
    var_14 = (max(((122 ? 0 : (!4294967295))), -var_1));
    #pragma endscop
}
