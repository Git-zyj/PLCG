/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((!((var_7 >= ((((arr_3 [i_0 + 1]) != 1)))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_19 = (!1);
                    var_20 = ((((-85 + (arr_2 [8] [i_2 + 4])))) ? (arr_8 [i_0 + 1] [i_2] [i_2] [i_2 + 2]) : (((((576460752303423487 ? 889178937 : var_0))) ? (((arr_3 [i_1]) ? 8062669210829235371 : var_2)) : ((203 ? 65517 : 15439015440693095711)))));
                }
            }
        }
    }
    var_21 = (max(var_11, var_4));
    #pragma endscop
}
