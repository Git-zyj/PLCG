/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92193
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_10 [i_3 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_3 [i_0] [i_3 - 1] [i_3 + 1])))) != (((/* implicit */int) ((arr_9 [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                        var_19 = ((/* implicit */signed char) var_1);
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((((/* implicit */_Bool) max((2246841980073381039ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_2] [i_1] [i_0 - 1]))))) ? (1192794582U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)83)) && (((/* implicit */_Bool) (short)-5446)))))))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [14LL] |= ((/* implicit */short) arr_7 [19] [i_0] [i_0] [i_0 + 2]);
        var_21 = ((/* implicit */signed char) (-(((((/* implicit */long long int) max((((/* implicit */int) var_7)), (968318475)))) / (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_22 = ((/* implicit */short) var_14);
        var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) -968318480)))))), (arr_4 [i_0] [i_0])));
    }
    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
}
