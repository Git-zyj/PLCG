/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((2597061556 * (((max((arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1]), (arr_2 [i_0] [i_2 - 1] [i_0])))))));
                    var_19 = (arr_3 [i_1]);
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((((((2597061564 ? (arr_4 [i_2] [i_0] [i_2]) : (arr_4 [i_2] [i_1] [i_2]))) ^ -41)) == 0));
                    arr_8 [i_2] = 255;
                }
            }
        }
    }
    var_20 -= (((((0 ? 9092 : var_14))) ? 9223372036854775790 : var_8));
    var_21 = max(-13773, (max(((2597061556 ? 255 : 18446744073709551615)), 4294967295)));
    #pragma endscop
}
