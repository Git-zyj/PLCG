/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75158
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [16ULL] [16ULL] [i_1] [i_4] = ((/* implicit */unsigned char) 0U);
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 18446744073709551615ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_6] [i_1] [(unsigned short)17] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) (unsigned char)37);
                                var_15 = (unsigned char)254;
                                var_16 *= ((/* implicit */signed char) (unsigned char)1);
                                var_17 = (unsigned char)255;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 2; i_9 < 18; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            arr_33 [i_10] [i_7] [i_8] [i_7] = ((/* implicit */signed char) (unsigned char)255);
                            var_18 = -1804207995;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        {
                            var_19 |= ((/* implicit */int) (_Bool)1);
                            var_20 = ((/* implicit */signed char) (unsigned char)240);
                            arr_39 [i_11] [i_7 + 1] [i_7 - 1] [7U] = ((/* implicit */signed char) (short)(-32767 - 1));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        {
                            var_21 = (unsigned char)0;
                            arr_44 [i_13] = (unsigned char)2;
                            arr_45 [i_8] [i_13] |= ((/* implicit */unsigned long long int) (unsigned char)253);
                        }
                    } 
                } 
            }
        } 
    } 
}
