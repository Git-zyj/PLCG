/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95391
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_10 += (signed char)66;
        var_11 = min((((unsigned short) arr_0 [i_0])), (((/* implicit */unsigned short) arr_0 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (var_5))));
        var_12 ^= ((/* implicit */unsigned char) min((((unsigned short) min((((/* implicit */unsigned int) arr_4 [i_1])), (4294967280U)))), (((/* implicit */unsigned short) (unsigned char)139))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                var_13 = ((/* implicit */_Bool) ((signed char) 4294967280U));
                var_14 = ((/* implicit */unsigned short) max((var_14), (arr_7 [i_1] [i_1] [i_1])));
                var_15 = ((/* implicit */unsigned char) 579511638);
            }
            var_16 += ((/* implicit */short) var_3);
        }
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) arr_5 [i_4]);
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    arr_23 [i_4] [13U] [i_6] |= ((/* implicit */int) var_5);
                    var_17 = ((/* implicit */signed char) arr_12 [i_4] [i_4] [i_5] [i_5]);
                }
            } 
        } 
        arr_24 [i_4] [i_4] &= ((/* implicit */unsigned int) ((unsigned short) var_0));
    }
    for (short i_7 = 1; i_7 < 11; i_7 += 1) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned short) 16U))) || (((/* implicit */_Bool) (short)-3232))))))));
        var_19 |= ((/* implicit */unsigned char) max((arr_22 [i_7] [i_7 - 1] [i_7] [i_7 + 2]), (((/* implicit */long long int) ((int) (signed char)-87)))));
    }
    var_20 = ((/* implicit */unsigned char) ((short) (unsigned char)172));
}
