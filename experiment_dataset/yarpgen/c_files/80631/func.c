/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80631
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((((-(679785942))) + (2147483647))) >> (((679785942) - (679785932)))))), (var_2)));
    var_18 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (min((((/* implicit */unsigned long long int) 4294967295U)), (var_15)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_0 - 1])) : (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_1] &= ((/* implicit */signed char) var_3);
                arr_7 [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(1U)))))) ? (((((((/* implicit */int) var_13)) * (((/* implicit */int) var_10)))) / (((arr_4 [i_0]) ? (((/* implicit */int) var_6)) : (-39609962))))) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) * (min((-39609962), (((/* implicit */int) (unsigned char)225))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 7; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((short) -7259163818966413595LL)))));
                arr_13 [i_2] [i_2] [i_3 + 1] = ((/* implicit */short) arr_9 [i_3 + 1] [i_3 + 2]);
            }
        } 
    } 
}
