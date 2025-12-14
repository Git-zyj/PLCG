/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(20145, ((-(((45382 || (-2147483647 - 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] &= (((2147483644 & -1056964608) ? (~45354) : ((1507 ? ((46129 ? 49812 : 524287)) : (((1056964603 ? 49828 : 45355)))))));
                var_11 = (min(var_11, (((((((min(49152, 32768))) ? -524305 : (442166032 + 45372))) + 15)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 = ((-3354661251 ? 12767 : 182));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 -= ((min(3409510448, (0 >= 1351734375))));
                                arr_17 [i_0] [i_1] [i_1] [16] |= (((+-3338283328) / (max(8142137210864922727, (~2354)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(((((min(4294967295, 13440))) ? 930699340 : (~1879048192))), var_6));
    #pragma endscop
}
