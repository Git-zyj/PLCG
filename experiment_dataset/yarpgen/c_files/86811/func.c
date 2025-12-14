/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86811
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(arr_3 [i_1] [i_1])))), (((unsigned int) min((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (282935480U))))));
                var_11 ^= ((/* implicit */unsigned int) min((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (signed char)120)))), ((+(arr_0 [i_1])))));
                var_12 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)28335)))))))), ((~(var_6)))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min(((+(((arr_0 [i_1]) & (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_10) != (((/* implicit */long long int) arr_3 [i_1] [i_1]))))) - (arr_3 [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned long long int) arr_4 [8LL] [i_2] [i_2])) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) || (((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)150)))) - (((/* implicit */int) ((arr_0 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((arr_0 [i_2]) ^ (arr_0 [i_3]))) / (((arr_0 [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                                var_14 = ((/* implicit */unsigned long long int) ((long long int) max((max((arr_0 [i_1]), (var_8))), (max((5859056029585416330ULL), (arr_0 [i_0]))))));
                                arr_15 [i_1] [i_1] [i_1] [(unsigned short)6] [i_1] [(unsigned short)6] [i_1] = ((/* implicit */unsigned short) (((-(max((((/* implicit */long long int) (unsigned char)148)), (-2127970304592991962LL))))) / (((/* implicit */long long int) max((((/* implicit */int) min(((unsigned short)54272), (arr_13 [i_4] [i_3] [i_2] [i_0] [i_0])))), (((int) var_10)))))));
                                arr_16 [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */int) (-(1661843790U)));
                                var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) * (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)220))))), (2633123505U)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_16 -= ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) var_6)))));
}
