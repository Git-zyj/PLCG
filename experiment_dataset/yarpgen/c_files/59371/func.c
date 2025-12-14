/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59371
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
    var_16 &= ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned long long int) arr_0 [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (((~(((/* implicit */int) arr_3 [i_0])))) % (((/* implicit */int) arr_3 [i_0])))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_3 [i_0])) - (100)))));
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) ((signed char) arr_1 [i_0]));
                arr_7 [i_1] [i_0] [18] = ((/* implicit */unsigned short) ((int) arr_5 [i_0] [i_2 + 2] [i_2 + 2] [i_0]));
                arr_8 [i_0] = ((/* implicit */signed char) (-(9223372036854775807LL)));
                var_21 = ((/* implicit */long long int) var_7);
                var_22 = ((/* implicit */unsigned char) ((arr_1 [i_2 + 4]) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) arr_1 [i_2 + 2]))));
            }
        }
        for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            var_23 -= ((/* implicit */_Bool) ((unsigned short) arr_4 [i_3 - 1] [i_3 + 2]));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 1]))));
        }
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (unsigned char)214)) ^ (((/* implicit */int) var_3)))));
            arr_15 [i_0] = (+(((/* implicit */int) ((unsigned char) (unsigned short)65520))));
            arr_16 [i_0] = var_9;
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_18 [i_5])));
                var_26 += ((/* implicit */unsigned int) arr_0 [i_0] [i_5]);
                arr_23 [i_0] = ((/* implicit */int) ((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)(-127 - 1)))))));
                arr_24 [i_0] [i_0] [i_6] [i_5] &= ((/* implicit */unsigned char) ((long long int) (signed char)1));
            }
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                arr_29 [i_0] [i_0] [i_0] [14ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_27 [i_0] [16ULL] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_7]))) : ((+(var_5)))));
                arr_30 [i_0] [i_5] = ((/* implicit */long long int) ((int) arr_1 [i_0]));
            }
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((unsigned char) arr_6 [i_0] [i_5] [i_5] [i_5])))));
        }
    }
}
