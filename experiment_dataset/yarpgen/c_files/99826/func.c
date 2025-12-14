/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99826
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
    var_16 -= var_6;
    var_17 &= ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) ((signed char) 2262164909U))))));
                var_18 ^= ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))), ((!(((/* implicit */_Bool) arr_0 [i_1] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                var_19 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_3])) && (((/* implicit */_Bool) (unsigned char)9))))), (((arr_12 [i_2] [i_3] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 1] [(signed char)17])))))))) ? (((((/* implicit */_Bool) 245130187U)) ? (275559632334120346ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1079984343U)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (signed char)25))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) (unsigned char)24)))));
                arr_13 [i_2] [i_2] = arr_9 [i_2];
                arr_14 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)19)) % (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_8 [i_2]))))));
                arr_15 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (arr_10 [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) : (var_0))) : (((arr_10 [i_2 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2])))))));
            }
        } 
    } 
}
