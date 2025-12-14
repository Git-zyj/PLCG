/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70648
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
    var_10 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : ((-(((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_4] [i_0] = arr_4 [i_0];
                                var_11 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) max((arr_5 [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) : (max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2])), (0U))))))))));
                }
            } 
        } 
    } 
}
