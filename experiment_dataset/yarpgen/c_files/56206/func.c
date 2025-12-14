/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56206
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (var_3) : (((/* implicit */long long int) var_2))))) : (var_0)));
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((var_5) >= (var_2)))), (var_6)));
    var_12 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) ^ (8388576)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_2]) + (var_2)))))));
                    arr_9 [i_0] [i_1] [(unsigned short)12] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [(short)1])) > (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (min((max((((/* implicit */long long int) arr_8 [i_1] [i_3] [(unsigned char)13])), (-6907448770557658347LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_4))))))) : (((min((((/* implicit */long long int) -8388567)), (var_3))) ^ (((/* implicit */long long int) -8388543))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_8))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (short)29378))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [11] [5LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((min((5848393083409526556LL), (((/* implicit */long long int) (unsigned char)135)))) < (((/* implicit */long long int) ((/* implicit */int) var_8))))))) ^ (var_6)));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_1] = ((/* implicit */short) min((18446744073709551604ULL), (max((13352628568420094315ULL), (((/* implicit */unsigned long long int) max((3998900267145862909LL), (((/* implicit */long long int) (short)7)))))))));
                                var_17 = ((_Bool) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
