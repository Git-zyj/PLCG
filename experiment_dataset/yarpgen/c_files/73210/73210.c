/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [10] &= (!4534850473828694181);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = -4386265869174307007;
                    arr_8 [i_0] [i_0] = ((((((!((((arr_3 [i_0]) ? -6565319564674170454 : (arr_4 [i_0] [i_0])))))))) != ((((max(var_0, var_0))) ? ((4386265869174306978 ? (-9223372036854775807 - 1) : 255)) : ((((-2 + 2147483647) << (87 - 87))))))));
                }
            }
        }
    }
    var_21 = (max(((72057594037927808 ? (var_17 & var_4) : var_3)), ((max((180 & 1), (0 | -7154336855823883708))))));
    var_22 = (min(((var_15 ? (max(var_6, -26)) : (var_8 || var_18))), ((0 ? (!var_10) : var_8))));
    #pragma endscop
}
