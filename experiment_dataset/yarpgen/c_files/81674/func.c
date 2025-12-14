/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81674
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
    var_10 = ((/* implicit */signed char) var_2);
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3556799099349987186LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (3556799099349987199LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))))) && (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 3556799099349987209LL)))) && (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [8] [i_1] [i_2])) ? (arr_3 [12LL] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63228)))))) && (((/* implicit */_Bool) max((3556799099349987209LL), (-3556799099349987186LL))))))), (arr_4 [i_0 - 2] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0 - 1] = ((/* implicit */unsigned int) ((signed char) 16777216));
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) arr_7 [i_0] [(signed char)7] [i_3 - 1] [i_4])) ? (arr_10 [i_0] [i_3 + 2] [i_2] [i_4] [i_4] [i_0 + 2]) : (901328941302099946ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                            }
                        } 
                    } 
                    var_14 ^= ((/* implicit */signed char) max(((unsigned short)35288), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_10 [i_2] [i_2] [i_1] [(unsigned char)11] [i_0 + 1] [i_0 + 1]))) || (((((/* implicit */_Bool) -283792096)) && (((/* implicit */_Bool) arr_1 [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 19; i_7 += 3) 
                {
                    for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        {
                            arr_23 [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((16777223) - (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (-(var_9)))) : (((((/* implicit */long long int) 3194104122U)) / (3556799099349987186LL)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -283792096)) || (((/* implicit */_Bool) arr_15 [i_7] [i_7])))) && (((/* implicit */_Bool) arr_13 [i_5 + 1]))))) : ((((!(((/* implicit */_Bool) arr_21 [(unsigned char)18] [i_6] [i_7] [i_8])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5 + 1] [i_6] [i_7] [i_8 - 1])) || (((/* implicit */_Bool) arr_20 [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_7] [i_8])))))))));
                            var_15 = ((/* implicit */_Bool) arr_17 [i_8 + 1] [i_7 + 1] [i_5]);
                            arr_24 [i_7] = ((/* implicit */int) max((((unsigned long long int) arr_18 [i_8 - 2] [i_8 - 2] [i_7] [i_8 + 1])), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) arr_18 [i_5] [i_5] [i_7] [i_5 - 1]))), (((int) (_Bool)0)))))));
                            var_16 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_7] [i_8])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_8])) || (((/* implicit */_Bool) arr_15 [i_5] [i_8]))))))))));
                        }
                    } 
                } 
                arr_25 [i_5] = arr_16 [i_5];
                var_17 = ((((arr_21 [i_5] [i_5 + 1] [i_6 + 2] [i_6 - 1]) != (arr_21 [i_5 + 1] [i_5 + 1] [i_6 + 2] [i_6 - 1]))) ? (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -16777230)))))) : (((long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_14 [i_5])) * (((/* implicit */int) (_Bool)1)))) != (((int) (unsigned short)63222)))))));
                var_18 &= ((/* implicit */unsigned long long int) arr_13 [i_5 + 1]);
            }
        } 
    } 
}
