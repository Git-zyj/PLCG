/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = ((995037347 % (min(((min(var_12, 1))), (min(var_6, var_15))))));
                arr_6 [i_0] = (((((0 ? var_9 : 1))) ? (((min(0, var_15)))) : ((var_12 ? var_14 : var_11))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = 4387;
                            var_20 = (min((max(995037347, 61149)), (-24595 || 125)));
                            arr_11 [0] [i_1 - 1] |= (min(((max(var_2, (min(var_6, var_13))))), ((((max(1, 7184553923596528854))) ? (((var_5 ? 995037347 : var_6))) : ((1 ? 13199640061560003930 : var_9))))));
                            var_21 = ((((7184553923596528854 ? 26016 : -5586009720533981669))) ? ((var_1 ? 4387 : 40178)) : (min(var_1, (-24452 / -24452))));
                            arr_12 [0] [0] [0] [i_0] [0] &= var_0;
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((4387 ? ((max(-24464, var_6))) : 8618929012803993557))) ? var_17 : (((((4377 ? var_2 : 25))) ? -7184553923596528855 : var_12))));
    var_23 += 43214;
    var_24 &= (min(var_8, var_2));
    #pragma endscop
}
