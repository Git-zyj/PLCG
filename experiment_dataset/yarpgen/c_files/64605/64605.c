/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 -= ((31 << (((31 == (18446744073709551615 | var_10))))));
                    arr_11 [i_0] [i_1] = ((((((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1 - 2]) : (arr_4 [i_2] [i_2])))) ? ((31 ? 231 : 22)) : ((min(38, (arr_4 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_14 = ((min((14176 * 199), (60241 ^ 29))));
    var_15 = var_2;
    var_16 &= (min((((-32767 - 1) & var_6)), -16400));
    var_17 = (((((min(1, var_5)) != var_1)) ? ((28 ? 217 : 32760)) : (((6863930485313377194 && (2046 ^ var_3))))));
    #pragma endscop
}
