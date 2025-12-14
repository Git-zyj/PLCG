/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((46482 ? -1 : 9581440607606459407))) ? (~205) : var_8))) ? (10562535571690039218 + var_11) : ((0 ? var_12 : (((max(var_1, var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((var_6 || var_14), ((var_4 ? (arr_4 [i_0] [i_1]) : 0))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_17 *= (-2147483647 - 1);
                    var_18 &= (min(((min((arr_8 [i_1] [i_2 + 1] [i_1]), var_7))), (((arr_8 [i_1] [i_2 - 1] [i_1]) ? (arr_8 [i_2] [i_2 - 2] [i_2]) : (arr_8 [i_1] [i_2 - 2] [i_1])))));
                }
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    var_19 = (arr_7 [i_0] [i_0] [i_0]);
                    var_20 = var_3;
                }
                var_21 = (arr_7 [i_0] [i_0] [i_1]);
                var_22 = (var_11 ? ((-255 ? (((var_9 ? (arr_5 [i_0]) : var_5))) : var_4)) : -78);
            }
        }
    }
    var_23 = var_1;
    #pragma endscop
}
