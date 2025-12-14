/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61069
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_1 - 3])) : (max((((((/* implicit */int) var_10)) | (((/* implicit */int) (unsigned short)4096)))), (((/* implicit */int) var_6))))));
                    var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_8 [i_0 + 1])) ^ (((/* implicit */int) arr_8 [i_0 + 1])))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) (-((((_Bool)1) ? (1797675606) : (((/* implicit */int) (signed char)-52))))));
    var_23 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (((long long int) max(((signed char)(-127 - 1)), ((signed char)14))))));
}
