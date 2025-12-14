/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89858
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)120), ((unsigned char)183))))) : (((((3045272851U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_8))))) : (7959938808853787358ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) 8361446230662334030ULL))));
                                arr_15 [i_4] [i_1] &= ((/* implicit */unsigned short) ((short) ((min((3548832380420483162ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) / (min((2373395485319045724ULL), (((/* implicit */unsigned long long int) 2747957877597781207LL)))))));
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (arr_8 [i_1] [4] [i_1 - 1] [i_1 - 2]))), (((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 2])) ? (arr_8 [i_1] [i_1] [i_1 + 1] [i_1 - 2]) : (arr_8 [i_1] [i_1] [i_1 - 1] [i_1 + 1])))));
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_1] [(_Bool)1] [i_1 + 1] [(signed char)9])) : (((unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [7ULL] [i_2] [i_2])) + (((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_5);
    var_16 = (~(min(((~(8970733035811925203ULL))), (((/* implicit */unsigned long long int) (unsigned short)41208)))));
}
