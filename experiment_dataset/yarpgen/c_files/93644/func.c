/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93644
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) 0LL);
                    arr_10 [i_2] [(short)6] [(short)6] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_1] [i_2]))));
                    var_20 = ((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((((/* implicit */_Bool) ((signed char) 147493981U))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2650)))) : ((~(((/* implicit */int) arr_8 [(_Bool)1] [(unsigned char)15] [i_0])))))), (((/* implicit */int) (unsigned char)192)))))));
                                arr_15 [i_3] [i_3] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */int) (unsigned char)29);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((short) (signed char)122))))));
}
