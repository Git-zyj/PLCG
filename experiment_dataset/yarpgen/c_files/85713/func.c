/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85713
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (max((0ULL), (((/* implicit */unsigned long long int) 18))))))));
                var_11 = ((/* implicit */int) ((_Bool) (signed char)24));
                var_12 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [i_1]), (arr_5 [i_1])))) && (((/* implicit */_Bool) ((long long int) 0ULL))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (-(min((var_5), (((3190628038U) % (var_5)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_14 = ((/* implicit */int) min((8583387925018388444LL), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) <= (arr_9 [i_2])))))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) | (arr_9 [i_2]))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) (-(-19)));
        var_15 = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) arr_8 [18ULL])))));
        arr_12 [i_2] = ((/* implicit */unsigned short) 2147483648U);
    }
}
