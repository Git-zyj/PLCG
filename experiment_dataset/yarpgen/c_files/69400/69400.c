/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = (((!var_5) ? var_5 : 1638260359));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((1 ? var_0 : 3))) ? ((var_2 ? var_5 : -877683106)) : ((1752214080 ? -56 : var_2)));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_13 = (var_2 ^ 1752214072);
                            var_14 = (-2147483647 - 1);
                            arr_17 [i_0] [9] [i_1] [i_3] [i_0] = var_10;
                        }
                    }
                }
            }
            arr_18 [i_0] [8] [8] = var_0;
            arr_19 [i_0] = (((((-988579809 ? -1875941605 : -7773476833836604508))) ? ((-877683106 ? ((var_10 >> (2147483647 - 2147483638))) : var_4)) : ((~(((var_5 + 2147483647) >> (3702289907 - 3702289900)))))));
            arr_20 [i_0] [i_0] [i_0] = (((-427443445 + var_5) ? (var_7 % -988579836) : 2377537053));
        }
    }
    #pragma endscop
}
