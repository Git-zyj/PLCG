/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62585
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_12)) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                                arr_13 [i_0] [i_0] [i_1 - 1] [(_Bool)1] [i_0] [i_3 - 1] [i_0] = ((/* implicit */unsigned long long int) (short)28793);
                                arr_14 [i_0] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [6LL] [9U] [i_0] [i_2 + 2] [9U] [i_3 - 1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_2 + 2] [i_2] [i_2]))))));
                            }
                        } 
                    } 
                    var_15 = ((signed char) (_Bool)1);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_4 [i_0] [i_2 + 3] [i_2 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 3])))))) ? (((((/* implicit */_Bool) arr_6 [(unsigned char)11] [i_0])) ? (((/* implicit */long long int) var_5)) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) var_13)) : (var_12)))) ? (((/* implicit */unsigned int) ((int) arr_11 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0] [i_2]))) : (((unsigned int) (unsigned char)216)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_6);
}
