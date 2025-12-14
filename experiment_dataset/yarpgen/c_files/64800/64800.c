/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((!(((((2130706432 ? 194 : -1702181464419176798))) == (~850122791562761689)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_14 = ((-8583325927158830687 ? ((min(143, 1))) : (8564 / -1)));
                    var_15 = (min(var_15, ((((3894463972097879476 ? 1950603337 : -26))))));
                }
                var_16 = (~3598267082);
            }
        }
    }
    #pragma endscop
}
