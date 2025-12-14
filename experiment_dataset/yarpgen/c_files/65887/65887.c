/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(1, 2103007075));
    var_21 = ((((((!var_3) ? (min(var_1, -1)) : var_13))) || var_3));
    var_22 = (max(((var_2 | (((var_10 ? var_15 : 953356971))))), var_8));
    var_23 = ((((((72057594037927935 + var_2) ? ((var_11 ? var_16 : 5361572021448834977)) : (var_16 - var_12)))) ? var_2 : (min(((var_14 ? var_3 : 12453067647008640949)), (1 - 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [3] [4] [5] [9] |= (((min((10853 % 21202), (max((arr_2 [7] [3] [1]), 131071)))) & -320793539));
                        var_24 |= (((((var_10 ? (arr_3 [i_3]) : (max(11012352490280451756, 2147483647))))) ? (!56303) : 6432127928482766004));
                        var_25 = (max(var_25, ((((((~(arr_1 [8] [i_1 - 1])))) % ((-(max(var_9, (arr_0 [12]))))))))));
                        var_26 = -3672395324837020037;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_0] [i_4] [12] [i_1] = (!3687599164);
                        arr_15 [3] [i_4] [12] [13] = (max((((~5759897861286338370) | var_7)), (arr_9 [i_0])));
                        arr_16 [10] [4] [i_4] [1] = (9495 / var_6);
                        arr_17 [14] [i_4] [1] [1] = ((52171 ? ((((((arr_1 [i_0] [i_0]) ? 1078032887 : 1))) - -4231755141)) : ((((min(var_12, (arr_1 [1] [i_4]))) >> (((!(arr_5 [9])))))))));
                    }
                    var_27 *= ((var_9 ? (arr_8 [i_1 + 2] [1] [13] [15] [i_2]) : (~var_13)));
                }
            }
        }
    }
    #pragma endscop
}
