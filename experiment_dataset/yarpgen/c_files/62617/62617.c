/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_8 ? var_3 : var_5))) ? (((var_7 >= 2147483647) % 2147483647)) : (((min(var_3, var_12)) | var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, var_5));
                    var_20 = (max((((((var_3 ? var_2 : (arr_0 [i_0] [i_1])))) ? 2 : 15021)), (max((arr_5 [i_0] [i_1 - 2] [i_2 + 2] [i_0]), (arr_4 [i_1 - 2] [i_1])))));
                    arr_7 [i_2] [i_1 - 2] [i_2] = ((((max(((max(1012713580, (arr_3 [i_0] [i_1] [i_2])))), ((15669919149311879405 >> (1012713591 - 1012713568)))))) ? var_7 : 8465384862106230694));
                }
            }
        }
    }
    var_21 = (((((-var_14 > ((max(var_0, var_12)))))) & var_0));
    var_22 = (max(var_11, var_14));
    #pragma endscop
}
