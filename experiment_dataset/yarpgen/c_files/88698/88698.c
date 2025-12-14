/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (arr_1 [i_1])));
                arr_5 [i_0] [i_0] = (((min((((101 >= (arr_3 [i_1] [7] [i_0])))), ((17225100124809235303 ? 1221643948900316302 : 63670)))) > (((~(arr_4 [i_0 + 1] [i_0 + 1]))))));
                var_11 = (max(var_11, 1));
                var_12 ^= ((!(((arr_0 [i_0 + 2] [i_0 - 1]) || 17225100124809235303))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_13 ^= ((~(((!(arr_9 [i_2] [8]))))));
                var_14 = (arr_8 [i_2] [i_3]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_15 = (min(var_15, var_7));
                arr_18 [i_4] [i_5] = (min((min((min((arr_13 [i_4] [i_4]), var_4)), 1221643948900316312)), ((-(((arr_9 [3] [3]) / 1035043190550931235))))));
                arr_19 [2] [2] = (min((((17225100124809235296 >= (((max((arr_8 [i_5] [i_5]), -115))))))), 1));
            }
        }
    }
    var_16 = (((!-var_1) ? (!var_4) : (((1 * var_9) / ((var_5 ? 17225100124809235303 : var_8))))));
    var_17 = var_2;
    #pragma endscop
}
