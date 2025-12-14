/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = var_13;
        var_18 = var_11;
    }
    var_19 ^= ((15163187087653951812 / (((var_9 ? (-51 && 255) : var_15)))));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            {
                var_20 = 1;
                var_21 = ((((min(var_0, (arr_5 [i_2 + 1] [i_1 - 1] [i_2])))) || (!4141)));
                var_22 += (arr_0 [i_1] [15]);
                var_23 = ((32350 > (((((max((-127 - 1), 150)))) | ((150 ? 1 : 3951401557685731568))))));
                var_24 = (min(var_24, var_3));
            }
        }
    }
    var_25 = ((((max(10787417938757324746, 18446744073709551615))) ? 12932428021694973753 : ((((((~var_14) + 2147483647)) >> (109 - 104))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            {
                var_26 = ((((((min(-18179, (arr_9 [i_4])))) ? (((arr_11 [i_3] [i_4] [i_3]) ? 51429 : (arr_8 [i_4]))) : (!15093743126782341826)))) ? 2147483647 : (((!(!1)))));
                var_27 = 933778889955771571;
                var_28 += (arr_9 [i_4]);
            }
        }
    }
    #pragma endscop
}
