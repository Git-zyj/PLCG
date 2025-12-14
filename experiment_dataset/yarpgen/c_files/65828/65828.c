/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((+(((!var_3) * ((min(var_10, var_6)))))));
    var_16 = (max(((-(var_6 / var_4))), (((!((min(21816, -18644))))))));
    var_17 = ((172 & ((((-110 > 12568) >= (~var_6))))));
    var_18 = (((min(((min(var_11, 239))), -84)) <= (!13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [6] [i_1] = -4294967295;
                arr_8 [i_0] = (((((((min(-62, var_0)) + 2147483647)) >> (((var_5 && (arr_3 [i_0])))))) - ((((max(12568, 16765511304055804037)) <= ((((arr_5 [i_0] [i_1]) ^ 10865))))))));
            }
        }
    }
    #pragma endscop
}
