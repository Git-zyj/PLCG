/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((max(677840309, var_10)), 4210936966))) ^ (var_5 - 7183692377942786419)));
    var_14 *= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_15 = -var_2;
                var_16 ^= (arr_0 [i_1 + 3] [i_1 + 2]);
                arr_7 [i_0] [i_0] [i_1] = (((arr_4 [i_1 + 2] [i_1 + 3] [i_1 + 3]) << var_2));
                arr_8 [i_1] [i_1] [i_2] [i_0] = ((var_2 < (arr_6 [i_1 - 1] [i_1 + 1])));
            }
            var_17 = (arr_1 [i_0]);
            var_18 &= (((arr_4 [i_1 - 1] [1] [i_1]) ? (arr_4 [i_1 - 1] [i_1] [14]) : var_11));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_19 = (((arr_9 [i_3] [i_3] [i_0]) | (4130002503 ^ 6112253893855868143)));
            arr_11 [i_3] = (((arr_4 [i_0] [i_3] [i_3]) >> (var_5 - 89)));
            var_20 = ((((((arr_9 [i_3] [i_0] [i_0]) && (arr_4 [i_0] [i_0] [i_0])))) < var_5));
            var_21 = (!12334490179853683479);
        }
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        arr_14 [i_4] = 164964792;
        var_22 = (min(var_22, (arr_9 [1] [i_4] [1])));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_23 = ((-(((arr_9 [8] [8] [i_5]) ? (arr_9 [6] [i_5] [i_5]) : (arr_13 [i_5])))));
        var_24 -= arr_0 [i_5] [i_5];
    }
    #pragma endscop
}
