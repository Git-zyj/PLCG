/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = (((((((max(-9223372036854775800, 1))) ? (var_7 | -946507637508790391) : var_12))) ? (29360128 != 1759007323) : 1));
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = var_1;
                                var_18 = -5229060953710169612;
                                var_19 = ((((max((arr_9 [i_1]), (((arr_7 [i_0] [7] [i_0] [i_0]) ? var_12 : (arr_9 [5])))))) ? var_1 : (((7 || (((13433692034188413096 ? 4268974909 : var_3))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_20 = (((((((!(arr_6 [i_0]))) && (arr_8 [i_1] [i_1] [i_5] [i_1] [i_0])))) >> (((((((var_5 ? (arr_2 [i_0]) : 23753))) ? (arr_2 [i_6]) : var_1)) - 16580))));
                            var_21 = (max(var_21, (((((((8191 << (((var_4 + 8184899674233374278) - 7)))))) + (((!((((arr_8 [i_0] [i_1] [i_1] [i_1] [i_6 + 2]) ? var_0 : var_7)))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
