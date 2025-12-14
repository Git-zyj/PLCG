/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7976
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
    for (int i_0 = 4; i_0 < 6; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) min((((((/* implicit */int) ((_Bool) arr_3 [(signed char)3] [i_0 + 3]))) & (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1179366885401329652LL))))) : (((/* implicit */int) var_5))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [i_4 + 2] [(short)7] [(short)3] [i_0 + 2] [i_0 - 1])) ? (((/* implicit */int) ((signed char) arr_9 [i_0 + 1] [0LL] [i_2] [i_3 + 1]))) : (((/* implicit */int) arr_7 [(signed char)6] [i_1] [6ULL] [(_Bool)1])))))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1179366885401329652LL)) ? (((2630936273290157398LL) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 4] [i_1] [i_2]))))) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-648770180))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_9))))))) : (min((251687067265823309ULL), (((/* implicit */unsigned long long int) (short)32741))))));
                                var_15 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_10 [8LL])), (var_4)));
                                var_16 = arr_8 [7] [i_1] [i_0 + 2];
                            }
                        } 
                    } 
                } 
                arr_12 [i_0 - 4] = ((/* implicit */int) (~((~(((long long int) (_Bool)0))))));
                var_17 -= ((/* implicit */short) ((((((/* implicit */int) (unsigned char)167)) & (((/* implicit */int) (unsigned char)88)))) ^ (((/* implicit */int) ((unsigned short) (~(var_8)))))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned long long int) (~(max((1179366885401329651LL), (((((/* implicit */long long int) 1066444432U)) ^ (-8622974152308237097LL)))))));
}
