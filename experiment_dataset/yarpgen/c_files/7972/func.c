/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7972
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned char) ((int) var_14));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)22694))))) ? ((~(((/* implicit */int) arr_1 [i_0 + 1] [i_1 - 1])))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)22691)) ? (16384U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22706)))))))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [(signed char)6] [i_1 + 1] [i_1 - 1])) ? (min(((((_Bool)0) ? (var_0) : (((/* implicit */long long int) 262143U)))), (((/* implicit */long long int) min((((/* implicit */int) arr_9 [i_1] [(unsigned short)7] [i_2] [12U] [i_4])), (-2147483642)))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                                arr_10 [i_1 + 2] [i_1] [i_1] [i_1] [7LL] [i_1 - 1] [i_1] = 4294950911U;
                                arr_11 [i_0] [i_0] [i_1] [i_0] [(_Bool)1] [i_4] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [13LL])) ? (var_17) : (((/* implicit */unsigned long long int) var_18)))) & (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) ? (arr_6 [i_0 + 1] [(signed char)12] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) var_9))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_0))));
                                var_24 = ((/* implicit */signed char) (short)-22693);
                                arr_16 [i_0] [(unsigned short)0] [13LL] [i_1] [i_6] = ((/* implicit */long long int) var_18);
                            }
                        } 
                    } 
                    var_25 = min((((/* implicit */unsigned long long int) ((arr_3 [i_1 + 2]) ^ (arr_3 [i_1 - 1])))), (4002565267052893701ULL));
                    arr_17 [i_1] [22] [i_1] [i_1] = ((/* implicit */unsigned int) arr_4 [i_0 + 1]);
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) (_Bool)0)))) + (var_18)));
    /* LoopSeq 2 */
    for (int i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        arr_20 [i_7] = ((/* implicit */unsigned char) (((~(11174562390506878598ULL))) & (((unsigned long long int) arr_5 [i_7] [i_7]))));
        var_27 = ((unsigned short) ((unsigned long long int) ((11260370909000694422ULL) & (0ULL))));
        var_28 = ((/* implicit */unsigned char) var_1);
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) 27024910U))));
    }
    for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        var_30 = ((/* implicit */unsigned long long int) arr_22 [i_8]);
        arr_25 [i_8] = ((/* implicit */unsigned long long int) arr_22 [i_8]);
    }
}
