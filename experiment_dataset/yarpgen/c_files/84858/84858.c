/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0 - 1] [7] = ((max((((arr_6 [i_1]) ? var_7 : 105241613)), (((9656 ? 7 : 790893380))))));
                var_16 = (arr_3 [i_0 - 1]);

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_17 = (min(2147483647, 1));
                    var_18 = (arr_6 [0]);
                    var_19 = (min((max(((((arr_7 [i_0]) && (arr_3 [i_0])))), 4189725699)), (min((max(-9651, (arr_6 [i_2]))), -1))));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_13 [i_0] [i_3] [1] = (((((((min((arr_1 [i_3]), 1))) ? -1 : ((min((arr_10 [i_3]), (arr_10 [i_1]))))))) || ((min(3522560902, ((var_1 ? 28831 : (arr_3 [i_1]))))))));
                    arr_14 [i_3] = (arr_4 [i_0]);
                    var_20 = ((+(max((((arr_10 [8]) ? 113 : (arr_1 [2]))), 1))));
                }
            }
        }
    }
    var_21 = ((60936 << (772406394 - 772406393)));
    var_22 = (min(43089, ((max(var_0, (min(var_3, 9656)))))));
    #pragma endscop
}
