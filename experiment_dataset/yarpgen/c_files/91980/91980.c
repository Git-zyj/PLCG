/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((!2070916152), var_11));
    var_16 = (max(var_16, ((((((4 << (var_1 + 508075390)))) == (!26985))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_17 = ((-((min((arr_1 [i_0 + 3] [i_0 + 4]), (arr_1 [i_0 - 2] [i_0 - 2]))))));
        var_18 &= (max(((((max(var_9, (arr_0 [0])))) ? var_0 : (((32768 || (arr_0 [2])))))), ((~((((arr_0 [i_0]) || var_6)))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_19 = (max(var_19, (((((((max(2258594606, (arr_7 [i_1])))) ? -12848 : (arr_5 [i_1])))) ? ((((((arr_5 [i_2]) ? var_8 : var_7)) != var_4))) : ((min((arr_6 [i_1]), (((!(arr_6 [i_1])))))))))));
            arr_8 [i_1] [i_2] [15] &= (min((arr_7 [i_1]), -26986));
            var_20 = -26986;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_21 = (arr_5 [i_2]);
                var_22 = (arr_9 [i_3] [i_3] [i_2] [i_3]);
                var_23 += 255;
            }
            arr_11 [i_2] [i_1] [i_1] &= ((-var_0 == (((arr_4 [i_2] [i_1]) / -26986))));
        }
        var_24 = arr_5 [i_1 - 2];
    }
    #pragma endscop
}
