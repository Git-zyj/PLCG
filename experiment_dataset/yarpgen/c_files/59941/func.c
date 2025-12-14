/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59941
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_18 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned char)10])) - (((/* implicit */int) arr_1 [(signed char)8])))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((arr_1 [i_1]) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) arr_1 [i_1]))))) >= (max((((/* implicit */unsigned int) arr_1 [i_1])), (4150769765U)))));
            var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((short)-4668), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)20100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0] [(unsigned short)9] [i_0 - 1])))));
        }
        for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            arr_7 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0])), ((~(min((-7098184845962140396LL), (((/* implicit */long long int) (unsigned short)5665))))))));
            arr_8 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_10))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */short) ((unsigned char) (~(arr_3 [i_4] [i_3 + 1] [i_4]))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)5669)) >> (((((/* implicit */int) (short)4668)) - (4638)))));
                        var_23 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_2] [6] [i_3] [i_4]);
                        var_24 = ((/* implicit */unsigned short) 8257536);
                        var_25 ^= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)13] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_3] [(short)10] [i_4] [i_3 - 1] [i_4])) : (((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (arr_5 [i_0] [i_4]))))) : (0ULL))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)47761))));
    }
    var_27 += ((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
}
