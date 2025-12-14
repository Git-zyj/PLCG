/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59407
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
    var_13 ^= ((/* implicit */unsigned char) 15);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */long long int) -36);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (-16) : (var_7)))))) ? (((((/* implicit */_Bool) 15)) ? (min((3688899545U), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (unsigned char)0)) : (33554431)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 824580838U))))))));
                                var_15 = ((/* implicit */int) (((~((~(var_2))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))));
                                arr_14 [5U] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-19))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) (+(5849385124724952937LL)));
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3LL))));
                    var_18 -= (unsigned char)165;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)31)) ? (1628123574U) : (((/* implicit */unsigned int) 8567327)))), (1628123574U)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1628123594U)))))))));
    var_20 = ((/* implicit */unsigned int) var_0);
}
