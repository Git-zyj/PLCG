/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (48 ? 2147483630 : 47);
    var_20 = -1;
    var_21 = var_3;

    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_22 = ((-48 ? (arr_0 [i_0 - 1] [i_0 - 2]) : (arr_0 [i_0 - 1] [i_0 - 2])));
        arr_2 [i_0] [i_0] = (max((48 / 31), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0 + 1]) : -2888922428998624266))));
        var_23 = ((((((arr_1 [15] [i_0]) ? (arr_1 [i_0 - 3] [i_0 - 4]) : -16753))) ? ((521602142 ^ (arr_1 [i_0] [i_0 - 1]))) : 115));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] |= ((((((arr_3 [i_1 - 4]) ? (arr_3 [i_1 - 2]) : (arr_3 [i_1 - 1])))) ? (((!3125181601) ? (min((arr_3 [i_1]), (arr_1 [i_1 - 1] [i_1 - 1]))) : 48)) : (((-((((arr_4 [i_1]) <= (arr_0 [i_1] [i_1])))))))));
        var_24 = ((((48 ? -47 : 31)) == (arr_4 [i_1 - 4])));
        var_25 = (min(var_25, ((((((((arr_3 [i_1]) ? -47 : (arr_1 [i_1] [i_1 - 3]))) ^ 1563843489))) ? ((128 ? 0 : -48)) : 192))));
        var_26 *= ((((((((4294967278 ? (arr_0 [i_1] [i_1 - 4]) : 1992930543835976394))) ? (((arr_1 [i_1] [i_1]) ? 31 : (arr_3 [5]))) : ((((arr_1 [i_1 - 2] [i_1 - 4]) ? (arr_4 [i_1]) : (arr_4 [i_1]))))))) ? (((((48 ^ (arr_0 [i_1] [i_1])))) ? (((~(arr_0 [i_1 - 2] [i_1])))) : -315027203)) : (((((min(13828536108361420257, 65532)) > ((min(16777215, (arr_0 [i_1 + 1] [i_1 - 1]))))))))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_27 = (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2])));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_28 = (min(var_28, ((56 ? (arr_0 [i_2 - 2] [i_3]) : 31))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_29 = (arr_1 [i_2 - 4] [i_4 + 2]);
                        arr_14 [i_2] [i_3] [i_4 - 1] [i_4] [i_4] [i_5] = ((((((arr_11 [12] [12]) ? (arr_8 [i_2]) : (arr_12 [i_4 + 2] [i_3] [i_2 - 2] [i_5])))) ? (arr_10 [i_2 + 1] [i_2 - 1] [i_4 + 1]) : (arr_3 [i_4 - 1])));
                        var_30 ^= (((((24 + (arr_13 [i_2] [i_3] [i_4] [i_5])))) ? 1992930543835976394 : 2731123791));
                        var_31 = (arr_4 [i_4 - 1]);
                    }
                }
            }
        }
        var_32 = (min(var_32, (!2906259856)));
    }
    #pragma endscop
}
