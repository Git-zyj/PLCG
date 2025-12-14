/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = ((-((var_7 ? (max(var_0, 993642992)) : ((min(var_9, 2097152)))))));
                            var_12 = (((((1133776853 ? var_1 : 993642992))) & (min(-4, (993642988 + 12685268873684110734)))));
                            var_13 = (min(var_3, (min(27498, var_3))));
                            var_14 ^= ((((min((-27512 + var_4), var_8))) == (((var_1 ? var_1 : 47)))));
                        }
                    }
                }
                var_15 = 1133776853;
                arr_10 [i_0] [i_1] [i_1] = min((((((min(3242462009, 32767))) && (1220492292675899474 == 13037)))), var_1);
                var_16 = ((var_4 == ((var_8 ? 1358512370 : -1))));
            }
        }
    }
    var_17 = var_2;
    var_18 = (min(var_18, ((max(((((140 > var_3) || (~var_5)))), (max(3828339891439461325, 4)))))));
    #pragma endscop
}
