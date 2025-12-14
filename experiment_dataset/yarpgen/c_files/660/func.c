/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/660
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_1))));
                                var_13 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)22)) << (((/* implicit */int) (signed char)22)))), (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)22)))))) >> ((((~(((/* implicit */int) (signed char)14)))) + (35)))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) 8409598587265974765ULL);
}
