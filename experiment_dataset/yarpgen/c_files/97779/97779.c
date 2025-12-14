/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((!((((((41012 ? -1 : var_7))) ? var_8 : (18446744073709551615 <= 1)))))))));
    var_13 = (var_1 == var_9);
    var_14 = -8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 += 65535;
                    arr_8 [i_0] = (arr_1 [i_0] [i_0]);
                    arr_9 [i_0] [20] [i_0] [i_0] = (((((-(arr_5 [19] [i_0] [1] [i_1])))) <= (1 * var_4)));
                    var_16 += ((!(((!var_9) && (!-18121)))));
                }
            }
        }
    }
    #pragma endscop
}
