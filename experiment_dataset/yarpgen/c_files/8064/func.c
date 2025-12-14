/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8064
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((short) ((short) ((unsigned short) arr_1 [i_0]))));
                arr_5 [i_0] = ((signed char) ((short) ((unsigned char) (signed char)70)));
            }
        } 
    } 
    var_10 ^= ((short) ((short) ((signed char) (short)26474)));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 4; i_5 < 14; i_5 += 2) 
                    {
                        arr_17 [i_2] [i_3] [i_3 - 1] [i_4] [i_5 - 4] = ((unsigned long long int) ((unsigned char) ((short) var_2)));
                        arr_18 [i_3] [i_4] [i_5] &= ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) ((unsigned char) arr_15 [i_2] [(unsigned char)11] [i_4] [(short)6]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 4; i_6 < 14; i_6 += 3) 
                        {
                            arr_21 [i_2] = ((/* implicit */unsigned char) ((signed char) ((short) arr_13 [i_2] [i_2])));
                            var_11 &= ((/* implicit */short) ((unsigned short) ((short) var_9)));
                        }
                    }
                    var_12 = ((unsigned char) ((unsigned short) ((signed char) arr_9 [i_2])));
                    arr_22 [i_2] [i_3 + 1] [i_4] = ((/* implicit */signed char) ((short) ((short) ((short) (unsigned char)0))));
                }
            } 
        } 
    } 
}
