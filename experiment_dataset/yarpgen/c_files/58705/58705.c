/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (6144 >= 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = var_10;
                            arr_9 [i_2 + 2] [i_1] [i_0] [i_0] [i_1] [i_3] = (arr_5 [i_2 - 2] [5] [i_1]);
                        }
                    }
                }
                arr_10 [i_1] |= ((arr_4 [i_0] [i_0]) ? ((((!((1 >= (arr_2 [i_1] [i_0]))))))) : (max(-4294967291, (arr_0 [i_0] [i_1]))));
                var_21 ^= (min((~var_3), ((-((min(-1, -23619)))))));
                var_22 = (max(2071299874, 1990880974));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_23 = 1;
                    var_24 = (max(var_24, (((var_2 ? (!var_14) : (~var_14))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_25 -= (max(23, (max(-1, (max(-102, (arr_20 [i_4] [i_8 - 2])))))));
                                var_26 = 168907374557076870;
                                var_27 = ((max(0, 5529329903139359843)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (~1024547964);
    #pragma endscop
}
