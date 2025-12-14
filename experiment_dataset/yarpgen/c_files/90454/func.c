/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90454
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
    var_11 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 2] [i_0]))) | (arr_4 [i_2 + 1] [i_1] [i_1] [i_0])))) ? (arr_2 [i_2 + 1] [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) arr_3 [i_3] [i_3]))));
                                var_14 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1 + 1]))))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) / (2544015342295075444LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (int i_8 = 1; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned long long int) var_6);
                            var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((2811210174U), (((/* implicit */unsigned int) var_8))))) ? (arr_20 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((var_1) << (((((/* implicit */int) (unsigned short)65520)) - (65505))))))))));
                            var_17 &= min((((/* implicit */unsigned long long int) 1942128334)), (arr_22 [i_5] [i_7]));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_6]))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((int) ((_Bool) arr_22 [i_5] [i_6]))))));
                var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned short)20))) ? ((+(arr_20 [i_6] [i_5]))) : (arr_20 [i_5] [i_6])));
            }
        } 
    } 
}
