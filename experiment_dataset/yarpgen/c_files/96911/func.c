/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96911
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 += (((+(arr_1 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_10);
        var_12 = ((/* implicit */_Bool) min((((unsigned int) arr_2 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= ((~(arr_1 [i_0]))))))));
        var_13 = ((/* implicit */int) ((unsigned int) (!(var_8))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) (+(((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214))) > (var_4))) ? ((+(((/* implicit */int) arr_14 [i_0] [i_1] [4] [i_3])))) : ((-(((/* implicit */int) (short)-23954))))))));
                        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned char) (_Bool)1);
}
