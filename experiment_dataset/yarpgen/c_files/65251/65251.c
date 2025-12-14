/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [5] [5] [9] = (arr_2 [i_1]);
                arr_6 [i_0] [i_0] [i_0] = (((((-320234973 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])))) ? (arr_4 [1] [10] [10]) : 57));
                arr_7 [0] = -320234973;
                var_14 = (((((arr_3 [19] [3]) >= var_6))) << (((arr_4 [13] [i_1] [13]) - 1066200780)));
            }
        }
    }
    var_15 -= 9151990116831664206;
    var_16 = ((var_2 ? (var_4 || 215) : (301691909 <= var_0)));
    #pragma endscop
}
