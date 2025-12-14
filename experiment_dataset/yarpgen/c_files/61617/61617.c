/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!var_13) % (max((var_15 == var_7), 13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 += (((((((((-127 - 1) ? (arr_1 [14]) : 381286953)) == var_2)))) >= ((-var_12 >> (!7276)))));
                var_18 |= 3201567143;
                var_19 += (-12307 > 4283381917);
            }
        }
    }
    var_20 &= 59;
    var_21 = 46791;
    var_22 |= ((50583 ? 14953 : 65535));
    #pragma endscop
}
