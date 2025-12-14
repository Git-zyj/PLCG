/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87302
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) (_Bool)1);
        var_13 = var_2;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) (((+(arr_1 [i_0 + 2]))) ^ (((/* implicit */unsigned int) ((arr_4 [i_2] [i_1] [i_0]) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-3))))))))));
                    var_15 = ((/* implicit */unsigned long long int) max(((unsigned char)255), (((/* implicit */unsigned char) var_10))));
                    arr_7 [i_0] [i_1 - 1] [i_2] [i_1 + 1] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1]))))));
        arr_8 [i_0] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_10)), (arr_3 [i_0 + 2] [i_0 + 2])))), (arr_0 [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_10 [i_3])) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (8388607)))) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_10 [i_3]))));
        var_19 = ((/* implicit */unsigned char) ((unsigned short) arr_9 [i_3]));
    }
    var_20 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_5)))) + (2147483647))) >> (((((/* implicit */int) var_2)) - (50619)))));
    var_21 *= ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) -8269867934281750118LL)) ? (((/* implicit */int) (short)-28816)) : (((/* implicit */int) var_5)))) > (((/* implicit */int) var_7))))), (((var_11) | (((/* implicit */int) (unsigned char)36))))));
}
