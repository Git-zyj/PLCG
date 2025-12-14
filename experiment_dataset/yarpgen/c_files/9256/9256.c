/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = ((var_11 || (max(1, 1))));
                                var_19 = ((~(max((1109292810 % var_2), 17227124381546027023))));
                                arr_14 [i_0] [i_3] [i_2 - 1] [i_2 - 1] [i_4] = (i_3 % 2 == zero) ? (((+(((arr_0 [i_0]) ? ((17227124381546027023 / (arr_8 [i_0] [i_3] [i_2] [i_3] [i_4]))) : (((arr_13 [i_3] [i_3]) / 17227124381546027023))))))) : (((+(((arr_0 [i_0]) ? ((17227124381546027023 * (arr_8 [i_0] [i_3] [i_2] [i_3] [i_4]))) : (((arr_13 [i_3] [i_3]) / 17227124381546027023)))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, ((((113 / ((var_15 ? -2077275400 : (arr_10 [i_5] [8] [8] [i_5] [i_2] [18])))))))));
                        arr_17 [i_0] [i_0] [i_5] = ((0 || ((min(861844932907879434, 1219619692163524593)))));
                    }
                    for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] = ((((min(var_5, var_10))) ? (((320679253 ^ 7) & (17227124381546027027 | var_3))) : (((((~(arr_8 [i_0] [i_2] [i_2 + 2] [i_6 - 1] [i_6 - 2])))) ? var_7 : 1219619692163524605))));

                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_21 = (max(var_21, ((21 * (131449951 % 1)))));
                            arr_23 [i_2] [i_1] [20] [i_7] [i_7] [i_1] [i_7 + 1] = 37514;
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_22 = ((!((min(31, ((1 - (arr_24 [i_0] [i_1] [i_1] [i_2] [i_6] [i_8]))))))));
                            var_23 = (arr_0 [i_8]);
                        }
                    }
                    for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_30 [0] [i_1] [3] [i_1] = (min((((1 % var_17) % ((~(arr_10 [i_0] [i_0] [i_1] [i_2] [i_9] [i_9 - 2]))))), 9));
                        var_24 = (((1 % 17584899140801672182) || (((-2077275412 ? 0 : var_10)))));
                    }
                    var_25 = (min(var_25, ((((((min((arr_4 [i_0]), var_1))) + -var_6))))));
                }
            }
        }
    }
    var_26 -= (1746470852 ? -var_9 : var_17);
    var_27 = (min(var_27, 2077275412));
    #pragma endscop
}
