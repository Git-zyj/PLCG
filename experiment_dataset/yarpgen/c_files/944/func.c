/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/944
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (short)0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 -= ((arr_4 [i_0 - 3] [i_0 - 1]) < (((/* implicit */int) (short)-1)));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8106563882867770103LL)) ? (((/* implicit */int) (short)-18)) : (arr_4 [i_1] [i_0 + 1])))) ? (min((6567805361454137961ULL), (((/* implicit */unsigned long long int) arr_6 [i_0])))) : (((/* implicit */unsigned long long int) var_8)))) | (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)-16095)))), (((/* implicit */int) (short)5848)))))));
            }
        } 
    } 
}
