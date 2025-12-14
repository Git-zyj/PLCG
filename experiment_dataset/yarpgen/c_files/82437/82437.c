/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_15;
    var_21 = (min((max(((var_1 ? var_10 : -736156454)), var_5)), (((var_4 || (((18023530502487554207 ? var_18 : var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [10] = ((~(((arr_2 [1] [i_1 - 1]) | (arr_0 [1] [20])))));
                var_22 = ((((((((min(0, 1))) > (((arr_0 [i_0] [i_1]) / (arr_1 [i_0] [i_1]))))))) ^ (min((arr_5 [i_0] [i_0] [i_1 - 1]), (arr_6 [i_0] [i_1] [i_1])))));
                var_23 = (max(var_23, (((min((max((arr_4 [i_0] [i_1]), (arr_5 [i_0] [i_1] [i_1]))), -22065))))));
                arr_8 [i_0] [i_0] = ((((15435603697678481203 * (arr_3 [13])))) > ((((!(arr_3 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
