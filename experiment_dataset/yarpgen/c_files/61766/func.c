/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61766
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1 + 2])) < (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))), ((!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((/* implicit */int) max((arr_1 [i_1 + 1] [i_1 + 1]), (arr_1 [i_1 + 1] [i_1])))), ((~(((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 1])))))))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_9))) ^ (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) (+(arr_4 [i_1 + 2] [i_1 + 1] [i_2 + 1])))))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1917349554)) ? (((/* implicit */int) (unsigned short)29852)) : (((/* implicit */int) (unsigned char)195)))) - (((((/* implicit */_Bool) (unsigned short)17719)) ? (((/* implicit */int) (unsigned short)62509)) : (((/* implicit */int) (short)337))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
    {
        for (short i_6 = 4; i_6 < 10; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            arr_22 [i_5] [i_6 - 4] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_12 [i_5])) < (((/* implicit */int) arr_12 [i_5])))))));
                            arr_23 [i_5] [i_6] [i_6] = ((/* implicit */signed char) (~((+(((/* implicit */int) ((short) arr_0 [i_5])))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) min((arr_15 [i_5 - 1] [i_5 - 1] [i_7]), (((/* implicit */int) arr_2 [i_5 - 1] [i_6 + 2] [i_6 + 3]))))))))));
                            var_21 += ((short) var_8);
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((((/* implicit */_Bool) -1917349575)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (unsigned char)141)))))))));
                        }
                    } 
                } 
                arr_24 [i_5] [i_5] = arr_5 [i_5] [i_5 - 1] [i_5];
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_9 = 4; i_9 < 20; i_9 += 4) 
    {
        arr_28 [i_9] = ((/* implicit */long long int) (+((+(arr_26 [i_9 - 4])))));
        arr_29 [i_9 - 1] = ((/* implicit */short) min((arr_27 [i_9]), (((/* implicit */long long int) (-(((unsigned int) arr_25 [i_9])))))));
    }
}
