/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83526
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_8)))))))), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), ((+(10159637068835936421ULL)))))));
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)57954))));
                        arr_12 [i_0] [i_1] [i_1] [i_0] [(unsigned char)8] [i_0] &= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) ((short) 1754485936117450885LL))))))));
                        var_20 -= ((/* implicit */unsigned int) var_11);
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4] = ((_Bool) max((var_5), (((/* implicit */long long int) (unsigned short)7581))));
                                arr_18 [i_2] [i_0] [7ULL] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) (short)-22456)))), ((+(((/* implicit */int) (short)32755))))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (unsigned short)7581))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), (((/* implicit */short) (signed char)-107))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 2] [4])) > (((/* implicit */int) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (max((((/* implicit */unsigned long long int) arr_4 [0] [0])), (var_2))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                    var_23 = ((/* implicit */short) -9223372036854775806LL);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) (~(var_7)));
}
