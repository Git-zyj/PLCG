/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_9, (max(var_1, var_8))))) ? var_8 : var_10));
    var_12 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = 10398290921952709085;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((25696 != (arr_4 [i_0] [i_0])));
            var_14 += 85;
        }
        arr_7 [i_0] [i_0] = (~12175641253451663218);
        var_15 = (min(var_15, ((((((8048453151756842530 ? 4294967295 : 32767))) ? (arr_3 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_2] [i_3] [i_2] [i_5 - 3] [i_3] |= (max((((1781129495582128599 != 51264) ? 12175641253451663202 : (arr_14 [i_3]))), (((arr_14 [i_3]) ? 8048453151756842547 : (arr_11 [i_3])))));
                        arr_19 [i_2] [i_4] &= (((min((arr_11 [i_3]), (arr_8 [i_2 - 1]))) + (arr_8 [i_2 - 1])));
                    }
                }
            }
        }
        arr_20 [i_2] = (min(8048453151756842530, 78));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 6;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 7;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_16 *= 96;
                        var_17 = (!var_1);
                    }
                }
            }
        }
        arr_32 [i_6] = (((((arr_1 [3]) && var_4)) ? ((12175641253451663200 ? 4837271926558251592 : -316456598675352727)) : (arr_16 [i_6] [i_6] [i_6] [i_6])));
    }
    var_18 = var_8;
    var_19 *= var_8;
    #pragma endscop
}
