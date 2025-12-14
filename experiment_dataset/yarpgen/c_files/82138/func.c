/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82138
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
    var_18 = ((((/* implicit */_Bool) 8692376333607327353LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15279))) : (5992803213008877290LL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */int) ((short) ((arr_1 [i_0]) < (arr_1 [i_1]))))) == ((-(885969277)))));
                var_20 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_2 [i_0] [i_1]))));
                            var_22 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) ((var_14) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
