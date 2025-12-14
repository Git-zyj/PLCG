/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85820
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
    var_11 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 |= ((/* implicit */short) var_5);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) var_5)))))) <= (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_2]))))), (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_4 [i_0] [i_0]))))))));
                                var_14 = (((~(((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_3 - 1])))) ^ (((((/* implicit */int) var_1)) + (((/* implicit */int) min((((/* implicit */short) var_7)), (arr_14 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6])))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((int) 4266845797170886148ULL)), (((/* implicit */int) arr_7 [i_0] [i_1] [i_1 + 1]))))))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((((arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_1]) >> (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1])))) << (((-39545954) + (39545997))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))) >= (arr_2 [i_0 + 2])))))));
                }
                var_17 = ((/* implicit */long long int) ((max((arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))) - ((+(arr_11 [i_0 + 2] [i_0 + 2] [i_1 + 2] [i_1 + 2])))));
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned long long int) min((((-39545944) * ((+(((/* implicit */int) var_7)))))), (((/* implicit */int) var_3))));
    var_19 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_4)) < (((/* implicit */int) var_4))))));
}
