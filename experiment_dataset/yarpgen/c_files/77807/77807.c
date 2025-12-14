/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((9 ? (max(var_10, var_4)) : var_12));
    var_17 = -7032344;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (127 / 2422908077281710921);
                var_18 = ((((var_0 + var_14) == var_7)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [5] [i_0] [5] [i_0] [i_0] [i_0] = (((max(0, ((max(-5664801495718108041, var_7)))))) ? var_6 : (((1547905666 - (2422908077281710923 || 0)))));
                            arr_12 [i_0] [9] [i_0] [i_0] [i_0] = (((((((arr_3 [i_3] [i_1] [1]) ? 1298472214780500776 : var_12)) == (arr_7 [i_0 + 1]))) ? (((((((var_5 ? var_7 : -2422908077281710889))) || (((-2422908077281710922 ? -1049410721 : -2422908077281710922))))))) : 757940050));
                            arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0] = (1758915463 ? 4294967292 : 4294967295);
                            var_19 = min((min(var_11, (1339411111 >= 5363013641527729147))), ((-222092788 ? -1100910783333534897 : -1100910783333534904)));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
