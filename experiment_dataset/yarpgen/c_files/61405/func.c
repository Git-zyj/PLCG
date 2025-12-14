/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61405
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) | (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
                arr_8 [(signed char)6] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_0 [i_1] [i_0]))))) + (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_3 [i_1] [i_1])))))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned char)4])) >= (((/* implicit */int) arr_5 [(_Bool)1])))))));
            }
        } 
    } 
    var_11 -= ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) var_1))))));
}
