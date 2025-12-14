/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95074
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) (signed char)-105);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 = ((arr_9 [i_3]) / ((~(((/* implicit */int) (signed char)102)))));
                                var_18 = ((/* implicit */unsigned int) ((int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_0 + 2] [i_1] [(_Bool)1] [i_4]))))) / (((((/* implicit */_Bool) arr_12 [(unsigned char)13] [(_Bool)1] [(short)4] [(short)4] [i_4])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = (-((~(((/* implicit */int) ((unsigned short) var_6))))));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (14745559066685045573ULL))))));
    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))) ? ((+(var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) var_9)))))))));
}
