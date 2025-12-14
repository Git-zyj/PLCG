/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76681
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
    var_15 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (var_13)))) - (((/* implicit */int) (short)-6925))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (17749984056787197867ULL)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (17749984056787197867ULL))))) : (1926201976)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */signed char) ((min((696760016922353748ULL), (((/* implicit */unsigned long long int) min(((signed char)94), (arr_0 [i_1] [i_1])))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))));
                    var_18 = ((/* implicit */unsigned long long int) (-(((long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (12ULL))))));
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_2 - 2])) - (arr_6 [i_2 + 2] [i_0] [i_1] [i_2 + 2]))))));
                    var_20 = ((/* implicit */unsigned char) ((16432359768466602419ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                arr_11 [i_4] [i_4] [i_3 - 1] = ((/* implicit */signed char) ((short) arr_7 [i_4] [i_3]));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) % (17965391601812240898ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3 + 2] [i_3 + 1])) ? (arr_8 [i_3 - 1]) : (arr_8 [i_3 - 1])))))))));
            }
        } 
    } 
}
