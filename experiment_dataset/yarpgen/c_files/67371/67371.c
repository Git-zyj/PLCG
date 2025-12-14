/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67371
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
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 *= (-1 <= 21);
                            var_14 = ((var_5 ? ((~(((arr_5 [i_1] [11]) ? (-32767 - 1) : -1)))) : ((((((arr_9 [i_3] [i_1] [i_2]) | -3787))) ? ((13502 ? -114 : -114)) : (arr_5 [i_0 - 2] [i_2 - 1])))));
                            var_15 = 114;
                            arr_12 [i_0] [i_1] [i_0] [4] [i_2 + 1] [i_0] = ((-((-5706499089870092144 & (arr_7 [i_0] [0] [i_0 - 3] [i_1])))));
                        }
                    }
                }
                var_16 = (min(((((3781 > var_5) ? ((var_4 >> (-81491873 + 81491898))) : (((3153324827276434150 && (arr_10 [i_0 + 2] [2] [i_1] [1]))))))), ((((!(arr_6 [9] [i_1] [i_1]))) ? (arr_3 [i_1] [i_0 - 2]) : 2147483392))));
            }
        }
    }
    var_17 &= var_4;
    #pragma endscop
}
