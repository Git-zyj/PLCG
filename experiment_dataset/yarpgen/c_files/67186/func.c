/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67186
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_7 [i_0] [(signed char)0] = ((/* implicit */long long int) arr_4 [i_0] [i_0 + 2] [i_1]);
                var_19 = ((/* implicit */long long int) ((int) var_1));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_3 + 1])))))), (var_0)));
                var_21 *= ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) var_3)), (arr_3 [i_3 + 1] [i_3 + 2])))));
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned short) arr_8 [i_3 - 1])))))));
                arr_14 [i_3] [(signed char)14] = ((/* implicit */unsigned short) var_15);
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 1])) || (((/* implicit */_Bool) 2340437550U)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            {
                var_24 *= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (signed char)0)))))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_6 [i_4] [19ULL])))))))));
                arr_19 [i_4] = ((/* implicit */unsigned long long int) (signed char)95);
                arr_20 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */long long int) 2147483520U)), (((var_0) & (((/* implicit */long long int) var_16)))))));
                arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) -4656564110111316957LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)95))))), (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */unsigned int) arr_2 [i_4] [i_5])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_4);
    var_26 = ((/* implicit */unsigned int) ((((((long long int) var_17)) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))));
}
