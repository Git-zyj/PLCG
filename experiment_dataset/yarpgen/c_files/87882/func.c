/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87882
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
    var_16 ^= ((/* implicit */unsigned char) var_14);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 *= ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (15453310230416048633ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned long long int) (-(9223372036854775806LL)))) : (arr_3 [i_0] [(signed char)11] [i_2]))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_2]) : (arr_4 [i_2])))) / (((9223372036854775806LL) / (((/* implicit */long long int) arr_4 [i_2]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                        var_20 = ((/* implicit */_Bool) arr_9 [i_3]);
                        arr_14 [i_0] [i_0] [(unsigned short)17] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)15))));
                        var_22 = ((/* implicit */unsigned char) ((short) arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_4 - 1]));
                        arr_17 [i_0] [i_0] [i_0] [i_4 + 2] = ((/* implicit */int) ((arr_11 [i_0] [i_1 - 1] [i_2] [i_4 + 3]) >= (1863009911U)));
                        var_23 = ((/* implicit */int) max((var_23), ((~(((/* implicit */int) arr_0 [i_4 - 1] [i_4 - 1]))))));
                        arr_18 [i_0] [(_Bool)1] [i_1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */short) (+(((/* implicit */int) (short)-22632))));
                    }
                }
            } 
        } 
    } 
}
