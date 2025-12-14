/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98149
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
    var_20 = ((/* implicit */unsigned long long int) var_16);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (5863546939161060787ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15786)))))) ? (((/* implicit */int) (unsigned short)15803)) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) min((var_1), (((/* implicit */int) (unsigned short)49750)))))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (unsigned short)49747);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) (~((~(arr_10 [i_0] [i_1] [i_0] [i_1])))));
            }
        } 
    } 
}
