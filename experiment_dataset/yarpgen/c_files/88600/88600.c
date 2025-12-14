/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((2 ? -12 : -8198464414079836784));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 += (((((((max(var_8, 15677330294824748062))) ? var_1 : (12 > var_6)))) ? (((((var_5 ? 16480748166092261251 : (arr_1 [i_3 + 1] [i_2 + 1]))) == var_2))) : (15 >= 19)));
                            var_16 |= (((arr_0 [i_2 + 1]) & (max(((var_12 ? 2105450174201515732 : -48)), ((((arr_8 [i_0] [i_0] [i_0] [12] [i_0] [i_0]) + 34)))))));
                            var_17 = (min(var_17, (!31028)));
                            arr_10 [1] [2] [i_2] [i_0] [i_0] = -48;
                        }
                    }
                }
                var_18 = ((((24 && 0) < 255)));
            }
        }
    }
    var_19 *= (((((var_4 + 2147483647) << ((((11 ? 1447335487296253871 : 0)) - 1447335487296253871))))) ? (((max(-8074, var_11)))) : 8097);
    var_20 = 52609;
    var_21 = var_6;
    var_22 = var_13;
    #pragma endscop
}
