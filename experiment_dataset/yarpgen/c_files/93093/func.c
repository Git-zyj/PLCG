/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93093
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_8))) ? ((~(((/* implicit */int) var_13)))) : ((-(((/* implicit */int) var_8))))));
    var_16 = ((/* implicit */short) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [6U] [i_1] = ((/* implicit */unsigned char) ((short) var_13));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11772)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (var_11) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))))), (arr_1 [i_0 + 2])))) : (((/* implicit */int) arr_4 [i_0] [(short)10])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((int) -543207881)) | (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_14 [i_3])))) : (((/* implicit */int) ((short) arr_5 [i_1] [15U] [i_1] [i_1]))))))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_10))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_6 [i_2 + 1] [i_2 + 1] [i_3 + 3]))));
                                var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((2093056U) >> (((/* implicit */int) arr_12 [i_0] [i_1] [i_3 - 1] [7U])))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [18LL] [i_4])) && (((/* implicit */_Bool) 4219369386U)))))))))));
                                var_22 += ((/* implicit */unsigned short) max((((max((-4140660057844613729LL), (((/* implicit */long long int) 75597910U)))) - (((/* implicit */long long int) (-(((/* implicit */int) var_12))))))), (((/* implicit */long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_12 [i_3 + 3] [i_3] [i_3 + 4] [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
