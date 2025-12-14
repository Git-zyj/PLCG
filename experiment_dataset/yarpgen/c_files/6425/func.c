/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6425
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
    var_20 = ((/* implicit */short) var_13);
    var_21 += ((/* implicit */signed char) var_13);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_22 = ((/* implicit */short) var_15);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_23 = ((/* implicit */_Bool) ((short) ((532676608) >> (((776054902U) - (776054899U))))));
            var_24 *= ((/* implicit */unsigned int) ((arr_4 [i_0] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (~(arr_4 [i_0 + 1] [i_0]))))))))));
            var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((2147352576U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))))))));
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned char)185)) && (((/* implicit */_Bool) 1290361679)))));
        }
    }
}
