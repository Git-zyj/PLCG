/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95753
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [13U] [11U] [i_1] [i_2] [i_3] = arr_8 [i_1] [i_1] [i_1] [i_1];
                            arr_11 [i_0] [i_1] [23ULL] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_0 + 3]))))))) : (((/* implicit */int) var_13))));
                            arr_12 [i_1] [i_3] = ((/* implicit */_Bool) (~(((unsigned int) arr_1 [i_0 + 3] [i_2 + 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4] [i_5])))))))) ? (((/* implicit */long long int) (-(arr_0 [i_0 + 3] [i_0 - 1])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [(signed char)21] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (arr_15 [i_0]))) : (((/* implicit */long long int) (+(arr_2 [i_0] [8U] [i_0]))))))));
                            arr_19 [i_0] [i_1] [17ULL] [i_1] [i_0] [i_1] = ((_Bool) var_15);
                        }
                    } 
                } 
                arr_20 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_15 [(signed char)8]));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) var_4)))));
    var_18 = ((/* implicit */long long int) var_11);
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(var_4)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))));
}
