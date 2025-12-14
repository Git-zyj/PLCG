/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = (((arr_0 [i_0]) ? (((arr_1 [i_0] [i_0]) ? 2724932504 : 4078914150)) : ((1778792285 >> (var_9 - 2907256097)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [5] [i_0] = -368252229;
                            arr_10 [i_3] [i_0] [i_0] = (896233935 ? ((((3917058636 ? 1701716760 : 1733812832)) << (var_2 - 1393220285))) : (max(((1119392578 ? 4 : 2561154463)), ((~(arr_8 [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    var_11 = (var_0 ? (max(2724932514, 3093914397)) : (((((3573367799 ? var_6 : 4294967292))) ? var_9 : ((var_5 ? var_5 : var_6)))));
    #pragma endscop
}
