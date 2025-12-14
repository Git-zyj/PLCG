/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((max(65522, var_5))) + ((2052693323 ? -2052693323 : 1))))) ? (((((1528746987 ? 2052693323 : -79))) ? ((1350998730271739251 ? var_3 : 55057)) : ((var_4 ? var_8 : var_1)))) : 466387055));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_11 = ((-2052693291 ? (((1350998730271739277 * -7149847453627068793) ? (var_2 + -1014513470) : 1014513467)) : -1));
    }
    #pragma endscop
}
