/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_5 ? (!1) : var_6))) ? ((-870327764 ? 1647726770 : 1)) : (((((var_0 ? 1 : var_8))) ? var_6 : -1))));
    var_13 = (min(((var_0 ? (((-32767 - 1) ? 16 : 0)) : -var_4)), ((-1647726787 ? (max(3886018773, 408948523)) : (((var_10 ? -5 : 1)))))));
    var_14 = (((((var_5 ? var_0 : var_11))) <= var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 *= 1;
                arr_5 [i_1] [i_0 + 1] [i_0] = (!-83);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_16 *= (((((arr_0 [i_3]) & 65535)) & (2032 | -13777)));
                            arr_10 [i_0] [i_1] [i_2] [i_0] [i_2] [7] = ((((arr_6 [i_0 + 1] [i_3 + 1] [i_0 + 1]) ? 5 : (arr_6 [i_0 + 1] [i_3 + 2] [i_3]))) >> (((~-99) ? 5 : 1646075555)));
                            var_17 = ((255 ? 26024 : 10716956857612389313));
                        }
                    }
                }
                arr_11 [i_0] = var_10;
            }
        }
    }
    #pragma endscop
}
