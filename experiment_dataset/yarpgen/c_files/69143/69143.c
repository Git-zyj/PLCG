/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((min((min(var_1, var_1)), (min(var_9, 27905))))), (min(((min(-27905, 63))), (max(1028644780, 13250))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (min(((min(1621, 65519))), (min((max(1346805052068215833, 4858261551246454194)), ((min(var_13, var_6)))))));
        var_16 *= (min(((min(((min(22918, 2411543945))), (min((arr_1 [i_0]), 59))))), (min((min((arr_0 [i_0]), var_12)), (min((arr_0 [i_0]), (arr_0 [12])))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_17 = (max(var_17, ((min(((min(((min((arr_8 [i_4] [i_3]), 203))), (min(11677, 138))))), (min((min((arr_0 [i_2]), 1622061501212127675)), (max(1, (arr_4 [i_4]))))))))));
                        arr_14 [i_4] [i_3] [i_4] [i_2] [i_1] = min(-383628221, 28504);
                        arr_15 [i_4] [i_2] [i_1] [i_3] = (min(((min((max(1, (arr_1 [7]))), ((min(28504, var_2)))))), (max((min((arr_4 [i_2]), var_3)), (min(var_12, 11359323121306804484))))));
                    }
                    arr_16 [i_1] [i_2] [i_3] = (min((max((max((arr_2 [i_1]), (arr_0 [i_3]))), ((min((arr_11 [i_3] [i_3] [i_2] [i_2] [i_2] [i_1 - 4]), 19641742))))), ((min((min(101, var_0)), (min((arr_10 [i_3] [i_3] [i_3] [i_3] [i_1]), 1)))))));
                    arr_17 [i_1] [i_1] [i_3] = (min((min(122, (min(3145728, 31082)))), -22918));
                }
            }
        }
    }
    var_18 = (min((min(((min(31, var_3))), (min(var_11, var_3)))), ((min((min(var_12, var_9)), ((min(var_10, 173))))))));
    #pragma endscop
}
