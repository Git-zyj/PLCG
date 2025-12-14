/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66974
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
    var_16 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_15)), (max((((/* implicit */unsigned long long int) var_14)), (min((((/* implicit */unsigned long long int) var_3)), (var_10)))))));
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 = var_14;
    var_19 |= ((/* implicit */long long int) ((var_15) >= (599734931U)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) var_13);
                            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((long long int) arr_6 [i_0] [i_0])))));
                arr_13 [i_0] [(unsigned char)15] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((-(7111092911400359072LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned int) (unsigned short)63194)), (var_15))) : (var_15))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (var_2)));
                                arr_25 [0] [0] [i_4] [i_4] [i_6 - 2] [i_6] = ((_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) == (2944797817U))))));
                                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6 - 1] [i_6 - 3]))) | (((unsigned int) (_Bool)1))));
                                var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_21 [i_5])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), ((-(var_8)))))), (((arr_20 [i_6 - 3]) - (arr_20 [i_6 + 1])))));
                            }
                        } 
                    } 
                } 
                arr_26 [10U] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) var_7));
            }
        } 
    } 
}
