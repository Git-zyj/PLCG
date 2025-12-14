/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (min(54656, 54656));
                arr_5 [i_0] = ((~((min(228, 65535)))));
                arr_6 [i_0] [i_0] = ((((min(0, -1734527038))) ? (max(917534895, (arr_4 [i_0 + 2] [11] [i_1 + 1]))) : (min((arr_4 [i_1] [i_1] [i_1 - 1]), (arr_4 [i_1] [i_1] [i_1 + 1])))));
            }
        }
    }
    var_19 = (max(var_19, var_9));
    var_20 = 1;
    var_21 = (max(-18423, ((((-26 ? 27085 : -470825748426027184)) << (121619887 - 121619840)))));
    #pragma endscop
}
