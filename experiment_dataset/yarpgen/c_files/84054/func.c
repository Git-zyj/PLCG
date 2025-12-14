/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84054
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
    var_18 = ((/* implicit */unsigned char) var_11);
    var_19 = ((/* implicit */int) (unsigned short)39467);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) arr_1 [i_2 + 1]);
                    var_21 = ((arr_7 [i_0] [i_0]) | (max((arr_8 [i_2 - 2] [5LL] [i_0]), (arr_8 [i_2 - 2] [i_1] [i_2]))));
                    arr_9 [(unsigned short)10] &= ((/* implicit */unsigned char) var_15);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_2] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_2] [i_4]);
                                var_22 = ((/* implicit */unsigned int) (!((_Bool)1)));
                                var_23 = ((/* implicit */_Bool) (unsigned short)26068);
                                var_24 = ((/* implicit */signed char) (-(((unsigned int) arr_5 [i_4] [i_2] [i_2]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        arr_17 [i_2] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) arr_4 [i_0] [i_1]);
                        var_25 += ((/* implicit */unsigned char) ((short) arr_1 [i_1]));
                        var_26 |= ((/* implicit */long long int) arr_1 [i_0]);
                        arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_13))) - (var_10)));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_10);
}
