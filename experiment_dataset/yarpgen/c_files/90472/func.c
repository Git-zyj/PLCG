/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90472
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
    var_15 = ((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)15)) : (-1796519112)))), (var_12))) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (short)8191))))), (arr_8 [i_0] [i_2] [(unsigned short)10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2 + 4])))))));
                                var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? ((+(arr_11 [(unsigned char)10] [(unsigned char)12] [i_1] [i_3] [i_4] [(unsigned char)12]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60003)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)19)))))))) ? (((/* implicit */unsigned long long int) (+(((int) (unsigned short)5532))))) : (min((((((/* implicit */_Bool) (unsigned char)19)) ? (2278337225728089415ULL) : (18446744073709551615ULL))), (18446744073709551615ULL)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2 + 1] [i_2]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) ((max((min((var_6), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3669258683U)) ? (((/* implicit */unsigned int) var_4)) : (var_1)))))) == (((/* implicit */long long int) var_2))));
    var_19 *= ((/* implicit */_Bool) (-(var_8)));
}
