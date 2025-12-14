/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max((max(-5154428389123958675, (-1278248934 < 5))), (((var_2 < (((var_3 ? 1278248943 : var_0)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (arr_5 [i_1]);
                    arr_9 [i_2] = (max(4841895088005358767, 1706625275));
                    var_14 = 1543312531;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [6] [6] [i_1 + 2] [i_0] = (arr_7 [i_4] [i_3] [i_1]);
                                var_15 = (max(var_5, (max((max((arr_10 [i_2]), (arr_1 [i_2] [i_2]))), (((arr_3 [i_4]) - -2147483637))))));
                                arr_18 [i_2 + 3] [i_2 + 3] [i_4] = ((!(((~((var_7 | (arr_12 [i_0] [i_0] [i_2] [i_3]))))))));
                                arr_19 [i_0] = (max((max(((max(49152, 103))), (max(var_2, (arr_5 [i_0]))))), ((((-2027930473 + 2147483647) << 0)))));
                                var_16 = (max((((!(((var_7 * (arr_0 [i_4]))))))), ((var_6 - (max(4841895088005358754, (arr_12 [i_0] [i_1] [i_1] [i_3])))))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [i_2] = (max(var_10, (arr_2 [i_0] [i_0])));
                }
            }
        }
    }
    var_17 = (((((var_10 ? ((max(184764505, -1278248955))) : var_12))) ? ((((var_7 ? 1543312516 : 12669947)) >> (var_10 - 215))) : ((((max(50878, -1190))) ^ var_3))));
    #pragma endscop
}
