/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_8));
    var_17 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((min((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_0 [i_2 - 1]))) || (((((min(-2522122628843031950, var_4))) ? (((arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_2]) & -2359697344413869550)) : (1041540023043568034 / var_9))))))));

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_19 = (((max(0, ((1 ? 9223372036854775800 : 1)))) ^ ((~(~-1556103956137908584)))));
                        var_20 = (min(var_20, ((((arr_8 [i_0] [0] [i_0]) ? ((~(arr_2 [i_0] [i_2 - 1] [i_3 - 3]))) : var_4)))));
                        arr_10 [i_0] [i_0] [i_0] = (((((var_5 ? (6349258623653037216 * 0) : (1 * var_13)))) ? var_13 : ((-var_0 ? (((arr_2 [10] [10] [10]) / -2922023294930088674)) : (((arr_2 [i_1] [i_2] [i_3]) ? var_12 : 464534405787665826))))));
                    }
                    arr_11 [i_0] [i_1] [i_2] = 904093985467764269;
                }
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
