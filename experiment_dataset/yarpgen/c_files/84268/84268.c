/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (+(max((-190625930757321474 + var_1), var_3)));
    var_15 = (max(var_15, var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = (i_0 % 2 == zero) ? (max((((!(((-6656846744411086272 + (arr_0 [i_0]))))))), (max((((6418367182997101380 < (arr_0 [i_0])))), (arr_0 [i_0]))))) : (max((((!(((-6656846744411086272 - (arr_0 [i_0]))))))), (max((((6418367182997101380 < (arr_0 [i_0])))), (arr_0 [i_0])))));
                    var_17 = var_0;
                    arr_6 [i_0] = var_2;
                }
                var_18 = (((min((max(6418367182997101392, 6418367182997101383)), (-662756345903275504 - var_5)))) ? ((((((8652708060406107260 >> (((arr_2 [i_0]) + 2449505951267238917)))) > (~-879893255524090872))))) : (min((8072711865488080275 ^ var_8), (var_9 | -26))));
                var_19 = max(((~(arr_0 [i_0]))), (((var_2 + -1) - var_8)));
            }
        }
    }
    #pragma endscop
}
