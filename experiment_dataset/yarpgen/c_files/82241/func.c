/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82241
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
    var_10 = (-(var_5));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_11 *= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)32765), ((short)27838)))) ? ((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 4])))) : (((((/* implicit */_Bool) (short)-27838)) ? (((/* implicit */int) (short)-27838)) : (((/* implicit */int) (unsigned short)19))))));
                                var_13 = ((/* implicit */unsigned char) min((((4294967295U) >> (((((/* implicit */int) (short)-27816)) + (27831))))), (var_5)));
                                var_14 = ((/* implicit */int) min((((/* implicit */long long int) min((403307103), (((/* implicit */int) (short)-27838))))), (((((/* implicit */_Bool) arr_4 [i_0 + 3] [i_2 - 1] [i_2 - 1])) ? (arr_4 [i_0 + 3] [i_2 - 1] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max(((-2147483647 - 1)), (-124616087))))));
                            arr_23 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */short) var_1);
                            arr_24 [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_15 [i_0 - 2] [i_1] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_7);
    var_17 = ((var_8) - (((/* implicit */int) var_1)));
}
