/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = (((max(879885496502144949, (arr_5 [i_0 - 1] [i_1] [i_2] [i_2]))) ^ 17566858577207406667));
                    arr_6 [i_0] [i_2] [i_2] = ((((((-2147483647 - 1) % (arr_2 [i_0 + 1])))) <= (arr_0 [i_0 - 1])));
                }
            }
        }
    }
    var_11 = (min(((max(((max(var_1, 111357106))), (max(3068991867, var_2))))), (((1 | 11199121897824088513) ? var_6 : var_9))));
    var_12 = 1;
    var_13 = var_3;
    var_14 = (min(((max((var_0 | var_4), var_0))), (max((min(var_9, 80)), (min(1636610466, 18446744073709551613))))));
    #pragma endscop
}
