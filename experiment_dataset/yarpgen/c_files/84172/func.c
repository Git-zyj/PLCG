/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84172
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
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0 - 1] [i_0] [i_2] [i_0 - 1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) (_Bool)1))))) > (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (arr_7 [i_1] [i_1] [i_1 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6376434342326519197LL)));
                            var_16 = ((/* implicit */int) min((((/* implicit */unsigned short) min((arr_0 [i_3]), (arr_0 [i_1 + 2])))), (arr_1 [i_3 - 1])));
                            arr_13 [i_0] [i_1 + 2] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0 - 1]))) : (arr_5 [i_0] [i_0])));
                        }
                    } 
                } 
                arr_14 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_3))), (((/* implicit */long long int) ((-1117603963) + (arr_9 [i_1 - 1] [i_1 + 1]))))));
                arr_15 [i_0] [i_0 - 2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_7 [i_0] [i_0] [i_0 + 1]) : (arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 1])))) ? (((var_6) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60347))))) : (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 2])) ? (arr_7 [(unsigned short)8] [i_0 + 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 2; i_7 < 12; i_7 += 4) 
                    {
                        {
                            arr_27 [i_6] [i_6] [i_6] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 122880)) ? (var_7) : (((/* implicit */int) (_Bool)1))))) ? (((long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_5) : (((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1063390135)) ? (((/* implicit */int) (unsigned short)11787)) : (((/* implicit */int) (unsigned short)448)))))));
                            arr_28 [i_4] [i_4] [i_7] [i_4] [i_7] &= ((((/* implicit */long long int) 872294955)) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((+(8011387167688746437LL))))));
                            var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)4064))));
                            arr_29 [i_4] = ((/* implicit */int) ((arr_26 [i_4] [i_4] [i_4] [(unsigned short)11] [i_4 + 1]) >= (((((/* implicit */_Bool) arr_24 [i_4 + 1])) ? (arr_24 [i_4 - 1]) : (arr_24 [i_4 + 1])))));
                        }
                    } 
                } 
                var_18 = arr_25 [7LL] [i_4];
                arr_30 [i_4] [i_4] = arr_16 [i_5];
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)16474)) : (-1618651864)))) : (((((/* implicit */_Bool) 33488896LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (2251799813677056LL))))) : (((max((6349393179940283778LL), (-8011387167688746437LL))) << (((max((2147483647), (var_0))) - (2147483647))))));
}
