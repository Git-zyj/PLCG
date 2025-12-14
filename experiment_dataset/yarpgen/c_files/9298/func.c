/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9298
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [(unsigned short)10] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)43267)) != (1533862740))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) 1533862740);
                    var_16 = ((/* implicit */int) (unsigned short)22268);
                    var_17 = ((/* implicit */unsigned short) min((1533862740), (((/* implicit */int) (unsigned short)36457))));
                }
                arr_10 [i_0] = 1533862740;
                var_18 = ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (-1533862746) : (arr_5 [i_0] [i_1]))) % (790517666));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) -1560209483);
}
