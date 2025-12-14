/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(((((2955105405308178603 ? var_5 : var_9))) ? var_10 : (((min(182, 60312))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (max(((~(~var_1))), ((((var_6 || var_11) || 12288)))));
                    var_16 = ((max(var_2, 12294)));
                    var_17 = (min((53247 || 65535), (((53232 | 12289) >> (var_4 - 10855604063846766720)))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_18 = ((((max((~53227), (arr_9 [i_4])))) ? var_10 : ((var_8 ? 12289 : (min(24, 53247))))));
            var_19 = (max(var_19, (((~(((!(((53240 ? var_7 : var_13)))))))))));
            arr_15 [i_4] [i_4] &= ((((((3191259386 ? 6861758922427108050 : 65535)) | 20)) * (((53250 + 12294) ? 0 : 32767))));
            arr_16 [15] = ((-var_12 ? ((((arr_11 [i_4]) ? var_0 : 16626306106510075278))) : (((((60412 ? -8495878983396852569 : 53252))) ? (((((arr_3 [i_3]) != 46436)))) : (~var_13)))));
        }
        arr_17 [i_3] [i_3] = (((arr_12 [i_3 + 1] [3]) & (arr_6 [i_3 + 1])));
    }
    #pragma endscop
}
