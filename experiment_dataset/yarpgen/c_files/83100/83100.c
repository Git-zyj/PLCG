/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, (((((min(63, 3301656726))) / 75)))));
                    var_11 += (((arr_4 [i_2]) ? ((((((arr_3 [i_1]) ? -23979 : 205))))) : (((arr_2 [i_0]) & (arr_5 [i_1] [i_2])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_12 = (((arr_11 [i_3 + 3] [i_5]) * -29584));
                    var_13 = ((((~(~134217727))) << ((((~(arr_15 [i_3 + 4] [i_3] [5] [i_5]))) - 5433962803453316633))));
                }
            }
        }
    }
    var_14 &= (((((var_8 ? var_5 : (((max(var_2, 21))))))) ? (var_1 / 58) : var_9));
    #pragma endscop
}
