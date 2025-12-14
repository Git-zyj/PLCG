/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75878
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
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 2] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_1 + 1] [i_1 + 3]))) : (var_1)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    var_14 = (-(((/* implicit */int) (_Bool)1)));
                    arr_7 [i_0] [i_1] [i_1 - 1] [i_0] = ((/* implicit */int) 4094ULL);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (18446744073709547522ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_16 = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_5]))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_18 [(unsigned short)21] [i_4] [i_3] [i_4])))) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_17 = ((/* implicit */_Bool) var_2);
                    arr_25 [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */long long int) min(((_Bool)1), (arr_14 [i_3] [i_3] [i_3])))), ((~((~((-9223372036854775807LL - 1LL))))))));
                }
                var_18 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 17703135039244992573ULL)) ? (67108863) : (((/* implicit */int) arr_10 [i_4]))))));
            }
        } 
    } 
}
