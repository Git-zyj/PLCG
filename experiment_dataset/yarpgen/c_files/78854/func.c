/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78854
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((var_11) > (((/* implicit */long long int) min((min((((/* implicit */unsigned int) (unsigned char)95)), (var_16))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1382839423)))))))))))));
        arr_2 [i_0] [6LL] = ((/* implicit */short) (unsigned char)90);
        var_20 = ((/* implicit */unsigned char) max((var_2), (((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)128)) > (((/* implicit */int) var_3))))), (var_3))))));
        var_21 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (_Bool)1)), (var_16))), (((/* implicit */unsigned int) (_Bool)1))));
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_15))));
}
