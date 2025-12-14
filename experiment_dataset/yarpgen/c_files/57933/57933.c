/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (min(((8343455148405230888 ? 1 : (arr_2 [i_0]))), ((-(arr_2 [i_0])))));
                    var_13 = (((var_5 || 2581957082396395255) || ((!(arr_2 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (min((min((arr_2 [i_0]), -6788358404979655821)), (~var_2)));
                                var_15 = (min(548989697, 1));
                                var_16 = (max(var_16, (min((arr_2 [i_4]), ((min((1 ^ -8878981467011955733), (arr_5 [i_4] [i_4] [i_4]))))))));
                                var_17 = (min((arr_10 [i_3] [i_2 - 1] [i_1 + 1] [i_0 + 1]), ((min(var_8, var_9)))));
                            }
                        }
                    }
                    var_18 = arr_5 [i_1] [i_2 - 1] [i_2 - 1];
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            {
                var_19 = (max(var_19, (arr_18 [i_5] [0] [i_6 + 1])));
                arr_19 [i_5] [i_6 - 1] = ((+(((arr_17 [i_5] [i_5] [i_5]) + (43444 + 0)))));
            }
        }
    }
    #pragma endscop
}
