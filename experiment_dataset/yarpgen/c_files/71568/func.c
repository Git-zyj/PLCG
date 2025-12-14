/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71568
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
    var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 7418561450449104749LL)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((((var_3) > (var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= (var_12))))) : ((+(var_3)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            arr_11 [i_0] [i_3] [i_1 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)-20400), (((/* implicit */short) (signed char)69))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]))) / (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_4])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_4]))))))) : (((/* implicit */long long int) ((min((3018216205U), (((/* implicit */unsigned int) (signed char)63)))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
                            var_15 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)63)) * (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 1]))))) / (arr_7 [i_0 - 4] [i_0 - 2] [i_0] [i_0 - 3])));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1545870402U)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (short)2047))));
                        }
                        arr_12 [i_0] [i_3] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (short)-20400);
                    }
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 - 3] [i_0] [i_0] [i_0 - 4] [i_0])) - (((/* implicit */int) arr_10 [i_0 - 4] [i_0] [i_0 - 2] [i_0] [i_0]))))) ? (((/* implicit */long long int) (-(2558103269U)))) : (((((/* implicit */_Bool) (unsigned char)12)) ? (36020000925941760LL) : (((/* implicit */long long int) 1126700622U))))));
                        arr_17 [i_0] [i_0] [i_2] [i_5] = ((signed char) (+(((/* implicit */int) arr_16 [i_0 + 1] [i_1] [i_2] [i_5]))));
                    }
                    arr_18 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) 0U)), (var_6)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)96))))) : (((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_7))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_2])) ? (arr_9 [i_0] [i_0 - 3] [i_0]) : (((/* implicit */long long int) var_9))))))))));
                }
            } 
        } 
    } 
}
