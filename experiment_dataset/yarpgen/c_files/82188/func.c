/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82188
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
    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((max((var_5), (((/* implicit */long long int) var_6)))) * (((/* implicit */long long int) ((/* implicit */int) ((var_10) == (var_8)))))))), (((((/* implicit */_Bool) var_4)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -944211760112228791LL))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)10066))))) ^ (var_15)))) ^ (min((min((var_10), (((/* implicit */long long int) (signed char)66)))), (((/* implicit */long long int) 2975883042U))))));
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((short)-10071), (var_13)))), (var_10)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 += ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-8564), (((/* implicit */short) (unsigned char)30)))))) == (var_0)))), (((short) min((((/* implicit */int) arr_8 [i_2 - 2] [i_1] [i_0] [i_0])), (var_9))))));
                    var_21 &= ((/* implicit */unsigned int) (+(((long long int) ((short) (short)21926)))));
                    arr_9 [i_1] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (short)-8573))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [(short)3] [i_0] [i_0] = ((/* implicit */long long int) (short)8563);
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_1 - 1])))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]))));
                        arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((long long int) ((unsigned long long int) 732341972U)))));
                        arr_16 [i_0] [i_0] [i_2 - 2] [i_3] = ((/* implicit */long long int) 2975883042U);
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_16))));
        var_24 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_13)), (((arr_6 [i_0] [i_0] [i_0] [i_0]) - (952307229U)))))));
        arr_17 [(unsigned short)8] [i_0] = ((/* implicit */signed char) ((2975883054U) != (min((((/* implicit */unsigned int) (short)8555)), (1319084228U)))));
    }
}
