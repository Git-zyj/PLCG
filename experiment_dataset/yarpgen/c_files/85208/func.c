/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85208
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 |= min((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((unsigned int) var_3))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_7))));
                    arr_7 [7U] [i_1] [i_0] = ((/* implicit */int) 2113929216U);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1]);
                                var_20 ^= ((/* implicit */short) ((unsigned long long int) max((((/* implicit */int) arr_0 [i_2])), (var_15))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    var_21 &= ((/* implicit */unsigned long long int) (unsigned short)52035);
                    arr_15 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */short) (((_Bool)1) ? (arr_12 [(short)2] [i_0 + 1] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((int) arr_1 [i_1])))))));
                }
                arr_16 [i_0] = ((unsigned char) var_0);
            }
        } 
    } 
    var_22 -= ((/* implicit */short) var_12);
    var_23 = ((/* implicit */signed char) 1959723208U);
    /* LoopSeq 1 */
    for (signed char i_6 = 4; i_6 < 16; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (unsigned short i_8 = 1; i_8 < 17; i_8 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) 9223372036854775807LL);
                    var_25 = ((/* implicit */unsigned short) var_14);
                }
            } 
        } 
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_10);
    }
}
