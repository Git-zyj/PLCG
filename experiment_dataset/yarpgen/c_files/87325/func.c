/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87325
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
    var_11 = ((/* implicit */int) (-(((((/* implicit */_Bool) max((((/* implicit */int) (short)-19339)), (var_5)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    var_12 = ((/* implicit */long long int) var_9);
    var_13 = ((/* implicit */long long int) (short)-19339);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) var_5)) ? (var_5) : (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_4), (2085351925795947808ULL)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (min((((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43731))))), (var_1)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)94)) << ((((+(3853637500117251013LL))) - (3853637500117251003LL)))));
                    var_16 = ((/* implicit */unsigned int) (((((-(-3853637500117251018LL))) / (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_1 [i_0]), (((/* implicit */int) arr_2 [i_0] [6] [i_0]))))), (var_10))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0 - 3] [i_0] [i_0] [3LL] [i_0] [(signed char)14] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (((long long int) arr_10 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_3 + 1]))));
                                var_17 = ((/* implicit */signed char) arr_9 [i_0 - 3] [i_0] [(unsigned short)2] [(short)13] [i_2] [i_3] [(signed char)3]);
                                var_18 = ((/* implicit */short) ((unsigned char) arr_2 [i_0] [i_3 - 1] [i_0]));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
