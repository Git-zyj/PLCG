/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88133
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
    var_13 = (-(3888554230344858537LL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_2))));
                var_15 = ((/* implicit */signed char) arr_3 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 23; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                            var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) + (arr_6 [i_4]))))) ? (((/* implicit */int) ((3888554230344858551LL) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 3888554230344858537LL))))))) : (((((/* implicit */_Bool) arr_14 [i_5] [i_4 + 1] [i_4] [i_4])) ? (arr_14 [i_4 + 2] [i_4 + 2] [i_3] [i_2]) : (arr_8 [i_4 + 1] [i_4] [i_4])))));
                            var_17 = var_6;
                        }
                    } 
                } 
                arr_20 [i_2] |= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
