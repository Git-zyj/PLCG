/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(((((var_8 + 2147483647) << (((max(var_8, 7110413377156434618)) - 7110413377156434618))))), (max(((127 ? var_4 : var_10)), var_1)));
    var_14 = (((((min(128, 119)))) ? var_3 : var_10));
    var_15 &= ((-7110413377156434619 ? var_9 : var_3));
    var_16 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (!0);
                    var_17 = min(var_8, ((5399806390883253037 + ((((108 >= (arr_4 [i_0]))))))));
                    arr_8 [i_0] [7] = ((0 ? 8006383768741152132 : (((arr_2 [2]) ? 3 : (1 - -1)))));
                }
            }
        }
    }
    #pragma endscop
}
