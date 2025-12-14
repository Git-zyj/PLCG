/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61968
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
    var_10 &= ((unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (var_3) : (((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */int) var_0)), (var_3))) : (var_1)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_10 [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))))), (((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31263))) : (var_5)))));
                                var_11 = (_Bool)0;
                                var_12 = ((((/* implicit */int) arr_0 [i_0] [i_1])) | ((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_4] [i_3 + 1] [i_4])))));
                            }
                        } 
                    } 
                } 
                var_13 += ((/* implicit */unsigned char) min((arr_4 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) (unsigned short)15943)))))));
            }
        } 
    } 
}
