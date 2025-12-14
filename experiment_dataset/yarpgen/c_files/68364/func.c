/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68364
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) arr_0 [i_3]);
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_1 [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 4; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_17 [i_4] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_4 [i_0] [i_1]) && (((/* implicit */_Bool) (unsigned char)211)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_5])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_10 [i_0] [(unsigned char)9] [i_5]), (((/* implicit */unsigned short) var_1))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4 + 1])))))) : (min((arr_12 [i_0] [i_4 - 3] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)65528))))));
                            var_17 = ((/* implicit */unsigned short) min((var_9), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0]))));
                            arr_18 [(unsigned char)13] [i_1] [i_4] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_0 [i_4])), (((unsigned int) ((708540635U) ^ (var_14))))));
                            var_18 = ((/* implicit */long long int) (!(((arr_9 [i_0] [i_1] [i_1]) == (var_12)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            {
                arr_24 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6])) ? (min((1967363311U), (arr_14 [i_6] [i_6] [i_6] [i_6] [i_7] [i_7]))) : (((((/* implicit */_Bool) ((arr_14 [i_6] [i_7] [15LL] [i_7] [i_6] [i_7]) << (((var_2) - (564474029U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6]))) : (min((((/* implicit */unsigned int) (unsigned char)152)), (1967363293U)))))));
                var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(2327604003U))), (arr_6 [i_6])))) ? ((-(arr_22 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 1967363272U)) >= (((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_7])) ? (var_4) : (((/* implicit */long long int) arr_9 [i_6] [i_6] [i_7]))))))))));
            }
        } 
    } 
}
