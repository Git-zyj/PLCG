/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6144
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((long long int) (+(var_7))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])))))))) ? (((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_0] [i_4] [i_2] [i_1 - 1] [i_2])))) : (min((((/* implicit */unsigned long long int) (signed char)4)), (11290066455373811695ULL)))));
                                var_16 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) - (((((/* implicit */_Bool) (short)-25801)) ? ((-(((/* implicit */int) (short)25814)))) : (((/* implicit */int) var_5)))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((_Bool) max((((long long int) var_12)), (((/* implicit */long long int) var_2)))));
                                var_17 = ((/* implicit */short) (-(((/* implicit */int) (signed char)95))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (+((~(((/* implicit */int) var_13))))));
                                var_19 = ((/* implicit */unsigned long long int) min((3232596447U), ((((_Bool)0) ? (3618350395U) : (((/* implicit */unsigned int) var_4))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-4943)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * ((-(((/* implicit */int) var_5))))))) * (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_1]))))) : (254973690186810335ULL)))));
                                var_22 *= ((/* implicit */signed char) arr_14 [i_8] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_10)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) var_9)))));
}
