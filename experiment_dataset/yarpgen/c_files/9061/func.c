/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9061
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-104)) ? (((1168248547435815826ULL) + (((/* implicit */unsigned long long int) 4822438698191202930LL)))) : (((/* implicit */unsigned long long int) max((2614844739096733959LL), (((/* implicit */long long int) (unsigned short)23368)))))))) ? (((/* implicit */int) (unsigned short)23371)) : (((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) var_6)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_14 [(short)3] [i_3 - 1] [i_0] = ((/* implicit */short) ((int) (-(((((/* implicit */_Bool) 3683523037U)) ? (2529751761047698625ULL) : (((/* implicit */unsigned long long int) -4510800019133217188LL)))))));
                                var_12 = ((/* implicit */unsigned char) -4510800019133217193LL);
                                var_13 += ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_9 [i_4 - 2] [i_3] [i_3 - 1] [i_4 - 2])) >> (((((/* implicit */int) arr_13 [i_4 - 2] [i_1] [i_3 - 1] [i_1] [6ULL])) - (31030)))))));
                                var_14 |= 3286321075946313630ULL;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_5] [i_2] [i_5] [i_5] = ((/* implicit */short) min((var_5), (((/* implicit */unsigned long long int) arr_12 [i_0]))));
                        var_15 *= ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4130740849U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5)))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0]))) : (((((/* implicit */int) arr_11 [i_5] [(signed char)3] [(unsigned char)7] [i_0])) - (((/* implicit */int) var_10))))));
                        var_16 += ((/* implicit */_Bool) var_10);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */signed char) ((_Bool) (unsigned char)232));
                            var_18 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_19 = var_9;
                            var_20 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_0 [i_1] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_5])))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */int) ((unsigned short) var_0))) : (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_8 [i_0]))))));
                        }
                    }
                    arr_24 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0])))))) ? (((arr_19 [i_2] [i_1] [i_1] [i_1] [i_1] [i_0] [i_2]) + (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_5 [i_2]))) || ((!(((/* implicit */_Bool) 15160422997763237986ULL))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((unsigned long long int) min(((-(var_5))), (((/* implicit */unsigned long long int) ((short) var_8))))));
    var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 3683523037U)) : (var_5)));
}
