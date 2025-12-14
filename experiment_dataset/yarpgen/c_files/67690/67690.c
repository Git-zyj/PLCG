/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((((224 ? (min(224, var_12)) : 224)) == var_3));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, 7489));
        var_16 = (min(((((((158 ? -2 : 4106728578345174158))) ? -1788251129 : ((8191 ? 1 : 7531))))), (((arr_0 [i_0]) ? (((3453958684 ? -31 : var_13))) : ((25713 ? var_10 : var_1))))));
        var_17 = ((((min(58015, 65533))) ? (arr_2 [i_0]) : ((23687 - (arr_2 [i_0])))));
        arr_4 [i_0] = ((((max(44772, 1))) >= (((567191834 < (-32767 - 1))))));
        arr_5 [14] = -3059092652327626234;
    }
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                var_19 = (max(var_19, ((-((1586651120 ? (var_13 <= -9833) : -7541))))));
                arr_11 [i_1] [i_2] [i_2] = ((+((1 ? (arr_2 [i_1]) : -7965))));
                var_20 = (max(146, (((-10 == (var_12 != var_4))))));
                arr_12 [0] = ((min(((var_2 ? 1 : 32767)), (((7378485637307510466 ? (arr_7 [i_1] [i_1]) : var_13))))));
            }
        }
    }
    #pragma endscop
}
