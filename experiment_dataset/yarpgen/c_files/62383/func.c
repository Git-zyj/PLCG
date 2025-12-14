/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62383
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
    var_10 = ((/* implicit */unsigned char) 3230487334U);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((int) 2112302397U)) : ((-(((/* implicit */int) arr_2 [i_0 - 1]))))))));
                    arr_7 [(short)15] [i_1] [(short)15] [i_0 - 1] |= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_0)))))) | (((524501872U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((short) min((((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) var_2)))), (arr_3 [i_0 + 1])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) < (var_9))) ? (1064479952U) : (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
}
