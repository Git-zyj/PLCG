/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55902
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
    var_10 = ((/* implicit */unsigned char) ((unsigned long long int) -40502412));
    var_11 = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned short) var_4))), (((((/* implicit */long long int) ((int) (_Bool)1))) + ((-(var_2)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) min((var_12), ((~(((/* implicit */int) arr_1 [i_1]))))));
                    arr_8 [i_0] [7LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) <= (((/* implicit */int) (signed char)30))));
                    arr_9 [i_1] [i_0] [14U] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)141)), (arr_7 [i_0])))) ? ((+(((/* implicit */int) arr_5 [i_0] [i_2])))) : (arr_2 [i_0 + 1] [i_2 + 3])))));
                }
            } 
        } 
    } 
}
