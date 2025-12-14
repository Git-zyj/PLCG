/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [1] [i_1] = ((((max(-1, 1))) ? (1 * 0) : 1));
                var_20 = max((2 - 82), (min(-2, ((min((arr_4 [i_1] [6]), (arr_0 [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_0] [i_2] [6] = (((!(arr_4 [17] [1]))));
                            var_21 = ((((((((arr_0 [i_2] [i_3]) < var_1))) < var_13)) ? (arr_2 [i_3 - 1] [i_3] [i_3]) : (max(-45, (min(-1348206403, -18625))))));
                            var_22 = (max(15, 1));
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, -607765817));
    var_24 = -var_1;
    #pragma endscop
}
