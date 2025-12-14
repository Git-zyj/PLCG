/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6075
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
    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */long long int) max((min((((/* implicit */unsigned int) (_Bool)1)), (var_15))), (2747631369U)))) : (-663817087776522017LL)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] [4] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) (short)-10694)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                    var_19 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [(short)6] [(unsigned short)4] [(short)6] [(short)6] [i_0] = ((/* implicit */unsigned short) ((arr_10 [(unsigned short)3]) + (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [5U])) && (((/* implicit */_Bool) (short)-10694)))) ? (var_15) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)10694))))))))));
                                var_20 = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    arr_14 [i_0 + 1] [i_1] [i_2] = ((/* implicit */signed char) arr_5 [i_2] [i_2] [(unsigned char)2]);
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */int) var_9)) - (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-10694)) : (((/* implicit */int) var_10)))) / (((/* implicit */int) max(((short)10689), ((short)10694)))))));
}
