/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81770
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4866337607665320397LL)) ? (((/* implicit */int) (signed char)63)) : (1048320)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)24267))))) : (((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_1] [i_1] [i_2 - 1])) ? (((/* implicit */unsigned int) -1048320)) : (2497487909U)))));
                    var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (4534214638726283308LL)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [6U] [i_0] = ((signed char) max((((/* implicit */long long int) arr_6 [i_2] [i_2 + 2] [i_2 + 1])), (219936782824035878LL)));
                                arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-1)) ? (((long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)100)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((var_10) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
    var_16 &= ((/* implicit */signed char) 3971160649U);
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) 511ULL)) ? (13346637984882642338ULL) : (((unsigned long long int) (short)-5267)))))));
}
