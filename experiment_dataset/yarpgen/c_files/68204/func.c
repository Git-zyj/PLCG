/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68204
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
    var_15 = var_6;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_16 *= 12991451805885863706ULL;
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((long long int) max((4611685949707911168ULL), (((/* implicit */unsigned long long int) 1500188832U)))));
                                var_17 = (((!(((/* implicit */_Bool) arr_12 [i_3 + 4] [i_4 - 1] [i_0 - 3] [i_0 - 2] [i_4] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 + 2] [i_4 + 3]))) - (arr_4 [i_3 + 4] [i_4 + 1] [i_0 + 1]))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [(unsigned short)20] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4157924636739830052LL)) ? (var_5) : (((/* implicit */long long int) arr_0 [i_1]))));
                var_18 *= ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) ((unsigned char) 4157924636739830052LL))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (short)-27234))));
                            arr_25 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) ((arr_11 [(unsigned short)2] [i_1] [(unsigned short)2] [i_6] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) max((((unsigned short) arr_20 [i_0 - 3])), (arr_23 [i_5])))))));
                            arr_26 [10ULL] [i_1] [i_5] [i_1] = ((/* implicit */int) max((max((((unsigned long long int) 4157924636739830052LL)), (((/* implicit */unsigned long long int) arr_17 [i_0 - 3] [i_0 - 1] [i_0 - 2] [i_5])))), (((/* implicit */unsigned long long int) (unsigned short)20873))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (unsigned short)0);
}
