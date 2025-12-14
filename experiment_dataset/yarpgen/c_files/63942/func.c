/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63942
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
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 |= ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)0] [6ULL] [6ULL]))) : (max((var_6), (((/* implicit */unsigned long long int) var_15))))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+(((((/* implicit */_Bool) 10783163499662236192ULL)) ? (10783163499662236182ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))))))))));
                var_18 += ((/* implicit */long long int) (+((-(((/* implicit */int) (short)-20682))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((long long int) ((((/* implicit */int) arr_10 [i_0] [i_3 - 1] [i_4] [i_4] [i_4] [i_4])) * (((/* implicit */int) arr_0 [i_0 - 4] [i_0 + 1]))));
                                var_19 = ((/* implicit */signed char) ((9112828922282950653ULL) > (10783163499662236192ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-29))))))), (((/* implicit */int) var_10))));
}
