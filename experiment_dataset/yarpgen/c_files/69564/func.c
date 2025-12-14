/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69564
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
    var_12 = min(((+((~(((/* implicit */int) var_9)))))), (min((((/* implicit */int) ((signed char) var_9))), (var_0))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_13 = min(((!(arr_7 [i_0] [i_0] [i_0] [i_0]))), ((_Bool)1));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_2))));
                                var_15 |= ((/* implicit */unsigned long long int) max((arr_4 [i_0 - 3] [i_1] [i_0 - 3]), (((/* implicit */int) (_Bool)1))));
                                var_16 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_3 [i_0 - 3] [i_0 - 3] [i_4])), (min((arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2 + 1] [i_2 + 1] [i_3] [i_0 - 2]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (-8992797728418873352LL))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)27175)), (((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (_Bool)1))))));
                    var_18 *= ((/* implicit */unsigned long long int) ((86541123500994818ULL) > (arr_12 [i_0] [i_0] [i_0])));
                }
            } 
        } 
    } 
}
