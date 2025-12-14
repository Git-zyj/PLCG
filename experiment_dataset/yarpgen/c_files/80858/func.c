/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80858
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_2))));
        var_13 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) * (arr_0 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) max((447443446), (((/* implicit */int) arr_3 [i_1]))))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0)))) ^ (((unsigned int) var_8))));
        var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (short)-15077))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((unsigned char) (unsigned char)62))))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_1])), (var_4)))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_10 [i_1] [i_1] [i_3] = ((/* implicit */short) max((max(((-2147483647 - 1)), (((/* implicit */int) (signed char)81)))), (((/* implicit */int) var_3))));
                    arr_11 [i_1] [5] [i_1] |= ((/* implicit */signed char) var_5);
                    var_17 = ((/* implicit */signed char) var_7);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
}
