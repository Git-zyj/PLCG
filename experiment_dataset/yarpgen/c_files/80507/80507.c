/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(486734190 + var_12)));
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((65024 || (((((var_14 || (arr_2 [i_0 - 2]))) ? (((arr_1 [i_0]) ? (arr_4 [i_0]) : 14)) : (!2019584370))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_9 [12] [i_1 - 1] [i_1] [i_1] &= (arr_1 [i_1]);
                    arr_10 [i_2] [6] [i_2] = ((((((arr_4 [i_0 - 1]) | (arr_4 [i_0 + 1])))) * 0));
                    var_18 ^= (!var_1);
                }

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_14 [13] [i_1 - 1] [i_1] [i_3] = ((+(max((-9223372036854775807 - 1), 2275382918))));
                    var_19 = ((((((((arr_11 [5]) ? (arr_8 [i_0 + 3] [i_3] [i_0 + 3] [8]) : 8488284927006019375))) ? 2019584377 : (((-9223372036854775807 - 1) & 18446744073709551615)))) / (((((min(0, var_15))) ^ -5613363121223941309)))));
                    arr_15 [i_0] [8] = (arr_6 [i_0 + 3] [i_3] [i_0 + 3]);
                    arr_16 [6] = ((((var_8 ? (((var_0 ? var_10 : var_7))) : ((31 ? -3386880623571210950 : 1473411246683335916)))) - (((-((var_6 ? var_5 : (arr_2 [4]))))))));
                }
            }
        }
    }
    #pragma endscop
}
