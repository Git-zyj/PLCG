/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87902
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_0]) ? (-1410703793753413914LL) : (arr_0 [i_1])))))))));
                var_11 = ((/* implicit */_Bool) 3331182310U);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */short) (-(3331182315U)));
                    var_12 = arr_0 [(_Bool)1];
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_0);
}
