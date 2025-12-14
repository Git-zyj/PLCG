/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5732
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (4294967281U)));
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [(short)7] [i_0]);
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_1 [(unsigned char)4] [(unsigned char)4]))))) : ((~(((/* implicit */int) (signed char)8)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 4; i_2 < 12; i_2 += 3) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_10 [i_1]))));
            arr_11 [(unsigned short)13] [i_1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) : (1685520915U))));
        }
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_15)), (var_6)))))) > (((unsigned long long int) (-(((/* implicit */int) (signed char)-54)))))));
        arr_12 [i_1] = ((/* implicit */unsigned int) (signed char)39);
    }
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
    var_24 = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) (short)-26841)))));
    var_25 = ((/* implicit */signed char) ((((int) ((short) var_12))) ^ (((/* implicit */int) ((_Bool) (signed char)-103)))));
    var_26 = ((/* implicit */unsigned int) min(((signed char)38), ((signed char)-40)));
}
