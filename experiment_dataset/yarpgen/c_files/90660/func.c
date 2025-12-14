/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90660
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) arr_2 [i_0]);
        arr_4 [i_0] [(unsigned char)14] = ((/* implicit */unsigned int) arr_3 [i_0]);
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (signed char)78)), (3676107160U))), (((/* implicit */unsigned int) arr_1 [i_0] [4ULL]))))) < (max((((/* implicit */unsigned long long int) (_Bool)1)), (19ULL))))))));
        var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) & (1204897875U)));
    }
    var_21 = ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */unsigned long long int) 5LL)) > (4611686018427387903ULL)))) >> (((var_15) - (299453442))))), (((/* implicit */int) var_9))));
    var_22 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
}
