/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90543
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
    var_17 += (((+(((((/* implicit */_Bool) 18100179561642814120ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (346564512066737495ULL))))) > (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 18100179561642814120ULL)) ? (var_3) : (var_3))), (((/* implicit */unsigned int) (short)12604))))));
    var_18 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((int) ((unsigned char) arr_3 [i_1] [i_3])));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((signed char) arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [(signed char)16] [i_3])) ? (((/* implicit */int) var_7)) : (-342360989)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((long long int) var_13)) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned char) arr_5 [i_6] [i_5] [i_4] [i_6]);
                                arr_18 [i_6] [i_6 - 2] [i_6] [i_6] [i_6] [i_1] [17LL] = ((/* implicit */unsigned long long int) ((int) ((signed char) -719554164)));
                            }
                        } 
                    } 
                } 
                arr_19 [i_1] = ((long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_0] [i_0])) : (arr_6 [i_0] [i_1] [i_1] [i_1])));
            }
        } 
    } 
}
