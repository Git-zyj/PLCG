/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((var_6 ? (!var_8) : var_6));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((29 >= (arr_2 [i_0 - 1])));
        var_14 = ((8194972876502898713 ? ((((31566 + 27398) ? ((((arr_3 [i_0 - 1]) < 138))) : 146))) : 3688553015608321382));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_15 |= ((((((-26536 ? 95 : 134)) ? (((arr_8 [i_0] [i_1] [i_1]) ? (arr_12 [i_2] [i_2] [i_2]) : 0)) : (((arr_12 [i_3] [15] [13]) * 138))))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_0 - 1] [i_0 - 1] [i_0] = 117;
                            var_16 = (((max((arr_10 [i_0 + 2]), (arr_10 [i_0 + 2])))) ? (((arr_10 [i_0 + 2]) ? 6174496948937842440 : (arr_10 [i_0 + 2]))) : ((((92 >= (arr_10 [i_0 + 2]))))));
                            var_17 = (max(var_17, ((((arr_5 [1] [i_1]) ? (-1945098368 <= -3796976412341319126) : (((arr_12 [i_4] [i_0 + 2] [6]) ? -5198 : ((28067 ? 8757 : (arr_14 [i_0] [17] [10] [i_3] [i_4] [i_4]))))))))));
                            var_18 += 143;
                        }
                        arr_16 [i_0] [i_0] [6] [i_0] [i_0] [i_0] |= (((((-1945098368 ? (arr_0 [i_0] [i_2]) : (arr_10 [i_1])))) ? ((38876 ? 8749 : (arr_0 [i_0] [i_0 + 2]))) : (((6174496948937842451 ? (arr_7 [i_2]) : 4024876263)))));
                        var_19 ^= (!(((~(arr_7 [i_2])))));
                    }
                }
            }
        }
        arr_17 [6] [i_0] |= 146;
    }
    #pragma endscop
}
