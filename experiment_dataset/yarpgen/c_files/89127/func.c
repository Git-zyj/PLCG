/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89127
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+((-(arr_1 [i_0])))))), (((((/* implicit */unsigned int) min((var_14), (((/* implicit */int) arr_3 [(unsigned short)20] [(signed char)19] [(unsigned short)20]))))) - (((1291734939U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38821)))))))));
                var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((576460752303423456ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) -978129855)) & (arr_2 [i_0]))), (min((((/* implicit */unsigned int) (signed char)117)), (var_9)))))) : ((~((~(576460752303423456ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (signed char i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            {
                arr_11 [(unsigned short)3] [(unsigned short)3] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_5)))))))));
                var_18 = ((((/* implicit */int) (signed char)94)) - (((/* implicit */int) var_12)));
                arr_12 [i_3 - 1] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                var_19 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3003232356U)), (576460752303423456ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) arr_7 [0U]))))) : (0U))));
            }
        } 
    } 
}
