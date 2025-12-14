/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_8 * 18035);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 |= (arr_1 [i_2] [i_3]);
                            var_20 -= ((((arr_6 [i_3 + 3] [i_3] [i_1] [i_2] [i_3]) ? -12337 : (-2254164672179382549 * -4))) / (min((((var_11 / (arr_6 [i_0] [i_0] [i_1] [i_2] [i_3])))), (((arr_0 [i_3] [i_1]) * (arr_4 [i_1] [i_1] [i_1]))))));
                            arr_8 [i_0] [i_1] [i_2] [i_1] [i_3] = ((((max(50704, 1364885466205334166)) & (((max(53844, 230)))))));
                            var_21 |= (min(-var_11, (max(-1, (min((arr_1 [i_3] [i_1]), 34))))));
                        }
                    }
                }
                var_22 = ((18035 || (((((((arr_4 [i_0] [i_0] [i_1]) ? 872786875 : 30))) ? (arr_4 [i_1 - 1] [i_1] [i_1]) : 83)))));
            }
        }
    }
    var_23 &= 185;
    var_24 = var_11;
    #pragma endscop
}
