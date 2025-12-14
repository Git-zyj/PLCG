/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92975
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
    var_17 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned short) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_3 [i_1 - 3] [i_0]))))), (min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)32201))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))));
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1] [i_2])) ? (arr_8 [i_1 - 2] [i_1 + 2] [i_1 + 2]) : (arr_8 [i_1 - 3] [i_1 - 3] [i_2]))));
                            arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (65504)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((int) arr_8 [i_1 - 4] [i_0] [i_2])) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (716438795))))))));
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_1 - 4])))))));
                            arr_15 [i_0] [i_1 + 1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) arr_3 [i_1 - 4] [i_1 + 2])));
                        }
                    } 
                } 
            }
        } 
    } 
}
