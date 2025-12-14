/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (+-1);
    var_15 = ((((!(((2169300392 ? 256 : 998827397607924873))))) ? (!58) : ((var_6 ? ((3072 ? 998827397607924873 : 1974964252)) : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [1] [i_1] [1] &= ((((max((-998827397607924874 / -331475262), ((min(-13757, -1974964253)))))) ? 687144176 : ((((min(2125666904, 30120))) ? 1 : (((65279 >= (arr_1 [3]))))))));
                arr_6 [i_0] [i_0] = ((-5810897909243764041 ? 2125666904 : 1076702023947659645));
            }
        }
    }
    var_16 = (max((min((~1314), (var_4 > 65279))), var_11));
    var_17 = var_12;
    #pragma endscop
}
