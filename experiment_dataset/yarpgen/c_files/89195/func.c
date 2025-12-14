/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89195
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
    var_14 &= ((/* implicit */unsigned char) var_6);
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) var_3)))) : (var_13)))) < (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_11))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (short)977)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_0] [i_2])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (var_7)))) ? (((/* implicit */int) ((_Bool) ((unsigned short) arr_4 [i_0] [i_2])))) : (((((_Bool) (short)978)) ? (((/* implicit */int) (short)16393)) : (((/* implicit */int) ((signed char) (signed char)92)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */unsigned long long int) ((((var_12) + (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((unsigned short) 7544899973453668864ULL)))))) < (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (var_12)))) - (var_10)))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_10))) | (((var_12) - (var_13)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) ((((/* implicit */int) (signed char)-106)) / (((/* implicit */int) (short)983))))))));
}
