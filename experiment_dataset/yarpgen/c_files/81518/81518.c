/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = ((((+(((arr_4 [i_0]) ? var_8 : (-127 - 1)))))) / (max(17577061487147633220, 17577061487147633220)));
                    var_18 = 17577061487147633223;
                    var_19 = (arr_7 [i_1] [i_1] [i_0 + 1] [i_2]);
                    var_20 &= ((((!((((arr_0 [2]) << (var_0 + 94)))))) ? (max((arr_0 [0]), ((((arr_6 [i_0] [i_1] [i_1]) < var_7))))) : (!179)));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, var_2));
                                var_22 = ((179 ? (arr_4 [i_0]) : (max((min(var_14, 76)), ((869682586561918388 ? 100 : var_14))))));
                                var_23 = 32767;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 ^= ((((741419380323925598 ? 255 : 70))) ? var_6 : (max(var_5, 3244651799)));
    #pragma endscop
}
