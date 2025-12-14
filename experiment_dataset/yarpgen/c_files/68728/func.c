/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68728
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
    var_16 = ((/* implicit */unsigned int) max((var_0), (((/* implicit */long long int) var_8))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2055183513)) ? (((/* implicit */long long int) arr_0 [i_0 - 1])) : (((((/* implicit */_Bool) -1385071952)) ? (((/* implicit */long long int) -1385071952)) : (var_0)))));
                    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) var_5)))));
                }
            } 
        } 
        var_19 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
        arr_8 [i_0] = ((-1385071964) ^ (((/* implicit */int) ((1385071952) <= (-1385071974)))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 2; i_3 < 24; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) | (((/* implicit */int) arr_9 [i_3 - 2]))));
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_9)))))));
        var_21 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-94)))));
        var_22 = ((/* implicit */short) ((unsigned int) ((var_13) <= (var_0))));
        arr_12 [i_3] = ((((unsigned int) var_1)) | ((-(3129270397U))));
    }
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_23 = (+((+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_2))))));
        arr_17 [i_4] = ((/* implicit */unsigned char) 1165696887U);
    }
    var_24 = ((/* implicit */unsigned int) var_9);
}
