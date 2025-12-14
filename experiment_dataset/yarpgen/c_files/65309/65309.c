/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [8] = (max(-267764253, 884099849218804000));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_10 = 0;

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_11 = (max(var_11, (var_8 || -884099849218803990)));
                            arr_12 [i_0] [i_3] [3] [i_1] [i_0] = 13739713887462566154;
                        }
                    }
                }
            }
        }
    }
    var_12 -= ((((5238666874369539265 ? 13739713887462566143 : ((123 ? 0 : var_0)))) > ((((max(65535, 8997226294130204854))) ? ((var_6 ? 9449517779579346791 : 13739713887462566178)) : (min(var_1, 9449517779579346758))))));
    #pragma endscop
}
