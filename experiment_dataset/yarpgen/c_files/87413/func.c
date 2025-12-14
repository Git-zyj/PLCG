/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87413
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(7404315815965765842ULL))))));
                var_16 ^= ((min((((/* implicit */long long int) (unsigned char)2)), (((-3620470754527029066LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))));
                arr_4 [i_0] = ((/* implicit */unsigned char) (~(var_2)));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (short)-15944);
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        for (short i_3 = 3; i_3 < 24; i_3 += 4) 
        {
            {
                var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((arr_8 [i_2 + 2] [i_3 - 2]), (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) 4316846197484620682LL)), (5413719390278550579ULL)))));
                arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((min((((/* implicit */int) arr_5 [i_2 + 1])), (arr_8 [i_2 + 2] [i_3 - 1]))) != ((((!(((/* implicit */_Bool) 131071LL)))) ? (((/* implicit */int) max((arr_5 [i_2]), ((_Bool)1)))) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_0)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (var_12)));
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)38))));
}
