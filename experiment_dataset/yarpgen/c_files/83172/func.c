/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83172
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(0)))) ? (((arr_0 [i_1 - 2]) + (arr_0 [i_1 - 2]))) : ((+(13)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((8), (((/* implicit */int) (short)31815))));
                                var_17 = ((/* implicit */int) ((((/* implicit */long long int) max((0), (0)))) | (((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) ^ (0LL))) & (((/* implicit */long long int) -14))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? ((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (-7) : (((/* implicit */int) (short)31821)))))) : (arr_2 [i_0] [7])));
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-31815)), (7ULL)));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65408))))) / (((long long int) var_8))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) - (((1059455211U) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_5] [i_6]))));
                arr_20 [i_5] = ((/* implicit */int) arr_18 [i_5] [i_5]);
                arr_21 [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) / (((/* implicit */int) arr_15 [i_5]))));
                /* LoopSeq 1 */
                for (long long int i_7 = 4; i_7 < 19; i_7 += 3) 
                {
                    var_21 |= ((/* implicit */long long int) var_15);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) var_11);
                                arr_30 [i_5] [i_6] [i_7 + 1] [i_8] [i_7] = min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 18219432079190418384ULL)) && (((/* implicit */_Bool) arr_25 [i_7 - 2] [i_7 + 1] [i_7 - 4] [i_7 + 1]))))), (var_8));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
