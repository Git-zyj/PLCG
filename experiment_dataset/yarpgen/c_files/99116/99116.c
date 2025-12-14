/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((((min(2147483647, var_3))) ? ((min(var_9, var_9))) : 0))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((+((((~9223372036854775807) >= 0)))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_13 = (min((((((255 ? var_4 : 32767))) ? 17043030209116702054 : (((max(1, 1)))))), (277321725 % 1)));
            arr_6 [i_0] [i_1] [i_0] = 1;
            arr_7 [i_1] [i_1] [i_0] = (((var_3 * 1) ? (-2147483647 - 1) : (max((-2147483647 - 1), 5335797617745109725))));
            var_14 = var_6;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_15 = (((!17465086963273456195) ? (max(1, (max(8915235877004771080, 1)))) : -1));
            var_16 = ((var_9 > (15127 & 2)));
        }
    }
    var_17 = (max((((((min(var_6, 4))) << (-7829495780164765311 + 7829495780164765332)))), 1030975759));
    #pragma endscop
}
