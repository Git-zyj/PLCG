/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1921951003;
    var_17 = (max(238, ((max(-817868268, 247)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] &= (min((min(103, ((max(238, 255))))), (min(((min(18, 239))), 2963194028))));
                    var_18 = 239;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] = (max((min(((max(17, 17))), (max(4294967295, -18462)))), ((max(249, 113)))));
                                var_19 = 4027252986;
                                arr_16 [i_1] = min(249, 4027252986);
                                var_20 &= ((min(4294967295, 97)));
                                var_21 = (max(var_21, 4039749453738172328));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [i_2] = (min((((max(830816878, 4294967268)))), 18446744073709551613));
                }
            }
        }
    }
    #pragma endscop
}
