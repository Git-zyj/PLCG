/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88890
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) : (3790125045987740565ULL)))) ? ((+(((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18385702578870652017ULL))))))));
    var_17 = ((/* implicit */signed char) (!(var_3)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0 - 1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-21072)) - (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-102))))))) : (((((/* implicit */_Bool) 3790125045987740565ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))) : (14656619027721811051ULL)))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) max((var_10), ((-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_0)))))));
                arr_7 [i_0] = ((/* implicit */long long int) var_6);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_13 [7U] [i_1] [i_2] [i_0] [i_1] [i_3 + 1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                            arr_14 [i_2] |= ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
            }
        } 
    } 
    var_18 = var_6;
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
}
