/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6125
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
    var_17 = ((/* implicit */short) var_15);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((max((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) 1005692313456931014LL)))) >= ((~(arr_6 [i_0 + 1] [i_0 + 1] [(_Bool)1]))))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_2 - 3]))) / (var_16)))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(67043328ULL))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [(unsigned char)4])))))) <= (((long long int) arr_6 [i_0] [i_1 - 1] [i_2 + 1])))))) > ((+(max((67043328ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_2] [i_1]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((unsigned long long int) 18446744073642508287ULL));
    var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) ((67043328ULL) >= (67043329ULL)))) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_0))));
    var_21 = (+(var_11));
}
