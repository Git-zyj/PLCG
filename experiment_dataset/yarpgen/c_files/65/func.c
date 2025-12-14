/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (short)8)) | (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (unsigned char)214))))));
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_1] [i_0])) % (((((/* implicit */int) var_19)) * (((/* implicit */int) (short)-20)))))))));
                    var_20 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-18366)), (267137399U)))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0] [i_0])) != (var_5))) ? ((~(((((/* implicit */_Bool) (unsigned short)38488)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) var_16)))))) : (((((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned short)38488))));
                }
            } 
        } 
    } 
    var_23 = (!(((/* implicit */_Bool) (unsigned char)255)));
}
