/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70705
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
    var_10 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)15072))) == (var_9)))))) > (((/* implicit */long long int) ((/* implicit */int) (((+(var_5))) <= (min((var_5), (((/* implicit */unsigned int) (_Bool)1))))))))));
    var_11 = var_3;
    var_12 = ((/* implicit */signed char) ((short) -1226987433));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_12 [i_2]))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_3 + 1])), (var_3)))))));
                                var_13 &= arr_3 [i_1];
                                var_14 = ((/* implicit */long long int) ((min((((/* implicit */long long int) var_6)), (max((var_9), (((/* implicit */long long int) var_4)))))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] &= ((unsigned int) arr_1 [i_1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (arr_10 [i_0] [i_0] [i_5] [i_5] [i_5])));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((unsigned long long int) var_8));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_7])) : (((/* implicit */int) var_2))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned int) ((int) -7508569071380396938LL));
                                var_18 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_6 - 1])));
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)52049))))));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)10066)) - (-1)));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) | (min((var_5), (((/* implicit */unsigned int) var_2))))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10488))) & (0LL))))))))));
}
