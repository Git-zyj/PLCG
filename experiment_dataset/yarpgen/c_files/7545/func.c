/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7545
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-14))))));
                var_17 = ((/* implicit */short) (~((~(arr_2 [i_1])))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) | (arr_9 [i_4 + 2]))))));
                                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)35511))))))));
                                arr_16 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)23080)) : (((/* implicit */int) arr_8 [i_4 - 1] [i_1] [i_1])))) : (-1908993469)));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_1])))) && (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(var_0)))) : (var_1)));
}
