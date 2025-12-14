/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(8087, 63);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (((((17534 ? (arr_2 [i_1 + 2] [i_1 - 2]) : (arr_2 [i_1 - 1] [i_1])))) ? (arr_5 [i_1 - 1] [11] [i_1 - 2]) : (arr_2 [i_1 - 1] [i_1])));
                arr_8 [i_0] [i_0] = (((121 ? (!var_1) : 53)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_20 = 3331654339;
                var_21 = ((((~(arr_1 [6])))));
            }
        }
    }
    #pragma endscop
}
