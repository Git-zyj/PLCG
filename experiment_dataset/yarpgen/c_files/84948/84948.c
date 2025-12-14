/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] = (min((((4756 ^ 6681) ? ((var_6 << (2095858803 - 2095858790))) : -4756)), -var_3));
                arr_5 [i_0] [i_0] = ((-4777 && ((max(4761, var_1)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 += ((~(max(var_1, (var_9 * var_6)))));
                            var_12 -= ((((max((arr_0 [i_1 - 1] [i_0 - 1]), (arr_0 [i_1 - 2] [i_0 - 1])))) ? (arr_1 [i_0] [i_1]) : ((-4747 ? (max(-2992392951190582023, 4757)) : (4756 && var_4)))));
                            var_13 ^= (((((((arr_8 [7] [i_1] [i_1] [7] [i_1]) ? 3393433247 : (arr_6 [i_3] [i_0] [i_0]))) < (((~(arr_2 [i_2])))))) ? (((((arr_2 [i_0]) && (((-2992392951190582023 ? 3254881468 : 0))))))) : (min((((var_1 ? var_5 : (arr_8 [i_0] [i_0] [i_2 + 1] [13] [i_0])))), ((14998683885511708581 ? 1152931767793686416 : (arr_3 [i_2])))))));
                            var_14 = ((((var_4 != (arr_2 [i_0 + 1]))) && var_1));
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((max((1515304633 < 224), (var_6 && 10231874631642696403))))) / (min((var_8 ^ 9), (max(-4757, 9223372036854775782))))));
    #pragma endscop
}
