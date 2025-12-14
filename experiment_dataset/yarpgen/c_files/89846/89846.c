/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((((-4222391306883451527 < (((arr_5 [i_1]) + (arr_0 [i_0] [i_0])))))) <= ((0 ? (1137333026 && 1) : 1240798783))));
                var_14 = (max((((arr_0 [1] [i_1]) ? (arr_3 [i_0] [1] [i_0]) : (arr_0 [i_0] [i_0]))), (((arr_3 [12] [12] [i_0]) / 2101914825595779608))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] = ((-1137333021 * (((-20159 != (arr_5 [i_1]))))));
                            var_15 = ((((((2101914825595779608 % 2101914825595779625) & 1))) ? (arr_4 [i_3] [i_3] [i_1]) : 1));
                        }
                    }
                }
            }
        }
    }
    var_16 = var_1;
    var_17 = var_10;
    var_18 = ((var_7 & (((min(15349854926081427489, 1))))));
    #pragma endscop
}
