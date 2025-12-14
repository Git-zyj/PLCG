/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = ((min((((3471432851 % (arr_4 [i_0 - 3] [i_0 - 3] [i_1 - 1])))), (arr_0 [i_0]))) + 6463840791969374698);
                    arr_9 [i_2] = ((-(((var_7 / 2198730581810883134) * 18920))));
                    arr_10 [i_0] [i_0] [i_2] = 1374805453;
                    var_21 += (((~((((arr_4 [i_0] [3] [i_0]) == -658360017))))) == ((min(3792, (arr_1 [i_1 + 1])))));
                    arr_11 [i_0 - 2] [i_2] = var_7;
                }
            }
        }
    }
    var_22 = (max(var_22, -1));
    var_23 = ((8482970609138706779 || (((var_2 * (!1))))));
    #pragma endscop
}
