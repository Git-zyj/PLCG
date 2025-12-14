/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85889
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */int) arr_2 [10LL]);
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) arr_11 [i_0] [i_1] [i_2 + 1] [10]))))) ? (((int) arr_5 [i_4])) : (((((/* implicit */_Bool) var_2)) ? (25165824) : (((/* implicit */int) (unsigned char)255))))))), (((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) * (9LL))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((int) (+(var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2013265920) : (-10)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (~((-2147483647 - 1))))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1 - 1] [i_1 + 2]))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((~(2147483647))) : (((-2147483641) % (((/* implicit */int) (unsigned char)228))))))) == ((~(max((((/* implicit */long long int) (unsigned char)0)), (-2LL)))))));
}
