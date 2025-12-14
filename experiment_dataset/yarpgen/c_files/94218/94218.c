/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((min(var_1, var_3))) != var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 *= (((((((-(arr_4 [i_0])))) && ((min(var_12, 17922)))))) >> (min((min(var_7, (arr_2 [i_1] [1] [i_0]))), (((195 || (arr_0 [i_0] [i_1])))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] = (!1073676288);
                    var_15 = (max(var_15, 7052902622588389308));
                    var_16 = (min((arr_6 [1]), (((0 + var_4) - ((18446744073709551612 ? var_2 : 158))))));
                    arr_8 [i_0] [i_0] [i_0] [12] = 1;
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_17 = (min((arr_9 [10] [i_1] [i_1]), var_2));
                    arr_12 [i_1] = (min((((((var_7 ? (arr_1 [i_3]) : -1024)) << ((min((arr_10 [i_0] [i_0] [13] [i_3]), (arr_4 [i_0]))))))), (min(1, (min((arr_5 [10] [i_1] [4] [i_3]), var_11))))));
                }
                var_18 = (min(var_18, ((((((!((min(0, 2222873210272771350)))))) % (arr_10 [i_0] [1] [7] [i_0]))))));
            }
        }
    }
    var_19 ^= var_3;
    var_20 = ((113363018 ? 143 : 1762238345));
    #pragma endscop
}
