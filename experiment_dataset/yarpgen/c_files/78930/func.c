/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78930
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
    var_14 += ((/* implicit */short) ((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)-57)))) % (max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned short)39343)) ? (((/* implicit */int) (short)15360)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (arr_0 [i_0 - 2]))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_4 [i_1 - 2] [i_1])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_3] [i_1 - 1] [i_1 - 1]))) + (arr_4 [i_1 - 2] [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_8 [i_1 + 2] [(short)6] [i_2 + 3] [i_0 - 1]))))));
                        arr_10 [i_0] [i_2 + 2] [i_1 - 2] [i_0] = ((/* implicit */long long int) var_1);
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [16U] [i_2] [i_0])) ? (((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_12)))) : (max((((/* implicit */long long int) var_7)), (var_11))))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)119), (((/* implicit */signed char) (_Bool)1))))))));
                    }
                    var_18 *= ((/* implicit */signed char) (_Bool)1);
                    var_19 -= ((/* implicit */long long int) (~(arr_0 [i_1])));
                }
            } 
        } 
    } 
}
