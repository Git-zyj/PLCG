/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (((48046 + var_2) != ((((!var_4) != -var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = ((!((((arr_7 [i_1 - 1]) ? -4285068701300133028 : (arr_3 [i_0 + 2] [i_0 + 1]))))));
                    arr_10 [i_0] = (arr_6 [i_2] [i_2] [3]);
                }
            }
        }
    }
    var_17 = ((((max(0, var_1))) * ((((var_10 == var_13) <= ((max(40600, 1))))))));
    var_18 = ((((27365 * (min(var_0, var_7)))) + (+-11936)));
    #pragma endscop
}
