/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((-8507850346145560262 ? -34 : -8302))) && (((34 ? -6651 : var_8))))) ? var_9 : (var_6 + var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 = ((~((-(arr_6 [i_3] [i_3] [i_3 - 1] [i_1])))));
                            arr_10 [i_0] [i_3] [i_2] [i_0] = (((((((((arr_6 [13] [13] [13] [i_0]) ? var_8 : (arr_9 [i_1] [i_1] [i_1])))) ? var_4 : 16943610968538417162))) ? (arr_7 [i_2] [i_2] [i_2]) : (((!(((arr_7 [i_0] [i_1] [i_0]) && 34)))))));
                        }
                    }
                }
                arr_11 [11] = ((-32 | ((((((var_8 ? 48 : (arr_2 [i_0] [2])))) ? (((arr_2 [5] [i_0]) ? 32 : 13951)) : (arr_1 [i_1]))))));
                arr_12 [i_0] [i_0] = ((16619103100491991170 ? -28563 : -357613272957313616));
                var_19 -= (var_10 ? (((var_6 < -10283) ? var_10 : (((var_14 ? -108 : -27787))))) : (((((var_12 ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : -26204))) ? var_10 : -3918567732674905191)));
            }
        }
    }
    #pragma endscop
}
