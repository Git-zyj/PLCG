/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58126
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
    var_13 = ((/* implicit */unsigned int) 2088936574);
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) (((-(var_12))) % ((+(var_12)))));
        arr_2 [(signed char)11] = ((/* implicit */signed char) var_6);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(((/* implicit */int) arr_3 [i_1])))))));
        var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)26)) ? (2124925097U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
        var_18 = ((/* implicit */unsigned int) var_8);
        var_19 = ((/* implicit */signed char) var_4);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)230)) | (((/* implicit */int) arr_5 [i_2]))))))));
        var_21 = ((/* implicit */short) arr_5 [i_2]);
    }
}
