/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64665
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))), (((long long int) arr_5 [i_1 + 2] [i_1 + 2]))));
                var_16 = ((/* implicit */unsigned short) (_Bool)0);
                arr_7 [i_0] = ((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((long long int) min((arr_13 [i_2] [i_2] [i_3]), (((/* implicit */short) (_Bool)0)))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) 0U))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) var_6))))));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_11 [i_5] [i_5 - 1]))) < (((/* implicit */int) ((min((((/* implicit */unsigned int) arr_10 [i_6])), (4294967284U))) >= (((16U) >> (((/* implicit */int) (_Bool)1)))))))));
                            arr_24 [i_4] [(unsigned short)4] [i_5] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((long long int) min((arr_21 [i_5 + 2] [i_5] [i_7 - 2] [i_5 + 2] [i_5]), (((/* implicit */long long int) (_Bool)1)))));
                            var_21 = ((/* implicit */long long int) arr_9 [i_4]);
                            var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_5 - 1])) || (((/* implicit */_Bool) arr_23 [(signed char)11] [i_5 + 1] [i_6] [i_6]))))), (max((((/* implicit */unsigned long long int) arr_23 [i_4] [i_5 + 2] [(unsigned short)0] [i_6])), (arr_11 [i_5 + 1] [i_5 + 1])))));
                        }
                    } 
                } 
                arr_25 [i_5] = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}
