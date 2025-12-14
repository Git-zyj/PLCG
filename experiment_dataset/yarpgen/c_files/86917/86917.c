/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_9 & (max(((var_7 ? -1 : var_5)), (43327 > var_9)))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_14 = var_12;
        var_15 = 22209;
        var_16 = var_1;
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_17 = 206;
        var_18 = (min(var_18, ((((min(((max(var_2, 4))), ((43318 ? 6205201987141430544 : 46))))) ? (35889 > 1) : ((22209 ? 1169366191 : 6205201987141430552))))));
        var_19 = (max(var_19, (((((var_6 ? 1045661939 : (arr_4 [i_1] [i_1 + 3]))) << (((var_8 > (arr_3 [i_1 + 3])))))))));
        arr_5 [i_1] = ((-1356689696 % ((~(1 <= 42)))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_20 = (max(var_20, var_6));
        arr_10 [i_2] [i_2] = var_12;
        var_21 = (min(var_21, var_1));
        arr_11 [i_2] &= (!((!(((2147483647 / (arr_9 [i_2])))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            {
                var_22 = ((!((max(5368282505774956434, 1)))));
                var_23 -= (~1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                var_24 = ((6205201987141430539 > ((((1 ? 173921384 : 35703))))));
                var_25 = ((((~(arr_19 [i_5]))) != ((((!(arr_19 [i_5])))))));
            }
        }
    }
    #pragma endscop
}
