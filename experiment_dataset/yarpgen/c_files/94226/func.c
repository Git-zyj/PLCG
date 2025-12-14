/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94226
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)15668)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))));
                            arr_9 [i_2] [i_2] [i_1] [i_2] |= ((/* implicit */long long int) max((((/* implicit */int) (short)(-32767 - 1))), (-114170518)));
                            var_13 = ((/* implicit */int) ((17212631456576498477ULL) * (((/* implicit */unsigned long long int) 114170517))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            arr_15 [16] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
                            arr_16 [i_0 - 1] [i_1] [i_4] [i_4] [i_0 - 1] [i_5] = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_6 = 1; i_6 < 11; i_6 += 4) 
    {
        arr_21 [(short)0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_14 [i_6] [i_6 - 1] [i_6] [i_6] [i_6 + 1] [(short)11])) ? (-4722270365959529038LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
        var_14 ^= ((/* implicit */_Bool) (+(-114170497)));
        arr_22 [i_6 - 1] = ((/* implicit */short) (~(-114170518)));
        var_15 *= ((/* implicit */short) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_6 [i_6] [i_6] [i_6 + 1])) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)112)))))));
    }
    var_16 = ((/* implicit */short) 2654596639710249233ULL);
}
