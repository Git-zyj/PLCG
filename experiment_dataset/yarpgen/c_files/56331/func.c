/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56331
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
    var_12 = ((/* implicit */unsigned short) var_2);
    var_13 = ((/* implicit */signed char) ((max((((((/* implicit */int) var_0)) + (((/* implicit */int) var_9)))), (((((/* implicit */int) var_3)) * (((/* implicit */int) var_0)))))) <= (((/* implicit */int) max((((/* implicit */short) ((_Bool) (short)28296))), ((short)28295))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)28297)) >> (((var_8) + (814470428)))));
                arr_5 [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) max((((((var_7) >= (((/* implicit */long long int) arr_2 [i_1] [i_0])))) ? ((-(((/* implicit */int) var_3)))) : (var_8))), (((/* implicit */int) max((((((/* implicit */long long int) var_4)) <= (arr_3 [i_0 - 1]))), (((((/* implicit */int) (short)28295)) >= (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (short i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            for (short i_4 = 4; i_4 < 15; i_4 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28297))) | (0ULL))), (((/* implicit */unsigned long long int) var_10))));
                    var_15 = ((/* implicit */unsigned short) arr_12 [i_2] [i_4 - 2] [i_3 + 1] [i_4 - 2]);
                    arr_15 [7ULL] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-28279)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28278)))));
                    var_16 = ((/* implicit */int) arr_6 [(_Bool)1]);
                }
            } 
        } 
    } 
}
