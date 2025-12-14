/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] |= max((arr_0 [i_0] [i_1]), (max(((6117 ? 6618084267664493687 : (arr_0 [i_1] [i_0]))), var_3)));
                var_17 = (min(var_17, (((max(59418, (((arr_3 [i_1] [i_1]) ? 1 : (arr_0 [i_0] [i_0])))))))));
            }
        }
    }
    var_18 = ((var_3 ? (~var_3) : ((1294312413 ? 8259432147734425339 : -1679893865))));
    var_19 += var_8;
    #pragma endscop
}
