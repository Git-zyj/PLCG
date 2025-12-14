/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((((!((min(var_13, var_17))))) ? (!13850372084265566420) : (~var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (arr_4 [i_0] [i_1] [i_2])));
                    arr_10 [i_1] [11] [11] [i_1] = -13850372084265566427;
                    var_20 += ((~((-(arr_3 [i_2 + 2] [i_2 + 2] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
