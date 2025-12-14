/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = ((((max((arr_2 [i_1 - 3] [i_1 - 2] [i_1 + 1]), var_10))) == (arr_2 [i_1 + 1] [1] [i_1 - 1])));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_22 |= ((((((((arr_1 [i_2]) ? (arr_2 [i_1 + 2] [i_1] [i_2]) : -3024851761096450969))) ? ((min(var_0, 4095))) : (var_10 == 255))) >> (((((-9223372036854775807 - 1) - -9223372036854775807)) + 11))));
                    var_23 ^= (((arr_6 [i_1 + 2] [i_1 - 3] [i_1 + 1]) ? (((arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]) | var_5)) : var_17));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (((((((arr_0 [i_2]) ? 2887789888592273953 : (arr_6 [0] [3] [i_0]))) | var_12)) | (((-7742651661204796310 ? var_5 : ((var_9 ? 9223372036854775807 : var_15)))))));
                }
                arr_8 [1] [1] [i_1] = ((((2147483633 ? 18180237877406496844 : (arr_3 [i_1]))) - 18180237877406496844));
            }
        }
    }
    var_24 = 3764791871539223465;
    #pragma endscop
}
