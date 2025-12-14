/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98801
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_20 = (((-(((/* implicit */int) var_10)))) / (((int) var_8)));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)8)) : (min((((/* implicit */int) (unsigned char)0)), (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)255))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_3]))))) < (((/* implicit */int) (unsigned char)255))));
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) var_6))))) : (((((/* implicit */_Bool) arr_13 [16U] [i_4] [i_4] [i_2] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_10))))))) ? ((-(((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (signed char)-127)))))) : ((+(((arr_5 [i_0] [(signed char)7] [(unsigned char)15]) / (((/* implicit */int) (signed char)110)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */short) min((1450672569), (((/* implicit */int) (signed char)71))));
                arr_15 [i_0] = max((min((arr_1 [i_1 + 1] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 + 3]))), (-1450672570));
            }
        } 
    } 
    var_24 = (signed char)0;
}
