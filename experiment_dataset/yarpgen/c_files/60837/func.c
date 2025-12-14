/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60837
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
    var_10 = ((/* implicit */int) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_9))) * (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) var_0))))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] [4U] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            arr_5 [i_0] [(unsigned char)9] [(unsigned short)8] = ((/* implicit */signed char) var_2);
        }
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [2]))) < (((long long int) 3938986969U))));
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) arr_10 [i_2]);
        var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
        arr_12 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 355980327U)) && ((_Bool)1))), (((((/* implicit */_Bool) (unsigned char)17)) || (((/* implicit */_Bool) -1))))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) ((var_0) && (((/* implicit */_Bool) arr_9 [(signed char)20]))))) - ((-(((/* implicit */int) var_2)))))));
        var_12 &= min((((/* implicit */unsigned char) var_6)), (arr_9 [14LL]));
    }
}
