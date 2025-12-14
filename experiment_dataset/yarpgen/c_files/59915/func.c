/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59915
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [(short)0] [i_0] [i_1] [i_2] &= ((((/* implicit */long long int) ((/* implicit */int) (signed char)114))) == (-5614915989097836061LL));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned short)14945))))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((arr_6 [i_1]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) > (var_1))))) == (min((var_7), (((/* implicit */unsigned long long int) var_8)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        arr_16 [i_3] |= ((/* implicit */unsigned char) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (arr_14 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44555))))))))))));
        arr_17 [i_3] = ((/* implicit */long long int) (unsigned short)7367);
    }
    for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((((int) arr_15 [i_4 - 1] [i_4 - 1])) < (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_9)))))))));
        var_13 ^= ((/* implicit */unsigned short) arr_14 [i_4 + 1] [i_4 - 1]);
        arr_20 [i_4 - 2] &= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (arr_19 [i_4 - 1])))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)96)) << (((((/* implicit */int) (unsigned char)186)) - (175))))))))) != (((/* implicit */int) ((arr_19 [i_4 - 1]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
}
