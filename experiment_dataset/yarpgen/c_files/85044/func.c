/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85044
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-(arr_1 [i_0 + 2])))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)46088)))))));
        arr_2 [i_0] = arr_1 [i_0 - 1];
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)46088))))));
                    arr_7 [(unsigned char)12] [i_1] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19459))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)5)) | (((/* implicit */int) (unsigned short)13897))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) var_9)))))))));
                }
            } 
        } 
    }
    var_21 = (-(var_14));
}
