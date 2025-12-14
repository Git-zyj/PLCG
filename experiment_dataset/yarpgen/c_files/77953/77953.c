/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (((~((max(var_5, (arr_2 [i_1] [i_1])))))))));
                    var_13 = (~8388607);
                }
            }
        }
    }
    var_14 = (~4286578688);

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = (~1359055530);
        var_15 = var_1;
        var_16 = (arr_0 [i_3] [i_3]);
        var_17 = 8388608;
        var_18 = (~var_1);
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_19 = ((!(((max(-1206680087707708118, 3657282332964443489))))));
        arr_13 [i_4] [i_4] = ((((((arr_11 [i_4]) ? var_9 : 1206680087707708118))) ? (max(var_3, -1206680087707708118)) : (((var_4 ? (arr_11 [i_4]) : (arr_12 [i_4] [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_20 = ((((((arr_1 [i_5]) ? -4286578688 : (max(var_4, (arr_15 [i_5] [i_5])))))) ? ((min(2147483647, 536870911))) : (max(350660318, (arr_1 [i_5])))));
        var_21 = (((((((max(1206680087707708118, 2133636024))) ? 0 : 963322657))) ? (!4286578689) : ((((max(4294967295, 0))) ? 1719626753 : 4294967295))));
    }
    #pragma endscop
}
