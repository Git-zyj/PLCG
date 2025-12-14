/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] &= ((+((min((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1]))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_2] = (((arr_1 [i_0] [i_0]) + (((((!(arr_6 [i_2] [i_1 - 1] [i_0]))) ? (arr_9 [i_0] [i_2]) : (((255 || (arr_4 [i_0])))))))));
                    arr_11 [i_0] [i_0] = ((-14990268596879769278 ? 1 : (min(((0 ? var_14 : var_3)), (!4194303)))));
                    arr_12 [i_0] [i_1] [i_2] = (min(27288, ((-(arr_2 [i_1 - 1] [i_1 - 1])))));
                }
            }
        }
    }
    var_18 ^= var_15;
    var_19 = -102;
    #pragma endscop
}
