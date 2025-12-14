/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82481
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
    var_14 &= ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 7; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_1] [(short)7])) ? (((/* implicit */int) arr_1 [(unsigned short)8] [i_3])) : (((/* implicit */int) arr_1 [3] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((int) var_6)))) == (((/* implicit */int) ((signed char) -2200148752901157075LL)))));
                                var_16 += ((/* implicit */unsigned char) ((short) min((((/* implicit */long long int) arr_3 [i_0])), (arr_0 [i_0]))));
                                var_17 ^= ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_0])) & (arr_3 [i_2])));
                                arr_13 [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(arr_3 [i_4]))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))))) || (((/* implicit */_Bool) (~((~(arr_7 [i_3]))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) min((((unsigned long long int) 1246410601U)), (((/* implicit */unsigned long long int) ((-2200148752901157047LL) > (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
