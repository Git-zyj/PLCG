/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((max(1069706465209734119, 14427))) ? ((29012 ? 51 : -22502)) : 10469)));
    var_11 = (min((min(205, 166)), -22481));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [1] [0] [10] = (min(((((31 ? 1 : -22511)) & 9768337030287783327)), ((169 ? (-127 - 1) : 79))));
                    arr_7 [i_1 - 1] [i_0] = 201;
                }
            }
        }
    }
    var_12 = ((((((min(1, 69)))) - (~-2122137609891087299))));
    #pragma endscop
}
