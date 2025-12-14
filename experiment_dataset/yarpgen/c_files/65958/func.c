/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65958
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_3 [i_0]))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63040)))))) ? (var_17) : (((/* implicit */int) var_9))))));
                arr_6 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((arr_4 [i_0] [i_1] [i_0]) && (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))))), (max((((/* implicit */unsigned int) var_6)), ((-(arr_0 [i_0])))))));
                arr_7 [i_0] = ((/* implicit */int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)217))))))) <= ((((+(((/* implicit */int) arr_1 [i_0] [i_0])))) + (((/* implicit */int) ((short) 3695548721193283584ULL)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_13);
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_17))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                var_20 = (~((-(arr_11 [i_3] [i_3] [(unsigned char)4]))));
                var_21 = ((/* implicit */unsigned int) (+((~((~(((/* implicit */int) arr_2 [i_3]))))))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_11))));
            }
        } 
    } 
}
