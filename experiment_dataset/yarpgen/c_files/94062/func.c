/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94062
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
    var_19 = ((/* implicit */int) var_18);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((var_18), (((/* implicit */unsigned int) var_6))))))) * (134217727U)));
        var_21 = ((((/* implicit */int) ((short) 134217735U))) << (((((((/* implicit */_Bool) -1901160271)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)-78)))) - (65))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_2] [(unsigned char)16] [i_0]), (arr_4 [i_0] [i_0] [i_2])))) ? (((/* implicit */long long int) (~(134217727U)))) : (max((((/* implicit */long long int) 134217709U)), (var_9)))));
                    var_22 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (2047)));
                    var_23 *= ((/* implicit */unsigned int) ((unsigned char) arr_4 [15LL] [i_1] [i_0]));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) var_18);
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) (+(498890030)));
        var_24 = max(((-(4272980375U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2056))))));
        var_25 = ((/* implicit */unsigned int) 512);
        var_26 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) || (((/* implicit */_Bool) 4U)))));
        var_27 -= ((/* implicit */short) (+(((/* implicit */int) ((min((var_12), (arr_11 [i_3] [i_3]))) < (var_5))))));
    }
    var_28 = ((/* implicit */int) var_13);
}
