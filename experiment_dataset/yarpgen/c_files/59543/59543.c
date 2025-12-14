/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 509018231651523114));
    var_18 = ((var_14 * ((((-2066 ? var_4 : 17937725842058028502)) | ((var_3 ? 509018231651523129 : var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (arr_2 [i_2]);
                    var_20 = (((((var_12 ? (((0 <= (arr_0 [i_0] [i_2])))) : -var_8))) ? (((!(0 < 2)))) : (((!(((var_2 ? 0 : var_2))))))));
                    var_21 = 2;
                    arr_7 [i_2] = ((var_9 ? (((~((0 ^ (arr_6 [i_0] [i_2])))))) : (max(((var_4 ? var_0 : var_4)), 952074537))));
                }
            }
        }
    }
    #pragma endscop
}
