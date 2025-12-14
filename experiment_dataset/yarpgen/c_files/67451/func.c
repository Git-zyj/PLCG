/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67451
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
    var_20 *= ((/* implicit */unsigned int) var_6);
    var_21 = ((/* implicit */unsigned int) ((short) var_5));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (min((var_3), (((/* implicit */int) arr_0 [(short)8])))) : (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) (signed char)(-127 - 1));
                        var_23 = ((((((/* implicit */int) arr_4 [i_1] [i_1 - 2] [i_1 - 2])) + (((/* implicit */int) arr_8 [i_1])))) + (((/* implicit */int) ((unsigned short) arr_8 [i_1]))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) ((max((874049241U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0])) % (((/* implicit */int) (!(arr_2 [i_0] [i_0])))))))));
        arr_13 [(unsigned short)6] = ((/* implicit */int) ((unsigned int) 874049241U));
    }
    var_25 = ((/* implicit */unsigned int) var_9);
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((int) var_19))) : (((((_Bool) var_5)) ? ((-(var_5))) : (((/* implicit */unsigned int) var_10))))));
}
