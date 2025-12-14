/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83108
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
    var_15 = var_5;
    var_16 = ((/* implicit */short) var_13);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4 - 1] [i_0] [i_2] [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-14629))));
                                var_17 -= ((unsigned long long int) (unsigned short)20107);
                                var_18 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_3 [i_0 - 3])) >> (((((/* implicit */int) arr_3 [i_0 - 2])) - (23)))))));
                                var_19 = ((/* implicit */short) (signed char)-121);
                                var_20 = ((((/* implicit */_Bool) 1837715893U)) ? (1837715883U) : (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_5 [i_1] [i_2] [i_3] [i_0])) - (((/* implicit */int) (short)-15878))))))));
                            }
                        } 
                    } 
                    var_21 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)8042)) : (((/* implicit */int) (short)16576))))) ^ (max((((/* implicit */unsigned int) (unsigned short)65515)), (((((/* implicit */_Bool) 1837715883U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (94675412U))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_2] [(signed char)6] [i_5] [i_6] [i_0] = ((/* implicit */signed char) arr_10 [i_0]);
                                arr_20 [(short)18] [i_0] [i_2] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2100064087)) || (((/* implicit */_Bool) min(((+(2ULL))), (((/* implicit */unsigned long long int) (unsigned short)21550)))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 2457251412U))));
                                arr_21 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (short)-15901);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
