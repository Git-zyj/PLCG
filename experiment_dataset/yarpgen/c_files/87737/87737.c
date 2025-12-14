/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = 69831048869694551;
                var_17 = ((((((arr_4 [i_0] [i_1 + 1] [i_0]) ? 1653725863 : (arr_4 [i_0] [i_1 - 1] [i_0])))) < var_6));
                var_18 = (497018165048257505 % var_14);
            }
        }
    }
    var_19 = 3387428992;
    var_20 = (max(var_20, var_7));
    var_21 = -3681463305768945825;
    #pragma endscop
}
