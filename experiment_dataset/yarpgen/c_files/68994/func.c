/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68994
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
    var_20 &= ((/* implicit */unsigned long long int) ((((-1LL) + (9223372036854775807LL))) << (((((max((((((/* implicit */_Bool) var_9)) ? (-2349853169910066655LL) : (((/* implicit */long long int) var_16)))), (-9223372036854775793LL))) + (2349853169910066711LL))) - (56LL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 = ((((((/* implicit */int) var_4)) | (((/* implicit */int) var_3)))) >= (((/* implicit */int) var_14)));
                    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) 3836280333U)))), ((!(((/* implicit */_Bool) (short)28073)))))))));
                    arr_7 [i_0] [5ULL] [i_2] [(unsigned short)4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_8))))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((max((((/* implicit */unsigned int) (short)-7773)), (994441883U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 + 4]))))))))));
                }
            } 
        } 
    } 
}
