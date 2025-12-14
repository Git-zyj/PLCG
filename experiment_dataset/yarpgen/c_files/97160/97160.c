/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((min(var_2, ((var_6 ? var_0 : var_14))))) ? ((((-3658723855434473852 ? 1095937949 : var_9)) | var_3)) : 9383));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 ^= (max(1095937954, 3658723855434473853));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 += (max(3658723855434473836, -5706));
                                var_22 = (min(var_22, ((((((arr_10 [i_0] [i_1] [i_2] [i_3 + 2] [i_0]) ? var_5 : (arr_10 [3] [3] [8] [i_3 - 1] [i_0])))) ? (min((arr_10 [1] [1] [i_0] [i_3 + 2] [1]), (arr_6 [i_3 + 2]))) : (min((arr_10 [i_0] [i_1] [12] [i_3 + 1] [i_4]), var_13))))));
                                var_23 += 49565;
                                var_24 += var_11;
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] [i_0] [i_0] |= (arr_7 [i_0] [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
