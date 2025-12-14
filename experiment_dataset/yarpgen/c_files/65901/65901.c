/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 ^= ((~(((3557034748039053617 == 3557034748039053617) | (3557034748039053617 >= 3557034748039053616)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_3] [6] [i_0] = (max(-32752, (((arr_0 [i_0] [i_0 - 1]) <= (arr_0 [i_0] [i_0 - 1])))));
                            var_20 = (max(var_20, (arr_1 [2] [1])));
                            arr_12 [i_0] = ((!((max(3557034748039053598, ((((arr_1 [i_0] [i_0]) ? (arr_10 [i_0] [i_1] [20] [i_0]) : 52774))))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] = (max((arr_9 [i_1] [1]), (((((-(arr_3 [i_0] [i_0])))) + (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_21 = (arr_0 [i_4 - 3] [i_5]);
                arr_18 [i_4] [i_4] = arr_8 [i_5] [i_5] [i_4] [i_4 - 1];
            }
        }
    }
    #pragma endscop
}
