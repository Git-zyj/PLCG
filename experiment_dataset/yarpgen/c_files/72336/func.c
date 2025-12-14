/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72336
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
    var_10 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967295U)), (var_0)))) || (((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) var_3))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_2] [(short)4] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)31880)) - ((+(((/* implicit */int) arr_8 [i_0] [i_4] [i_0]))))));
                                var_11 = ((/* implicit */short) (~(((arr_10 [i_0] [i_1] [i_2] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_2] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1])) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_2])))))));
                    var_13 = ((unsigned char) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_1] [i_0])) < (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))));
                    var_14 = arr_7 [i_0] [i_0] [i_1] [i_0];
                }
            } 
        } 
    } 
}
