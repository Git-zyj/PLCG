/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min((min(var_1, 73363967)), ((min(var_14, var_12))))), ((min(-1414457140, -735007793)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 -= (min((min(((min((arr_0 [i_0]), 1))), (min((arr_1 [i_0]), 2301339409586323456)))), (min(((min(var_1, 1))), (min(23, -9223372036854775804))))));
        var_18 = (min(((min((min(3527263283, (arr_1 [i_0]))), (min(3527263283, (arr_0 [3])))))), (min(((min(var_2, (arr_1 [i_0 + 2])))), (min(4665695499675098009, 1095063895))))));
        var_19 = (min(((min(1336051283, 767704012))), (min((min(0, (arr_0 [i_0 - 1]))), ((min(var_7, 16352)))))));
        var_20 = min((min((min(18446744073709551612, 0)), (min((arr_1 [i_0]), 5856279332140463477)))), ((min((min((arr_0 [i_0]), 0)), (min((arr_1 [i_0]), (arr_0 [i_0 + 1])))))));
        var_21 = (min(((min((min((arr_1 [7]), var_12)), (min(var_12, 327739138))))), (min(((min((arr_1 [i_0]), (arr_1 [i_0])))), (min(var_8, 2659835347))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_4 [0] [i_1] = (min(((min((min(2147483647, (arr_2 [i_1]))), ((min(var_10, (arr_3 [i_1 + 1]))))))), (min((min(-1566436597, 944549877)), ((min((arr_3 [i_1]), -495727439)))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {
                    arr_10 [i_1 + 1] [i_1 + 1] = (min((min(((min(var_1, 3527263271))), (min(var_9, 12414456410564087179)))), ((min(((min(-7705, var_9))), (min((arr_6 [i_1] [i_2 + 3] [i_3 - 4]), 171)))))));
                    arr_11 [i_1 + 1] [i_1 - 2] [i_1 + 1] = (min((min(410069179, -32760)), ((min((min((arr_8 [i_1 - 1] [i_1 - 1]), 2147483647)), (min(0, -497398599)))))));
                }
            }
        }
        var_22 += (min((min((min(var_3, (arr_3 [i_1]))), (min(var_4, -69451776)))), (min((min((arr_3 [5]), var_0)), ((min(14181, 7704)))))));
        var_23 -= (min((min((min(-4398046511104, var_10)), ((min(327739138, (arr_3 [i_1])))))), ((min(((min((arr_3 [8]), var_14))), (min(var_2, (arr_2 [i_1]))))))));
    }
    var_24 = min(((min((min(735007809, 8973796145719844925)), ((min(var_0, var_12)))))), (min((min(18446744073709551615, -1762864185)), ((min(1762864185, 3350417419))))));
    #pragma endscop
}
