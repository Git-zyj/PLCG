/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63389
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
    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)3584)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-3585))))) ? (max((((/* implicit */unsigned int) (signed char)98)), (1879397334U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))))))));
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [(signed char)2] [i_3] [i_2 + 2] [i_0] [i_1] [i_1] [i_0]))))), (max((arr_0 [i_0 - 2]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_3])))))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_6 [i_0 - 2] [i_1] [i_4] [i_1])) ^ (((/* implicit */int) arr_10 [i_4] [i_4] [i_3] [i_2] [16U] [i_0] [i_0])))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)10238)) : (((/* implicit */int) (short)3585)))))))));
                                var_23 *= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-3571)) * (((/* implicit */int) (short)-20792))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((min((-369181145), (((/* implicit */int) (unsigned char)16)))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1]))))))) >= (((((/* implicit */_Bool) max((arr_4 [i_0] [i_1] [i_1]), (arr_2 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0] [i_0 + 1] [i_1] [i_1] [19ULL] [i_1])) && (((/* implicit */_Bool) arr_2 [i_0] [(signed char)10])))))) : (((((/* implicit */_Bool) (short)2032)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (6890639256255567091ULL)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_14))))), ((-(((/* implicit */int) var_2))))))) || (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_6)))))))));
}
