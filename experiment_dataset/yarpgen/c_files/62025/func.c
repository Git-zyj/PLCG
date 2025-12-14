/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62025
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_10 = ((/* implicit */unsigned short) var_9);
                        arr_11 [i_0 + 3] [i_1 + 2] [i_0] [i_3 - 2] = ((int) var_0);
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            var_11 = ((/* implicit */unsigned int) max((((long long int) min(((unsigned short)24333), (((/* implicit */unsigned short) (_Bool)1))))), (((/* implicit */long long int) arr_0 [i_0]))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)217))))) / (var_6)));
                            var_13 += var_2;
                            var_14 = ((/* implicit */int) max((var_14), (var_9)));
                            arr_14 [i_0] [i_1 + 2] [11ULL] [9LL] [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_0 [i_0]));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_17 [i_0] = ((/* implicit */signed char) 6038648291112494117ULL);
                            arr_18 [i_2] [i_2] [i_2] [i_3] [i_5] &= ((/* implicit */int) ((unsigned long long int) arr_6 [i_0] [i_0] [i_3]));
                        }
                        for (int i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            var_15 |= ((/* implicit */short) ((unsigned int) var_8));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))));
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned short) var_4);
        var_18 += ((/* implicit */short) (+(5379788423932565454ULL)));
        arr_22 [i_0] = ((/* implicit */long long int) (+(var_8)));
        var_19 = (+(((/* implicit */int) ((6038648291112494128ULL) >= (((/* implicit */unsigned long long int) 747722922))))));
    }
    for (signed char i_7 = 3; i_7 < 21; i_7 += 1) 
    {
        var_20 = ((/* implicit */signed char) var_4);
        var_21 = ((/* implicit */long long int) -1329503579);
        var_22 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
    }
    var_23 = min((((/* implicit */unsigned int) ((_Bool) (signed char)-124))), (2146622918U));
}
