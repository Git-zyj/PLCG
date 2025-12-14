/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85609
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
    var_15 &= ((/* implicit */signed char) min(((unsigned short)9656), (var_6)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) (unsigned char)212);
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */int) ((min((((/* implicit */long long int) (~(arr_1 [i_0])))), (((arr_2 [i_2] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))) > ((~(((arr_0 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-14584)))))))));
                    var_17 = ((/* implicit */short) (-(min(((~(((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (var_12)))))));
                    var_18 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_0] [i_0]))), (max((4219302350508971636LL), (((/* implicit */long long int) (unsigned short)43674))))));
                    arr_9 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_3 [i_0])), (arr_4 [i_2] [6LL] [i_1] [i_0])))))))) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_2] [i_2])) : (((/* implicit */int) ((short) (_Bool)0)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        for (signed char i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_19 ^= ((unsigned char) max((((/* implicit */int) var_1)), (((((arr_6 [4ULL] [i_4 + 1]) + (2147483647))) << (((/* implicit */int) arr_3 [i_3]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_23 [i_4] [i_4] [(unsigned char)7] [(signed char)6] [i_7] = ((/* implicit */signed char) max((((/* implicit */int) min((arr_19 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 1]), (((/* implicit */unsigned short) var_0))))), (((((/* implicit */_Bool) arr_19 [i_4] [i_4 - 1] [i_4 + 3] [i_4 + 2] [i_4 - 1] [i_4 + 2])) ? (((/* implicit */int) arr_19 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_4 + 2])) : (((/* implicit */int) arr_19 [i_4] [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 1]))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (var_4)))) > (((/* implicit */int) (short)14583))));
                                arr_24 [i_4] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) arr_11 [i_3]);
                                arr_25 [i_4] = ((/* implicit */unsigned char) (+(max((((arr_17 [i_3] [i_4] [i_4] [0ULL]) ? (((/* implicit */unsigned long long int) arr_1 [i_7])) : (var_10))), (((/* implicit */unsigned long long int) ((unsigned char) var_6)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_12 [i_3] [i_3]), (((/* implicit */short) var_0))))))))));
                    arr_26 [i_4] [i_4 + 3] [i_4] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_6 [i_4] [i_3])) ? (804967880483438545ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (var_12))));
}
