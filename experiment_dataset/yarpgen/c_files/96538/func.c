/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96538
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = arr_4 [i_0];
                var_21 = ((/* implicit */unsigned char) max(((+(((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) var_0)))))), (((/* implicit */int) ((unsigned char) ((unsigned char) var_8))))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_4 [i_0])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (3861380591U) : (1642003948U)))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) (short)4146)), ((unsigned short)52992)))) + (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)65532)))))) : (((/* implicit */int) ((unsigned short) min((var_14), (var_19)))))));
    var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-3)) ? ((+((~(((/* implicit */int) (short)-11317)))))) : (((/* implicit */int) var_3))));
    var_25 = ((/* implicit */short) max((((/* implicit */long long int) (+(((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))), ((~(((long long int) var_16))))));
}
