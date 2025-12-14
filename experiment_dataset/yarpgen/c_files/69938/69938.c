/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_12 *= (max(((min((min(1, 15303790)), (min(-2147483636, 1))))), (min(((max(15303799, (arr_2 [i_0 - 2])))), (min(var_11, (arr_1 [i_0] [i_0])))))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_1] = (min((min((min((arr_6 [i_0]), 19384)), ((min(1025, -1287304839))))), (max((max((arr_5 [i_0 - 2] [i_0 - 1]), (arr_1 [i_0] [i_1]))), (min((arr_1 [i_0] [i_1]), var_5))))));
            var_13 = (min(var_13, ((min((min((min(var_10, var_5)), ((min(var_6, var_1))))), ((min(139, 15303793))))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_14 = (max(((min(((min((arr_2 [i_0]), var_9))), (max(var_0, 1))))), (max(((max((arr_4 [i_0] [i_0]), (arr_2 [i_0])))), (max(8721374172925679853, var_6))))));
            var_15 = (max(var_15, ((min((min(((max(-1646, (arr_9 [i_2] [i_2] [i_0])))), (max((arr_1 [i_0] [i_0 - 1]), var_4)))), (max(((max(2657627780, (arr_10 [i_2])))), (min((arr_1 [i_2] [i_0]), var_3)))))))));
            arr_12 [i_0] [i_2] [i_0] = (max(((max((max(15303790, var_8)), ((min(var_8, (arr_10 [i_2]))))))), (max((min(117, 7010705149630376334)), ((min(var_1, var_4)))))));
            arr_13 [i_2] [i_2] = (min((max((max(-1646, -891313433)), (min(53245, 15303779)))), (min(1, (min(1449439014, 1))))));
            var_16 -= (min(((max((max(166, var_1)), (min((arr_3 [i_2] [i_0 - 2] [i_0]), 1))))), (min(((min(32512, var_0))), (max(var_0, -8715376610682174344))))));
        }
        var_17 = (min((min((min((arr_4 [i_0] [i_0]), (arr_9 [i_0 - 2] [i_0] [i_0]))), (max((arr_8 [i_0]), (arr_0 [i_0] [i_0 + 1]))))), (min((max(0, 24713)), ((min((arr_11 [i_0] [i_0] [i_0]), 1)))))));
        arr_14 [i_0 - 1] [i_0] = max(6149070496061591305, -251567030);
        var_18 = (max(var_18, ((max(((max((min(525159586, 170)), 1199784820))), (max((min((arr_6 [i_0]), (arr_2 [i_0 - 1]))), ((min(12, 126))))))))));
    }
    var_19 = (min(var_19, ((min((min((max(-1, 25)), ((min(var_9, var_4))))), (max((max(-3184, 618317259096014182)), ((max(var_8, var_8))))))))));
    var_20 = (max(((max((max(1, 27099)), ((min(var_6, var_9)))))), (min(((min(1, 46597383))), (min(var_2, var_8))))));
    #pragma endscop
}
