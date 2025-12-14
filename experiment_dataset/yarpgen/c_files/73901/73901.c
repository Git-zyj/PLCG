/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max((max(1, (min(3504926880728171284, 1133854510)))), (min((arr_3 [i_1 + 1] [i_1 - 2]), (arr_3 [i_1 + 1] [i_1 - 2])))));
                arr_5 [i_1 - 2] [i_0] = (((max(-67, (29 || 193))) / 53825));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (min((min((arr_7 [i_1]), (max(3504926880728171284, -1294920940460614836)))), (((((arr_1 [i_1 - 2]) << (((arr_6 [i_0] [i_0] [i_2] [i_0]) - 1209220020))))))))));
                            var_17 *= (min((((9080 ? 0 : 26))), (((~2380) ? (~18232552810804543087) : 2147483647))));
                        }
                    }
                }
            }
        }
    }
    var_18 += var_5;
    #pragma endscop
}
