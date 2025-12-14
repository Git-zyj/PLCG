/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (((((-(4275638522 || -2)))) ? (-2147483647 - 1) : ((((((-2147483647 - 1) ? (arr_2 [i_0] [i_0]) : 2147483647)) < (!110))))));
                arr_4 [i_0] [i_0] = ((((65534 ? (arr_0 [i_0]) : 0)) % (((+((255 ? (arr_2 [i_0] [i_0]) : 123)))))));
                var_19 = (arr_0 [i_0]);
            }
        }
    }
    var_20 = var_16;
    #pragma endscop
}
