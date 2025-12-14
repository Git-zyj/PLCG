/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77189
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_10 = (!((!(((/* implicit */_Bool) (-(var_9)))))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (min((var_9), (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        var_12 = ((/* implicit */int) arr_1 [i_0]);
        var_13 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) ((unsigned char) arr_1 [i_1])))));
        var_15 = ((/* implicit */signed char) (((~((~(var_3))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((255U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))))));
        var_16 = ((/* implicit */unsigned char) var_5);
        arr_5 [i_1] = ((/* implicit */unsigned short) 8388544U);
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
    {
        var_17 = var_7;
        var_18 = ((/* implicit */unsigned char) (unsigned short)54187);
    }
    var_19 &= ((/* implicit */int) min((((/* implicit */short) var_2)), (var_7)));
}
