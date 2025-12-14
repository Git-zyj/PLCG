/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79934
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
    var_18 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_19 = arr_3 [i_0] [i_0];
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)72))))));
                        arr_13 [i_0] [i_3] [i_2] [i_0 - 1] [i_0 - 1] [i_0] = min((((/* implicit */short) arr_0 [i_0])), ((short)-30388));
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) var_15);
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 23; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) var_0)), (arr_11 [i_0 - 2] [i_4] [i_6] [i_6 - 2] [i_6 - 1])))) + ((+(((/* implicit */int) arr_5 [i_0]))))));
                                var_23 -= ((/* implicit */signed char) min((max((var_17), (((/* implicit */short) arr_2 [i_0] [i_0])))), (arr_21 [i_0] [i_0] [i_0] [i_0] [i_5])));
                                arr_24 [i_0 - 1] [i_4] [i_5] [i_0] [i_7] = ((/* implicit */unsigned short) max((var_4), (((/* implicit */short) max((arr_18 [i_5] [i_6 - 1] [i_6] [i_7]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
