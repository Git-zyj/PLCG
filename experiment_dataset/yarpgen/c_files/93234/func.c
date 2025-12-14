/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93234
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
    var_10 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (((min((var_6), (((/* implicit */unsigned long long int) var_1)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19708)) << (((arr_8 [i_2] [i_2] [i_2] [i_2 - 1]) - (314903596426573917ULL)))))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)25557)) : (((/* implicit */int) (short)-25546)))) : (((/* implicit */int) ((short) 18446744073709551597ULL)))));
                                arr_15 [i_2] [i_3] [(short)11] [i_1] [i_2] = ((/* implicit */_Bool) var_1);
                                var_12 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 2] [i_3])) ? (((/* implicit */int) arr_13 [4] [i_3] [i_2] [i_2 + 2] [i_3])) : (((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) var_7);
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * ((-(((((/* implicit */_Bool) -2944548710434187497LL)) ? (((/* implicit */int) (short)25564)) : (((/* implicit */int) (short)-1409))))))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), ((short)-25554)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) : (((((/* implicit */unsigned long long int) var_3)) & (var_0)))))) && (((/* implicit */_Bool) var_2))));
}
