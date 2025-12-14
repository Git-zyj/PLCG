/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((max((max((-127 - 1), 65535)), ((min(var_10, var_3)))))), (max((max(var_2, var_1)), ((min(var_12, 4091349882270746446)))))));
    var_18 -= (min(17973, 35684));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = max((min((max(9798962682308386082, var_8)), ((max((arr_1 [i_0]), -9223372036854775806))))), (max((max(0, 68)), (max(var_7, 1073741823)))));
        var_19 = (min(((max((max(var_5, 1)), ((min(var_7, (arr_1 [i_0]))))))), (min((min(var_14, var_7)), ((min(212, -1)))))));
        arr_5 [i_0] = (max((max((max((-127 - 1), 1)), ((min(2032, 18213))))), (max(((max(206, (arr_3 [i_0])))), (min((arr_1 [i_0]), 8613109678664303687))))));
        arr_6 [i_0] [i_0] = (max((max((min(5, (arr_2 [i_0] [i_0]))), ((min(0, (arr_3 [i_0])))))), ((max((max((arr_2 [i_0] [i_0]), 4)), (max(-408952745, var_9)))))));
    }
    #pragma endscop
}
