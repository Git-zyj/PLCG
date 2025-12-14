/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (2229009596 + -113);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_13 = (max(var_13, (((((((arr_5 [i_2 + 3] [i_2 - 1] [i_2] [i_2 - 2]) || (arr_5 [i_2 - 2] [i_1] [i_1] [i_0])))) >= (((!(16837 || 127)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((((((!(arr_8 [i_0] [i_1] [i_2 + 1] [i_3] [i_1]))))) ^ (((!(arr_7 [i_0] [i_0] [i_0] [i_1]))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = (arr_7 [i_2] [i_4] [i_4] [i_1]);
                                var_15 = (max(var_15, (arr_0 [i_4])));
                            }
                        }
                    }
                }
                var_16 = -3920926657;
            }
        }
    }
    #pragma endscop
}
