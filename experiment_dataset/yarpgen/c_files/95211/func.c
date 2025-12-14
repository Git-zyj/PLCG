/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95211
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
    var_10 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17023259460099038566ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))))) ? (var_0) : (((/* implicit */long long int) (~(((/* implicit */int) (!(var_2)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 &= ((/* implicit */int) var_9);
                var_12 *= ((/* implicit */unsigned short) (+((~(var_0)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_13 += ((/* implicit */_Bool) var_8);
                            var_14 &= ((/* implicit */long long int) ((short) (~(var_7))));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned char) (_Bool)1)))));
                            arr_11 [i_0] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
                            var_16 += ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) var_0)))))) ? (((((((/* implicit */_Bool) var_1)) && (var_2))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2364991953U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            {
                arr_18 [i_5] = ((/* implicit */unsigned int) ((short) var_8));
                var_17 = ((/* implicit */unsigned long long int) var_5);
            }
        } 
    } 
}
