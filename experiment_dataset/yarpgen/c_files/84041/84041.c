/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0] [13] [i_0] [i_0] = ((+((min((arr_4 [i_2] [i_2 - 1] [i_2 - 1]), 121)))));
                    var_14 = ((~((62985 ? ((24702 ? (arr_7 [i_2] [i_1]) : 62985)) : (((min(-96, 1))))))));
                }
                var_15 = ((((((1 && 17179869183) ? (((arr_2 [i_0] [i_0]) ? 4294967295 : 3277680075)) : (!35184372088831)))) ? 106 : (((!(arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                var_16 = max((var_7 || 46), 2569);
            }
        }
    }
    var_17 = (min((1 << 1), -62979));
    var_18 = (((((var_1 << ((((((2305843009213693951 ? -1 : 1)) + 31)) - 30))))) ? (((((56336 ? 326621038 : 18446744073709551615)) == (((var_5 ? 65535 : 17861)))))) : ((((1 ? 1 : 114))))));
    var_19 += (min(var_3, (((((169 ? 121 : 17958298265973570175))) ? (173 / -7614465062376066004) : 1))));
    #pragma endscop
}
