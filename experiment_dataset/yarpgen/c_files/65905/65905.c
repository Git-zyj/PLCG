/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (arr_2 [i_0] [i_1] [i_0]);
                var_12 -= -1394872820;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_13 = -1394872820;

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_14 = var_0;
                    var_15 = -22;
                    arr_13 [i_2] [i_4] = ((-(!-4126468385425034660)));
                    var_16 = 1021885214;
                    var_17 = ((-((((min(48, 1))) % (~var_0)))));
                }
                for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_18 = ((~(27 | 1862410434)));
                    var_19 = (+-0);
                    var_20 = (((var_5 ? ((-(arr_6 [i_2 - 1]))) : (max((arr_12 [i_5] [i_5] [i_5]), (arr_6 [i_2]))))));
                }
                for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_21 = (arr_16 [i_3]);
                    var_22 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
