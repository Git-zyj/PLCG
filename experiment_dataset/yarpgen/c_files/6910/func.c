/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6910
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
    var_11 = ((/* implicit */signed char) var_7);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 - 3] |= ((/* implicit */int) 1294917641U);
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 3000049655U)) || ((!(((/* implicit */_Bool) var_3)))))));
                }
            } 
        } 
        var_12 = ((/* implicit */long long int) ((unsigned char) (+(((unsigned int) var_5)))));
        var_13 = ((/* implicit */unsigned int) min((arr_1 [i_0]), (min((((/* implicit */int) arr_5 [i_0])), (-1315440272)))));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */int) arr_10 [i_3] [i_3]);
        arr_13 [i_3] [i_3] = (-(((/* implicit */int) ((_Bool) var_7))));
        var_14 = ((/* implicit */unsigned int) ((int) ((unsigned char) 1294917656U)));
    }
}
