/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79718
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2440672983U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26)))));
                var_20 = ((/* implicit */unsigned char) min(((short)1480), (((/* implicit */short) (_Bool)1))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-124))))), (var_18))))));
    var_22 = ((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_3)) | (((/* implicit */int) (signed char)113)))), (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (short)1490)))))))) & (min((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_16)), (var_17)))))));
    var_23 = ((/* implicit */short) ((((min((((/* implicit */int) (_Bool)1)), (1383172554))) < (max((var_0), (((/* implicit */int) (unsigned short)62)))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16)))) : (70439673)));
}
