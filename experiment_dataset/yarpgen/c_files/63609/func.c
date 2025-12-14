/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63609
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1]))));
            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
        }
        var_14 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    }
    var_15 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
        {
            for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_20 [i_6] [i_5] [i_4 + 3] [i_3] [i_2] [i_6] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (_Bool)1))))));
                                var_17 = (~((~(arr_8 [i_2] [i_3 - 1]))));
                                var_18 = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (~((~(var_9)))));
                                arr_27 [i_8] [i_8] [i_4] [i_8] [i_2] = ((/* implicit */unsigned char) (+((+(arr_18 [i_8 - 1] [i_8 - 1] [i_7 + 2] [i_7 + 2] [i_4])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (_Bool)1))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~((-(((/* implicit */int) arr_14 [i_2] [i_3] [i_4] [i_3 - 2])))))))));
                }
            } 
        } 
    } 
}
