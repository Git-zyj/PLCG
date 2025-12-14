/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97993
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((((unsigned int) 5770128030583742900LL)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))));
        arr_5 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((short) (-(((unsigned long long int) arr_1 [i_0])))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_10 [i_1] = ((/* implicit */long long int) (unsigned char)202);
        var_12 = ((/* implicit */_Bool) min((var_4), (((((var_4) < (4454912057127058110LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) : (((long long int) var_7))))));
        var_13 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_1]))));
    }
    var_14 = ((/* implicit */int) ((_Bool) var_3));
    var_15 = ((/* implicit */signed char) ((int) min((var_2), (((/* implicit */unsigned long long int) var_4)))));
}
