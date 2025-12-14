/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85885
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
    var_14 = var_1;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_0 - 1])) ? (((/* implicit */int) min((arr_4 [i_0 + 1] [i_0 - 2] [i_1 + 1]), (arr_5 [i_1 - 2] [i_0 - 2])))) : (((((/* implicit */int) arr_5 [i_1 + 1] [i_0 - 2])) % (((/* implicit */int) (unsigned short)37889))))));
                arr_7 [i_1 - 1] = ((/* implicit */unsigned short) min(((+(((((/* implicit */int) var_13)) ^ (((/* implicit */int) (unsigned short)64942)))))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                arr_8 [i_1 - 1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_5)))) == (((/* implicit */int) max(((unsigned short)14043), ((unsigned short)1))))));
            }
        } 
    } 
}
