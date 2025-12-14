/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67623
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
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_0 + 1] [i_1] [i_3] [i_0 + 1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 3] [i_2])))));
                        arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_12 [i_0 - 1]) & (((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */int) ((signed char) ((int) arr_5 [i_0 + 3] [i_1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 3] [i_0] [i_0 + 1] [i_0 + 1] [i_3])))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) ((var_5) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_17))))))));
    }
    var_19 ^= ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_9))))), (var_13))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_12)), (var_17)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_17)))) : (((/* implicit */int) var_11))))));
}
