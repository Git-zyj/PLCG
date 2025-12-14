/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84269
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_2 [(unsigned char)1] = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
        var_20 = ((/* implicit */unsigned short) var_11);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            var_21 |= ((/* implicit */unsigned char) 11600683398067938567ULL);
            var_22 = ((/* implicit */short) -1LL);
        }
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((long long int) arr_3 [i_1] [i_1]));
        arr_9 [i_1] = ((/* implicit */int) 1602466316851181141LL);
        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (max((((/* implicit */int) arr_7 [i_1])), (0)))));
        var_23 = ((/* implicit */unsigned short) (short)-19436);
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        var_24 -= ((/* implicit */int) min((((unsigned short) (_Bool)0)), (((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned long long int) (short)19436)), (8692134468983184142ULL)))))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_14)), (var_2))))) : (((int) var_14))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_26 += ((/* implicit */_Bool) var_9);
            arr_17 [i_3] = ((/* implicit */long long int) (unsigned short)65535);
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_11 [i_4] [i_4 + 1])) : (arr_14 [i_4 + 1] [i_3] [i_4 + 1])));
        }
    }
    var_28 += ((/* implicit */unsigned long long int) var_7);
}
