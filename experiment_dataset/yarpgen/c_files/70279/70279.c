/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_1));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 = (min(var_20, (((~((~((524160 ? 3 : 255)))))))));
        var_21 = var_15;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = ((7105207792635539557 << ((((~(arr_0 [i_1] [i_1]))) - 4242038018))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_23 = 17010361486789466820;
                    var_24 = (!115);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_13 [i_4] = 7105207792635539557;
        var_25 = (max(var_13, (~var_14)));
        var_26 = (max((((64 >= (max(153, 2831058))))), ((~(arr_12 [1] [i_4])))));
    }
    var_27 = var_0;
    var_28 = var_10;
    #pragma endscop
}
