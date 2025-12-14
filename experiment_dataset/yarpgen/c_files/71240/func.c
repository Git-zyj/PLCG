/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71240
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
    var_11 = var_7;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) min((((((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_0])))))) >> (((((((/* implicit */_Bool) arr_0 [(signed char)14] [i_1 + 1])) ? (((/* implicit */int) arr_1 [(unsigned short)8])) : (((/* implicit */int) arr_1 [i_0])))) - (48589))))), (((/* implicit */int) arr_1 [(signed char)4])))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [18ULL] &= ((((((/* implicit */long long int) ((/* implicit */int) (short)-12594))) & (var_10))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_1 + 1])))));
                                var_13 = ((/* implicit */unsigned char) var_8);
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [(unsigned short)8] [i_4] [i_4] [i_4] [i_4] [i_4]))) : ((((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_2))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_1);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -3731314217034359719LL)) && (((/* implicit */_Bool) (unsigned char)108)))) ? (((/* implicit */int) (short)12622)) : (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (short)-12598)))))))) ? ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))) : ((-(((((/* implicit */int) var_0)) * (((/* implicit */int) (short)12594))))))));
}
