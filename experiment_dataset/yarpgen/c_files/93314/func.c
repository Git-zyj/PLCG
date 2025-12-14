/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93314
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
    var_14 = ((/* implicit */signed char) (+(min((max((var_4), (((/* implicit */long long int) var_1)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_8) % (var_3)))), (max((var_7), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0]))))))) ? (max((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [(unsigned short)10] [(unsigned short)10]))))), (((long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) (short)-21692)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                {
                    var_16 -= var_2;
                    arr_16 [i_5 + 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((6906571756856765790ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) max((442675137232923448LL), (((/* implicit */long long int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */_Bool) var_9);
}
