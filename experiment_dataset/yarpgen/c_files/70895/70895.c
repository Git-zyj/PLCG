/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((!(((1 ? 1 : 1))))))))));
    var_13 = (((((1350131619 ^ 5167183069579229191) ^ var_1)) ^ -12785));
    var_14 &= var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [5] [9] = ((((max(((145 ? 138 : 4294967295)), (arr_6 [12] [i_1])))) ? (((arr_0 [i_2 + 1] [i_2 - 1]) ? -727865342 : 1)) : (arr_1 [i_1])));
                    arr_9 [i_0] [i_0] [9] [i_0] = (((arr_1 [i_0 - 1]) ? 9223372036854775807 : 2323925297));
                    arr_10 [i_0] [i_0] [i_0 - 1] = (max(((((arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]) < (arr_3 [i_0] [i_1] [i_0 + 1])))), 1603955287));
                    var_15 = (--98);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            {
                var_16 = (((((91 ? 1 : 21886))) || 23));
                var_17 += ((!(((107 ? 145 : 1023)))));
                var_18 += 0;
            }
        }
    }
    #pragma endscop
}
