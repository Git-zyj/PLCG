/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64774
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
    for (short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_13 = ((((/* implicit */_Bool) (-(var_1)))) ? (var_12) : (((/* implicit */unsigned long long int) (~(arr_3 [i_0] [i_0 - 3])))));
                            arr_9 [13U] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) 0ULL));
                            arr_10 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) arr_8 [i_1] [i_1] [i_2] [i_3 - 1] [i_3] [i_3]))), (((((/* implicit */_Bool) (~(-632907849958192323LL)))) ? (arr_4 [i_0] [i_2] [i_0]) : (((/* implicit */long long int) 16383))))));
                            arr_11 [i_0] [(unsigned char)8] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)100), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [(signed char)14] [i_2])) : (arr_1 [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_3 [(signed char)6] [i_3])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 3; i_4 < 16; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_14 = arr_15 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0];
                                arr_19 [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) arr_8 [i_6 - 1] [i_6 - 2] [i_6] [i_6] [i_6] [i_6]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        for (short i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    for (unsigned int i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_32 [i_8] [i_10 + 1] [i_9] [i_8] = ((/* implicit */unsigned char) min((16375), (((/* implicit */int) (short)-18397))));
                                var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((16383) > (((/* implicit */int) (short)-1524))))), (((((/* implicit */_Bool) var_12)) ? (((unsigned int) (unsigned char)100)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)87))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    for (unsigned char i_13 = 2; i_13 < 13; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 1713907011)) - (625762638392106401ULL)));
                                var_17 *= min(((-(524272ULL))), (((/* implicit */unsigned long long int) arr_40 [i_13 + 1] [i_13] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13] [i_13])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
