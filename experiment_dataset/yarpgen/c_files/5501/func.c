/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5501
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
    var_11 += ((/* implicit */unsigned char) (~(462810574U)));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)2046)) || (((/* implicit */_Bool) -4189453947633399730LL))));
    var_13 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_1 [i_0]) <= (arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2]);
                                arr_14 [6U] [i_4] [i_2] [6U] [i_4] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [5LL] [i_4]);
                                var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)2046)) ? (min((arr_5 [7] [(unsigned short)9]), (((/* implicit */unsigned long long int) arr_3 [9U])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (arr_7 [9ULL] [i_3 + 1] [i_4]))))))) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_0)), (arr_0 [i_1])))), ((~(arr_1 [i_4]))))))));
                                arr_15 [i_0] [i_1] [i_4] [i_3] = ((/* implicit */long long int) (-(arr_7 [i_0] [i_0] [i_2])));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [(unsigned short)0] [(unsigned short)3] = ((/* implicit */unsigned int) var_6);
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(short)15])) ? (arr_1 [(signed char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 571880078)) ? (2667555122U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)16383))));
}
