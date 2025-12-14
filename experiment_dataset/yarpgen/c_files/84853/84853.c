/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (((!var_9) ? (arr_3 [i_0]) : ((((!var_3) || (arr_3 [i_0]))))));
                var_16 = (((((var_14 >= (arr_1 [i_0] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_17 = ((((arr_13 [i_2 + 1]) <= (arr_14 [i_2 + 1] [i_2 + 1] [i_2]))) ? -var_6 : var_6);
                arr_15 [1] [i_3] [1] = (arr_12 [i_2] [i_2]);
                arr_16 [7] [1] [i_3] = (1047591127366009160 <= 68);
            }
        }
    }
    var_18 = (((var_11 ? (var_3 - var_15) : -var_3)));
    #pragma endscop
}
