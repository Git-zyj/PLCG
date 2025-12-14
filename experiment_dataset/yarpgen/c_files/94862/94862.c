/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-89 % -25255) == (min(3, 15)))) ? ((((-108 <= 127) ? var_7 : var_5))) : ((((max(-89, 832662809502503789))) ? (((-89 ? -25246 : 3))) : 17740485182468300247))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((-1536824116 || 1) ? ((-14 ? 7548213575734880453 : 12612598253795886699)) : (min(1, 18446744073709551615))));
                var_12 -= ((17 ? 25244 : 8));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_13 ^= ((-55 ? 91 : 16923891172162355370));
                    var_14 = ((832662809502503779 ? 3459910656 : (1 + 3)));
                }
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    var_15 = (min(var_15, ((((-96 * 90) ? (16 * 17) : (((8115893701302160173 + 15398) + (((-91 ? 3459910670 : 3459910656))))))))));
                    arr_13 [1] [1] [i_1] [i_1] = (max((3 ^ 32764), ((2998821394 ? -14 : -638659433))));
                }
            }
        }
    }
    #pragma endscop
}
