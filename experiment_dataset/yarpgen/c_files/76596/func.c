/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76596
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
    var_14 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (3458764513820540928LL)))) ? (3458764513820540928LL) : (((((/* implicit */_Bool) arr_2 [10U])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min(((unsigned short)51460), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((arr_5 [(short)9] [(unsigned char)5] [i_1]) ^ (((/* implicit */long long int) 2101684402U)))))))))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) ^ (arr_9 [i_0] [i_0 - 1] [i_0 - 1] [1U] [i_2 - 3] [i_2 + 1])));
                            arr_10 [i_3] [4LL] [i_1] [i_1] [i_1] [3] = ((/* implicit */short) arr_3 [i_1] [i_1]);
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned char) var_5);
                var_18 += ((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
            }
        } 
    } 
}
