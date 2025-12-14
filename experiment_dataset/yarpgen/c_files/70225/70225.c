/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((((((-2950801450924271487 ? 4294967295 : -2950801450924271487))) && -2)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = ((-(((min(var_11, (arr_8 [i_0] [i_1] [i_2])))))));
                    var_21 = (!2950801450924271481);
                    var_22 -= 3987498770085020626;
                    var_23 = (!0);

                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        var_24 += var_3;
                        var_25 = var_6;
                        arr_12 [i_3] [i_3] [i_0] [i_1] [i_0] [i_0] = 14964681768770852109;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_21 [i_6] [3] [i_6] = (max((arr_1 [i_4]), (((!(((var_3 ? var_8 : var_9))))))));
                    var_26 = ((((min(-7712445204129699079, (arr_4 [i_6])))) ? (~var_12) : 44346));
                }
            }
        }
    }
    var_27 ^= (((~var_11) | (37824 != 0)));
    #pragma endscop
}
