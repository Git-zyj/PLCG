/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55697
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
    var_20 &= ((/* implicit */short) var_18);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((unsigned short) 5));
                                var_22 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_4] [i_4 + 1])))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7339190983477929504ULL)) ? (((/* implicit */unsigned int) 2147483647)) : (4294967292U)));
                                arr_11 [(signed char)8] [i_1] [i_1] [i_1] [6] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)-13497)) | (((/* implicit */int) (short)32255))))))) ? (((((/* implicit */_Bool) -1744885759)) ? (((/* implicit */unsigned int) -2147483638)) : (32U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1]))))) : (((((/* implicit */int) (short)15295)) / (2147483647))))))));
                            }
                        } 
                    } 
                } 
                var_24 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)6261)), (arr_8 [i_0] [i_1])));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */int) ((unsigned short) 9ULL));
                            var_26 = ((/* implicit */int) (+(arr_10 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                            var_27 &= ((/* implicit */unsigned char) max((((arr_14 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_6 + 1] [i_6 + 1])) : (arr_4 [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
