/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((!-258400472670112240) ? (max(258400472670112229, -258400472670112243)) : (62860 / -258400472670112229))) != (((var_3 | ((max(1, var_10))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (max(var_16, (((((max(0, -258400472670112231) << (((arr_1 [i_0] [i_0]) - 446517271)))))))));
        arr_3 [i_0] = (((((1 & (23652 != 1)))) ? (arr_0 [i_0]) : var_12));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((-(min((11799409938252036687 << var_7), ((max((arr_4 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))))));
        var_17 -= 14070372052363574264;
    }
    var_18 = (((((var_3 ? -258400472670112230 : var_5))) * (((~((max(-1568, var_8))))))));
    var_19 = var_11;
    #pragma endscop
}
