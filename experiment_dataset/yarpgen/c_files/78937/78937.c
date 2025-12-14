/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((var_5 ? var_6 : ((8320503172174311974 ? ((min(var_0, var_1))) : var_14))));
    var_20 = (((((29986 << (!221)))) ? var_14 : 16384));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0 + 2] [i_0]);
        arr_3 [i_0] = -609931339;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = (((((((((arr_4 [i_1] [i_1]) ? (arr_5 [i_1]) : var_16))) ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? ((((~18618) | ((3 | (arr_4 [i_1] [i_1])))))) : (arr_6 [i_1])));
        var_21 = var_9;
        arr_8 [i_1] = -7084410707294814889;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_22 = (4294967279 ? 0 : 5843532046675497604);
                            arr_19 [i_1] [i_2] = ((var_7 ? (((arr_11 [13] [16]) ? ((((arr_6 [i_1]) ? (arr_16 [i_1] [i_2] [i_3] [i_4 + 3] [i_5] [i_3] [i_3]) : (arr_17 [8] [i_2] [i_4] [18])))) : (((arr_17 [0] [i_4 - 1] [0] [i_1]) ? (arr_6 [i_1]) : (arr_9 [i_5]))))) : ((((arr_4 [i_4 + 1] [i_4 - 2]) ? (arr_14 [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_4 + 1]) : ((15 ? (arr_4 [i_1] [i_1]) : (arr_9 [i_1]))))))));
                            var_23 = ((((((8191 ? 1 : (arr_6 [i_5])))) ? (((arr_16 [i_1] [i_1] [10] [i_1] [i_1] [i_1] [i_1]) ? (arr_16 [i_1] [i_1] [6] [i_1] [i_1] [i_1] [i_1]) : -16)) : -1)));
                            var_24 *= -1;
                        }
                    }
                }
            }
            arr_20 [i_1] |= ((-1860186940 && ((min((arr_17 [i_1] [i_1] [i_1] [i_1]), ((0 ? 8190 : var_14)))))));
            arr_21 [9] [i_2] = ((((((((7986 ? (arr_9 [i_1]) : 0))) ? (arr_17 [i_1] [i_1] [1] [6]) : (((arr_5 [i_1]) ? 1 : (arr_13 [i_1] [i_2] [i_1])))))) ? (((arr_16 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] [i_1]) ? ((-10356 ? 246 : 14884524146813829139)) : (~22075))) : (((3562219926895722464 ? 150 : -9223372036854775804)))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_25 = (min(var_25, (((31 ? (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_26 [i_2] [i_2]))))));
                        var_26 += ((-((194 ? (arr_18 [i_1] [i_2] [i_2] [i_2] [i_6] [i_7] [i_7]) : 22087))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
