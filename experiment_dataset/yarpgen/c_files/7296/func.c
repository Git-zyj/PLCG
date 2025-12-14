/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7296
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
    var_20 = ((/* implicit */long long int) (signed char)108);
    var_21 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) var_11)) : (var_17))) != (((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_22 = ((int) ((long long int) arr_3 [i_1]));
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-95)) + (2147483647))) << (((((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_0] [i_2]))) - (25733)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) 6512277202141525224LL);
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_4 + 2] [i_4] [i_4] [i_4 + 2] [i_4]) : (((/* implicit */int) arr_2 [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) ((var_0) << (((((int) ((unsigned long long int) (unsigned char)248))) - (248)))));
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_27 = ((((((/* implicit */_Bool) arr_12 [i_5] [i_5])) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-109)) + (2147483647))) << (((((/* implicit */int) var_11)) - (202)))))))) ^ ((+(max((((/* implicit */unsigned int) (unsigned char)238)), (var_15))))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned int) min(((+(arr_0 [i_5]))), (arr_12 [i_5] [i_5])))))));
    }
    for (short i_6 = 2; i_6 < 18; i_6 += 3) 
    {
        var_29 = ((/* implicit */signed char) ((arr_18 [i_6] [i_6]) / (max((((/* implicit */long long int) (unsigned char)139)), (arr_18 [i_6] [i_6])))));
        var_30 = ((/* implicit */unsigned int) arr_17 [i_6] [i_6]);
    }
}
