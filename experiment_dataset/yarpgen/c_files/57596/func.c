/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57596
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
    var_17 = ((/* implicit */unsigned short) var_2);
    var_18 = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_9))))) - (((/* implicit */unsigned long long int) (-((-(var_12))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((unsigned int) arr_4 [i_0 + 1]));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_1] [i_2] [i_3 - 2] [i_3] = ((/* implicit */unsigned short) arr_8 [i_0]);
                            var_20 = ((/* implicit */long long int) arr_6 [i_2] [i_3 - 2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_1] [1ULL] [(unsigned short)0] [i_0] = ((/* implicit */int) (~((((-(arr_2 [i_0] [6ULL]))) << ((((-(((/* implicit */int) (_Bool)1)))) + (47)))))));
                            var_21 = ((/* implicit */signed char) arr_1 [i_0 - 1]);
                            var_22 = ((/* implicit */long long int) ((((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_4] [i_4 - 3]))) / (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]))) << (((((/* implicit */int) arr_6 [(short)9] [i_4])) + (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_4] [2U] [(_Bool)0])))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_4 - 2] [i_4 + 1])) || (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [9ULL]))))))));
                            arr_19 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_17 [i_5] [i_5] [i_4] [i_1] [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((unsigned long long int) var_12)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
}
