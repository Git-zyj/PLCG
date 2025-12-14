/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74934
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
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((var_11), (var_7)));
                var_12 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? (((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */_Bool) arr_0 [(short)5])) ? (8779882238809802153LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [8] [i_0 - 1]))))))))));
            }
        } 
    } 
    var_13 = min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -8779882238809802151LL))))) - (((/* implicit */int) var_5))))), (-1365905273921010686LL));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (((-(((int) var_9)))) - ((~((~(((/* implicit */int) (short)-7617)))))))))));
}
