/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84953
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
    var_12 = ((/* implicit */short) ((var_10) < (max((((/* implicit */long long int) var_4)), (((var_0) | (((/* implicit */long long int) -838461613))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) max((((long long int) 2147352576)), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1 - 2])))))));
                    arr_8 [i_2] [i_1 + 1] [i_0] = ((/* implicit */signed char) (unsigned short)25462);
                    arr_9 [i_2] = ((/* implicit */long long int) -3);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                arr_14 [i_4] [i_4] = ((/* implicit */int) var_8);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 4; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (~(var_2)));
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48228))) | (var_10)))) ? (max((-13), (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_4))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (((((/* implicit */_Bool) (~(1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) 1))))) : (((((/* implicit */_Bool) 5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (7951944287426011767ULL))))))))));
    var_16 = ((/* implicit */int) min((var_16), (-18)));
}
