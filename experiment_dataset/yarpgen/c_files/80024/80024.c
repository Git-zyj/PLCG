/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_12 || -732490448930925994);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((0 ? (max(-732490448930925994, var_16) : (arr_1 [i_0]))));
                var_20 = var_10;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 = 85557144;
                            var_22 = (arr_3 [4] [i_1]);
                            var_23 = (((((arr_0 [i_1 - 1]) && (arr_0 [i_1 - 1]))) ? 2 : 4294967277));
                        }
                    }
                }
            }
        }
    }
    var_24 = var_3;
    var_25 = (((((-((var_13 ? 732490448930925981 : 3))))) ? ((var_11 / (max(-732490448930925994, var_14)))) : var_7));
    #pragma endscop
}
