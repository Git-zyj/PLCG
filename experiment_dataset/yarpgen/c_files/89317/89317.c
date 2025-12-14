/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(1, (max(1, 1)))) ? var_9 : (((((((1 ? 1 : 0))) && (var_7 && var_1)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_8 [i_0] = 0;
            var_13 = var_6;
        }
        var_14 = ((((((((arr_1 [i_0]) ? -1 : var_2))) && 1)) ? (((((arr_4 [i_0] [i_0]) >= (arr_4 [i_0] [i_0]))))) : -17));
        arr_9 [i_0] = (((((((((arr_1 [i_0]) ? var_0 : var_7))) ? ((1 ? 1 : 29)) : (max((arr_2 [i_0]), 2384694004))))) ? (((-1 & (!0)))) : ((31 / ((206 ? 2171125821 : 2373644308))))));
        arr_10 [12] = ((-(arr_5 [i_0] [15] [i_0])));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_15 = (((-1 <= 6616402412920453206) - (arr_1 [i_2])));
        var_16 = (+((((arr_1 [i_2]) > 536870911))));
        var_17 &= (((max(0, 1142946550)) == ((-1723912806 ? 2323854920 : 1))));
    }
    var_18 = var_2;
    #pragma endscop
}
