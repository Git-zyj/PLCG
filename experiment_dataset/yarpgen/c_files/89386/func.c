/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89386
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
    var_10 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 ^= ((max((((/* implicit */unsigned long long int) ((1607795005) | (((/* implicit */int) (short)13863))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32172))) & (arr_2 [i_0] [i_0]))))) | (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1037441053U)) ? (-1922729555779598530LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46966))))), (((/* implicit */long long int) ((62914560) & (((/* implicit */int) (short)-13863)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-3321759485500694977LL), (((/* implicit */long long int) arr_8 [i_4] [i_4] [i_4 + 1] [i_4] [i_1]))))) ? ((~(((/* implicit */int) arr_6 [i_2] [i_4 - 1] [i_4] [i_4] [i_4 - 1])))) : (((((/* implicit */_Bool) arr_8 [(unsigned short)6] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_8 [i_2] [i_3] [i_2] [i_3] [i_1]))))));
                                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))));
                            }
                        } 
                    } 
                } 
                var_13 ^= ((/* implicit */short) (unsigned short)45286);
                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) - (((1198455159813078811LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))))) > (((/* implicit */long long int) ((max((19), (((/* implicit */int) var_8)))) & (((/* implicit */int) arr_4 [i_1] [i_0] [i_0] [i_0 - 2])))))));
            }
        } 
    } 
}
