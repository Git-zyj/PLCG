/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58765
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
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) ((unsigned short) (unsigned short)18949))) << ((((((~(((/* implicit */int) (signed char)0)))) + (19))) - (5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_8 [i_0 - 2])), (((unsigned char) 5314613686414058493LL))))) ? (min((((/* implicit */long long int) arr_4 [i_0] [i_1])), (min((((/* implicit */long long int) (unsigned short)15)), (-5558711629372298814LL))))) : (arr_6 [i_0] [i_0] [i_1] [i_0])));
                                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4 - 2] [i_4] [i_4] [i_4] [i_4 - 1])) && ((_Bool)1))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)49216)) ? (((/* implicit */int) ((unsigned char) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 1]))) : (((/* implicit */int) ((var_2) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_4] [i_4] [i_4 + 1])))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0 - 1] [i_1] [i_2] = ((long long int) arr_3 [i_0]);
                    arr_15 [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */signed char) min(((-(((/* implicit */int) (short)30265)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-30265)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) 5314613686414058493LL);
    var_15 += ((/* implicit */long long int) var_1);
    var_16 = ((/* implicit */unsigned char) min((((int) ((((/* implicit */_Bool) -5558711629372298811LL)) ? (((/* implicit */int) (short)-6280)) : (((/* implicit */int) (unsigned char)0))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (((unsigned short) var_10)))))));
    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((var_11), (((/* implicit */signed char) (_Bool)1))))))), ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_7))))))));
}
