/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65996
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
    var_17 = ((/* implicit */short) var_15);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) arr_0 [i_0])) ? (min((arr_4 [i_0] [6LL]), (((/* implicit */unsigned long long int) -6881973891311672881LL)))) : (arr_4 [i_0] [i_1 - 2])))) ? ((~((((_Bool)0) ? (6881973891311672880LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-41))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [6LL] [i_3] [4LL] = ((/* implicit */long long int) ((unsigned long long int) (+(arr_7 [4]))));
                                var_19 *= var_11;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (signed char i_6 = 3; i_6 < 8; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) var_1);
                            var_21 = ((/* implicit */unsigned long long int) 2U);
                            var_22 = ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (-(((long long int) max((((/* implicit */long long int) var_10)), (var_4)))))))));
    var_24 = ((/* implicit */unsigned int) var_0);
}
