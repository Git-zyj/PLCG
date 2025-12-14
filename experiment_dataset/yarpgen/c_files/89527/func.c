/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89527
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1191369187))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [1] [10U]))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned int) arr_8 [i_3 + 2] [i_3 - 1] [i_3 + 3] [i_2 + 1] [i_2 + 2] [i_2 + 3])))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_3 + 1]))));
                    }
                } 
            } 
            arr_10 [i_0] = ((/* implicit */short) ((unsigned char) ((2883062583U) < (((/* implicit */unsigned int) var_2)))));
        }
        for (short i_4 = 2; i_4 < 12; i_4 += 2) 
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
            arr_15 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) > (5989258788258394495LL)))) < (((/* implicit */int) (signed char)-40))));
        }
        var_23 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0] [i_0]))));
        var_24 = ((/* implicit */int) arr_5 [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -3990174888144668341LL)) ? (arr_16 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        var_26 = ((/* implicit */unsigned int) ((unsigned long long int) arr_17 [i_5] [i_5]));
        var_27 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_16 [i_5])))));
        var_28 = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (arr_16 [i_5]) : (arr_16 [i_5]))) <= (arr_16 [i_5]))));
    }
}
