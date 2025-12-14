/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67787
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
    var_10 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_4)) > (((/* implicit */int) var_8)))) ? (((/* implicit */int) max(((unsigned short)39777), ((unsigned short)59901)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned short)35404))))))) % (((/* implicit */int) var_8))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)4496)) ? (((/* implicit */int) (unsigned short)61011)) : (((/* implicit */int) (unsigned short)4510)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)41657))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)4521)) : (((((/* implicit */int) (unsigned short)3107)) - (((/* implicit */int) (unsigned short)35391))))))) || ((!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_3 [i_0])))))))));
                var_13 = (unsigned short)0;
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4471)) / (max(((-(((/* implicit */int) (unsigned short)61075)))), (((/* implicit */int) (unsigned short)17934))))));
            }
        } 
    } 
}
