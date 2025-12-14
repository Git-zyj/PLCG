/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (min(var_9, ((2102157141710074332 ? -27166 : 31719367))));
    var_13 *= (!-var_0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (-1544426175 <= 44251);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    var_14 += (((!(((67108863 ? (arr_5 [i_0] [4] [i_2 + 3]) : -22616))))));
                    arr_11 [i_1] [i_0] [i_2] = (min((arr_5 [i_0] [i_1] [i_2 - 1]), (min((arr_7 [i_1] [i_1] [i_2 - 1]), var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] = 4294967294;
                                var_15 &= (((arr_9 [6] [i_3] [i_2] [6]) >= (min((((-258518080392452991 + 9223372036854775807) >> (-1289259750 + 1289259781))), ((((arr_6 [i_2] [0] [i_4 + 1]) % -125)))))));
                            }
                        }
                    }
                    var_16 = (((arr_14 [i_1] [i_2 - 3] [i_1] [i_1] [i_0] [i_2] [i_0]) == 0));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_17 = 255;
                    var_18 = (max(var_18, (~1772691924)));
                }
            }
        }
        arr_26 [i_5 + 3] = 2234579302;
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_19 -= (min(((!((((arr_13 [i_8] [i_8] [i_8]) ? 200 : var_7))))), (((((228 >= (arr_15 [i_8] [i_8] [i_8] [i_8] [2] [i_8] [i_8])))) == 872286546))));
        arr_30 [i_8] = (((arr_22 [i_8]) >= ((+(((-32767 - 1) ? 127 : 10151429498287705095))))));
    }
    #pragma endscop
}
