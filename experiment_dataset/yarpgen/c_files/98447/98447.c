/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((~((var_11 ? (-1803852349 > 14418) : var_6))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = 750860226;
                    var_15 = 1;
                    var_16 = (max(var_16, var_5));
                    var_17 = ((min(((-750860227 ? 5041564359888633905 : (arr_6 [i_2 - 2] [3] [i_0] [i_0])), (arr_6 [i_1] [i_2 + 1] [i_2] [i_2])))));
                    var_18 = (((((var_6 ? (!1107301714) : (-32767 - 1)))) ? (-32767 - 1) : (arr_4 [i_0])));
                }
            }
        }
        arr_9 [i_0] = 511;
        var_19 = (max(var_19, ((((arr_4 [i_0]) != (((!var_8) ? (((-32767 - 1) ? 0 : var_3)) : -750860227)))))));
        var_20 |= var_1;
        var_21 = (arr_1 [7]);
    }
    #pragma endscop
}
