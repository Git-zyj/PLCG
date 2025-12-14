/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_12, var_6));
    var_14 = (max((max(((min(4227858432, 1275128915))), var_0)), ((min(25088, (min(65528, (-2147483647 - 1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = min((max(-26, (arr_3 [i_0] [i_1] [i_2]))), (max((min(18446708889337462784, 6344567282178476954)), ((max(0, (arr_5 [i_1] [i_0])))))));
                    var_16 = (max(var_16, ((max(((max((max(32764, 256)), (-2147483647 - 1)))), (min((arr_4 [i_0] [i_2]), (arr_3 [i_0] [i_1] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
