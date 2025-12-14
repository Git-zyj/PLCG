/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67492
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
    for (short i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((arr_2 [i_0 - 1]) < (arr_2 [i_0 - 2])))) > (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) arr_0 [i_0]))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((((/* implicit */int) min(((_Bool)1), (var_10)))) <= (((((/* implicit */int) arr_0 [i_0 + 1])) << (((/* implicit */int) (_Bool)1)))))) ? (arr_3 [i_0 + 4] [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_3 [i_1 - 2] [i_1])) : (arr_4 [i_0] [i_0] [i_1 - 2])))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_1])))))))));
                var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_2 [i_0 - 3])))) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (short)-22888)))))));
                var_14 = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (short)255);
}
