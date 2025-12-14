/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81924
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
    var_11 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) max((var_3), ((unsigned short)51710)))) : (((((/* implicit */int) (unsigned short)13825)) * (((/* implicit */int) (signed char)-125))))))) - (((long long int) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (unsigned short)13833))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65515)) || (((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_0 + 3] [i_1 - 2]))) : (arr_0 [i_0] [i_1])));
                            var_12 = ((/* implicit */int) var_10);
                        }
                    } 
                } 
                var_13 &= ((/* implicit */signed char) ((((/* implicit */int) arr_7 [6] [i_1])) == ((~(var_8)))));
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13815))) : (7558490092625537753ULL))) : (((/* implicit */unsigned long long int) (~(-1200602122))))));
                arr_12 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_4 [i_0] [i_1 + 1] [20ULL]))))) + (((/* implicit */int) ((unsigned short) var_2))))), (((/* implicit */int) (short)0))));
            }
        } 
    } 
}
