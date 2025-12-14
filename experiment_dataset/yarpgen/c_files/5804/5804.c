/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 | (~var_0)));
    var_17 = (((1 % var_3) ? (1 != 27624) : ((((1 ? var_2 : 3844426068589238097)) % ((((var_11 + 2147483647) >> (var_10 - 30))))))));
    var_18 = ((var_15 ? ((58356 ? ((var_6 ? 0 : var_9)) : var_4)) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = ((((~((1 ? var_15 : var_11)))) % ((~((var_0 >> (var_13 - 13896)))))));
                    arr_7 [i_2] = (!var_3);
                    arr_8 [i_2] = ((29913 ? ((var_0 | (~2197491171))) : (min((max(436864325, var_6)), 1))));
                    arr_9 [i_0] |= (((--30806) ? (max(((var_13 ? var_7 : var_8)), 0)) : ((((var_7 ? var_10 : var_2))))));
                }
            }
        }
    }
    var_19 = (((((var_7 <= var_7) ? var_4 : 22907)) > ((((var_2 - var_3) << (-142047288 + 142047301))))));
    #pragma endscop
}
