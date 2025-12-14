/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_20 = ((7152 ? -2427865708751239303 : 67108863));
                    arr_9 [i_2] [i_1] [i_0] [i_2] = ((~((12017561158828175150 ? -124 : 3353278303))));
                }
                var_21 = (max(var_21, var_3));
            }
        }
    }
    var_22 = min(var_5, 4407622294069813754);
    var_23 = 18446744073642442729;
    #pragma endscop
}
