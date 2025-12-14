/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(12715628472643956197, 1073741822)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 &= ((((-1073741823 / (arr_1 [1] [i_0 + 4])))) / ((((((arr_2 [i_1] [i_0]) ? -1073741819 : var_1))) ? var_10 : ((min(var_1, -1073741822))))));
                var_14 = (((max((arr_5 [i_0 + 2] [i_0 - 1]), (max(-1073741822, (arr_1 [i_0] [i_1]))))) + (((((((arr_2 [i_1] [5]) ^ 1073741822))) < ((-1073741823 ? 189104535 : 18446744073709551608)))))));
                arr_6 [i_0] [i_0] [i_1] = (((((((var_11 ? (arr_1 [i_0] [i_0]) : (arr_3 [i_1] [i_1] [i_0 + 1]))) - var_10))) ? ((((var_9 ? var_9 : var_7)) & (arr_0 [i_0]))) : ((((min(var_2, -1073741822))) + (arr_3 [i_0] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
