/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78650
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (~(3184319807U)));
                    var_13 = ((/* implicit */unsigned long long int) max((-1767063046), (((/* implicit */int) arr_1 [i_1]))));
                    var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (_Bool)1)))))) % (max((((/* implicit */unsigned int) (unsigned char)154)), (1U)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) arr_12 [i_4] [i_4] [i_4]))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_16 *= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)7))));
                            /* LoopSeq 1 */
                            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10LL])) ? (-2334172156948436656LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)101)) ? (-1767063040) : (-1))))))));
                                arr_20 [i_3] [i_4] [i_5] [i_6] [i_3] = ((/* implicit */unsigned short) min((4204452973631221400LL), (((/* implicit */long long int) (unsigned char)147))));
                                arr_21 [i_3] [i_3] [i_3] [i_3] [i_6 - 2] [i_7] = ((/* implicit */short) ((max((arr_5 [i_5 + 1] [i_6 - 1]), (arr_15 [i_5 + 1]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5 + 1] [i_6 + 3] [i_5 + 1])) || (((/* implicit */_Bool) arr_11 [i_5 + 1] [i_6 + 2] [i_6]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
