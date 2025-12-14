/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8230
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)150)) ? (63U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115)))))) - (((var_4) ? (((/* implicit */long long int) (+(((/* implicit */int) var_17))))) : (63LL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [7LL] [i_1] [i_2] [i_1] [i_1] [8U] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31425)) ? (((/* implicit */int) max((((/* implicit */short) var_1)), (var_5)))) : (((/* implicit */int) (short)-1200))));
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_4] [(short)15]);
                                arr_17 [i_4] [i_4] [i_1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [(_Bool)1] [i_4])) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((short) var_15))) : (((/* implicit */int) arr_6 [i_1 - 1] [i_2 + 1] [i_3 + 2] [i_3 + 1]))))) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_1])) : (((/* implicit */int) ((unsigned char) arr_12 [i_1] [i_1] [i_1])))));
                            }
                        } 
                    } 
                    arr_18 [i_1] = ((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) arr_10 [(signed char)0] [i_1]))));
                    var_18 = ((/* implicit */short) (unsigned short)6);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)1199))));
}
