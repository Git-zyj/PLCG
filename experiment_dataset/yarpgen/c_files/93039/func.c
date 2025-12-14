/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93039
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
    var_14 = ((/* implicit */unsigned char) ((short) ((long long int) min((((/* implicit */long long int) var_9)), (var_6)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_2 + 1]))) ? (((/* implicit */int) ((short) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) var_1)), (var_12)))))) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2 - 1] [i_3] [i_3 + 1])) ? (((/* implicit */int) arr_11 [i_0] [i_2] [i_1 + 1] [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [i_1] [i_2]))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((signed char) max((((var_0) ? (((/* implicit */long long int) 917504U)) : (var_1))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (4294049792U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))) & (((long long int) var_2))))))));
}
