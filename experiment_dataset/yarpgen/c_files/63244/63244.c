/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 3;
    var_17 = ((((0 ? -25056 : -138870866)) < ((min(var_8, 56052)))));
    var_18 = var_5;
    var_19 = ((max((!8240899214108413363), 55462)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = -1;
                    var_20 ^= (arr_3 [i_2] [i_2]);

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_21 = var_4;
                        arr_12 [i_0] [13] [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_0]);
                    }
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_0] [6] = var_14;
                        arr_16 [i_0] [i_1] [i_2] [i_4] = (((var_7 % var_12) ? (!21269) : (min(8240899214108413363, 25056))));
                    }
                    var_22 *= (min((max((((9431 ? var_2 : (arr_8 [i_1])))), (arr_1 [i_0 + 1]))), ((max((!-25057), (var_8 || var_4))))));
                }
            }
        }
    }
    #pragma endscop
}
