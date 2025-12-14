/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76394
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0)))) > (((/* implicit */int) arr_3 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-63))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (unsigned char)224))));
                    var_11 *= ((_Bool) arr_1 [i_0]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_12 += ((/* implicit */_Bool) arr_8 [(_Bool)1] [(signed char)9]);
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3] [i_0])) || (((/* implicit */_Bool) arr_6 [i_3] [i_0]))))))))));
            arr_13 [i_0] [i_3] = arr_8 [i_0] [i_0];
        }
        arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)125))));
        var_14 = ((/* implicit */signed char) (_Bool)1);
    }
    var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) var_0))));
    var_16 = ((/* implicit */_Bool) var_9);
    var_17 = ((_Bool) var_6);
    var_18 = var_3;
}
