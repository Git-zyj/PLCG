/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90367
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) / (((9223372036854775803LL) ^ (6738062190845969679LL)))));
                var_12 = (-(min((arr_3 [(unsigned short)8]), (arr_3 [3U]))));
                var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])))))) > (min((((((/* implicit */_Bool) (short)1023)) ? (arr_2 [i_0] [i_0]) : (1324946355549770352ULL))), (((/* implicit */unsigned long long int) 2022082934))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)56420))))) : (var_1)));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned int) var_8)))))));
}
