/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    var_17 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_5 [i_1]);
                arr_8 [i_0] = (((((arr_6 [i_1] [i_1] [i_0]) && ((min(-86, (arr_3 [4])))))) ? ((((((arr_0 [i_0]) | (arr_1 [i_1] [i_0])))) ? (arr_5 [i_0]) : (arr_0 [i_0 + 1]))) : (((min(var_15, 169))))));
                var_18 = (((((36797 ? (arr_2 [i_0 + 1]) : var_12))) ? (min((var_6 * 1), (min((arr_2 [i_0]), var_11)))) : -1134));
            }
        }
    }
    var_19 |= (((~var_15) ? var_6 : (((var_0 ? var_9 : 1956888979)))));
    var_20 += (max(((min((192 < var_1), -7595))), (((((16 ? 4957 : 4294967295))) ? var_6 : 1))));
    #pragma endscop
}
