/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_18 = 4627324847996374592;
        arr_3 [i_0] = 221;
        var_19 = (((max((-4627324847996374592 || 14001190997058405115), (max(var_5, (arr_1 [i_0]))))) >= ((min(19768, ((var_15 ? (arr_0 [i_0 + 2]) : (arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 = (((arr_9 [i_0] [i_0] [i_0] [i_2 + 1] [i_0]) < 4627324847996374582));

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_21 = (((((2463960143512741748 - (((9223372036854775807 ? (arr_13 [i_4] [i_3] [9] [9] [i_0]) : (arr_13 [i_0] [i_0] [6] [6] [i_4]))))))) ? 45436 : (+-9223372036854775807)));
                            var_22 = (min(var_22, ((((-(arr_13 [i_4 + 1] [i_1 - 1] [9] [9] [6])))))));
                            arr_14 [i_0] = (!var_12);
                        }
                        var_23 = ((((((arr_0 [i_2]) > 6910)) ? ((48 ? (arr_11 [i_0] [i_0] [i_2] [i_0]) : 14001190997058405128)) : (!9223372036854775787))));
                        arr_15 [i_0] [i_0] [1] [i_2] [i_3] [i_3] = (max(4445553076651146500, ((4445553076651146500 << (-710778227 + 710778268)))));
                    }
                }
            }
        }
    }
    var_24 = ((-((-var_0 ? 232 : ((4949738137867866855 << (783248183 - 783248183)))))));
    #pragma endscop
}
