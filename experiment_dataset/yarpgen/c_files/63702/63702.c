/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 4] = (arr_1 [i_0] [i_1]);
                var_18 &= (1022257775 ? 8227776776675813572 : 0);
                var_19 = ((~(var_7 > var_17)));
                var_20 = (min(200, 65528));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_21 = (((min((arr_9 [i_2] [i_3]), var_15))) & ((((94 >> (253 - 224))) ^ (185 == var_2))));
                var_22 = 9188;
            }
        }
    }
    #pragma endscop
}
