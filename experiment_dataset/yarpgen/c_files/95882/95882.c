/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((var_10 << var_13) ? (arr_3 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_0])))) ? (~var_15) : ((min(((min(var_2, var_12))), 18))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [i_0] = (((((-(arr_2 [i_1])))) ? var_15 : var_9));
                    arr_10 [i_0] [i_0] [i_1 + 2] [i_0] = ((!(3670016 && var_12)));
                    arr_11 [i_0] [i_1] [i_2] = ((~(max((((arr_7 [i_0] [i_0] [i_2]) ? var_0 : var_7)), (((1794557171964284828 || (arr_4 [i_0]))))))));
                    arr_12 [i_0] [i_0] = (arr_7 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_18 = (~15);
    var_19 = (((max((var_13 ^ -75), var_17))) ? var_16 : ((((((7019464978370209898 << (var_3 - 11032625336555602440))) >= var_15)))));
    #pragma endscop
}
