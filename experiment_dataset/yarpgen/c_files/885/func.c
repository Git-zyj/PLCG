/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/885
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
    var_19 = ((/* implicit */short) var_3);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((signed char) var_12))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (short)1411))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1]))) : (2305399239U)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_21 = ((int) ((((/* implicit */_Bool) 1989568044U)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0])) + (2147483647))) << (((((/* implicit */int) var_17)) - (9760)))))) : ((-(1989568056U)))));
                                var_22 = ((/* implicit */unsigned short) (~(2305399233U)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) min((var_23), (max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_10 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]) : (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1])) ? (526921843) : (((/* implicit */int) var_14))))))));
                    var_24 = ((unsigned int) arr_3 [i_1 - 2] [i_1] [i_1 - 2]);
                    var_25 *= ((/* implicit */long long int) ((short) (~(((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((signed char) var_4)))));
    var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
}
