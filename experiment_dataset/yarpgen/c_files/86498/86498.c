/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!-var_3);
    var_14 = (min(((((((max(8942, -34)))) > (max(var_2, 33))))), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((!(!var_5)));
                var_15 = ((((min((~6252168166627439856), -10))) ? (((((((-8163 + 2147483647) >> (((arr_1 [10]) - 99))))) < ((-(arr_3 [i_1])))))) : (arr_2 [i_0])));
            }
        }
    }
    #pragma endscop
}
