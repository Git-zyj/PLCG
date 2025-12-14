/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(((var_11 + 9223372036854775807) << 0))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (((((0 ? var_13 : (~1)))) ? ((~(arr_1 [i_0] [i_0]))) : ((((-344094662 - (arr_0 [22])))))));
        var_19 = (max(((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ^ (arr_0 [i_0]))), (arr_1 [12] [4])));
        var_20 = ((-1 * (min(-15554, 14))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_21 = (1 & 1);
                    var_22 = (((arr_1 [i_2] [i_3]) ? (((((arr_0 [i_2]) || 1)) ? -4119720431376669926 : 1)) : (-1 + -4851345138364235973)));
                    var_23 = ((~(max(((max(1237363284, (arr_7 [i_1] [i_1] [8])))), (var_14 & 16320)))));
                }
            }
        }
        var_24 = var_8;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_25 = (var_5 ? (!1237363284) : (((3960596682 ^ 1) ? 1 : (((arr_0 [0]) ? 0 : -1)))));
        var_26 = (((arr_9 [i_4] [i_4]) ? ((~(19181 ^ 68719476224))) : -4839138264040941660));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_27 = (((((((arr_14 [i_6] [i_4] [i_5] [i_4]) || 16914332)) ? var_9 : (max(1, -68719476216))))) || (arr_9 [i_6] [i_4]));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_28 |= (((max((var_2 & -1), ((var_14 >> (40298 - 40293))))) << ((47849 ? 1 : ((9274 ? 1 : -16))))));
                                var_29 += (min((40283 / -1352901670), ((~((344094661 ? 1 : var_8))))));
                                var_30 = (((arr_0 [i_4]) ^ (arr_0 [6])));
                                var_31 = (arr_14 [15] [15] [i_7] [i_8]);
                            }
                        }
                    }
                    var_32 = ((((((arr_0 [i_5]) & (arr_0 [i_5])))) ? (arr_13 [4] [i_5] [i_4]) : ((min(17, 1)))));
                    var_33 = ((((6879444883121243682 << (4278190080 - 4278190080))) - 1));
                }
            }
        }
    }
    var_34 = var_3;
    #pragma endscop
}
