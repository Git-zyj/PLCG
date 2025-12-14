/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57034
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
    var_13 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((-(var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-7)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [(short)4] [i_1] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [22ULL] [8] [i_1])), (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0])))) : (((unsigned long long int) (unsigned short)3392))));
                    arr_10 [i_1] [19] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1539083811U)) ? (((/* implicit */int) arr_8 [i_2] [6LL] [i_1])) : (((/* implicit */int) (unsigned short)3401))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62142)))))));
                    arr_11 [i_0] [4ULL] [i_2] [i_1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (1384119578))))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((min((arr_2 [16U] [i_1] [i_2]), (arr_2 [i_0] [i_1] [6ULL]))) ? (((arr_3 [i_0] [(short)15]) << (((arr_3 [i_0] [i_2]) - (835335861))))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_17 [17U] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) / (min((max((var_1), (((/* implicit */unsigned long long int) (signed char)2)))), (((/* implicit */unsigned long long int) var_2))))));
                                arr_18 [i_1] = (~((-(max((((/* implicit */unsigned int) arr_8 [(short)22] [1U] [i_1])), (472918637U))))));
                                var_14 = ((/* implicit */unsigned long long int) max((((var_0) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))))), ((+(min((((/* implicit */long long int) var_6)), (var_8)))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_0 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6))))) : (((((/* implicit */_Bool) (signed char)19)) ? (-1384119586) : (((/* implicit */int) arr_1 [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
