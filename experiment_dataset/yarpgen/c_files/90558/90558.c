/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((-576972607 / -100) / var_4))) * ((-16 * (21 / 18325419961561976361)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_13 = 17;
                    var_14 = ((var_1 / ((((!(1 / var_9)))))));
                }
            }
        }
        var_15 = (((max(var_0, (arr_6 [11] [12] [11] [i_0]))) >> (max((-9223372036854775807 - 1), 17))));
    }
    #pragma endscop
}
