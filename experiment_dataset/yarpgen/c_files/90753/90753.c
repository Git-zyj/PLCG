/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((~(arr_1 [i_0])));
                var_19 = (((((-4539275197087256401 ? -5736480542526767303 : ((48 ? 50 : 4539275197087256401))))) ? (((arr_4 [i_0]) ? -29683 : (arr_0 [i_0]))) : ((max((var_12 < 29685), (arr_4 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = 838413148;
                            var_21 = (!var_1);
                        }
                    }
                }
                arr_12 [i_0] = (-(((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_0]))));
                var_22 = (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? 85 : (arr_1 [i_0]))) : (arr_1 [i_1])));
            }
        }
    }
    var_23 = ((-29693 && var_17) ? var_17 : (min(var_10, var_8)));
    #pragma endscop
}
