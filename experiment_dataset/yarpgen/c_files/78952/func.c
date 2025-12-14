/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78952
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) ((6361271551470680380LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_5))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 0U))) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned char)154)))))));
                arr_6 [2U] = ((/* implicit */unsigned int) (+((((+(3412957556634415701LL))) << (((((unsigned long long int) 17179869183LL)) - (17179869182ULL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) 6266097945101791076LL);
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37384))) % (4294967283U)));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((4294967283U) - (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
                var_22 = ((/* implicit */long long int) (((~(arr_8 [i_3]))) >= (var_5)));
                arr_13 [i_2] [i_2] = ((/* implicit */long long int) var_15);
            }
        } 
    } 
}
