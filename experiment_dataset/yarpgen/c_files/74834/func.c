/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74834
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
    var_13 = ((/* implicit */signed char) var_2);
    var_14 = ((/* implicit */_Bool) min((min((((/* implicit */int) var_5)), ((-(var_3))))), (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) arr_3 [i_0] [(unsigned char)10] [14U]);
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_2 [i_2] [i_1]))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (+(arr_4 [i_0] [i_0] [i_0]))))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) arr_7 [i_6] [i_5] [7] [i_0]);
                                arr_18 [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) 4027905183951961281LL);
                                var_19 = ((/* implicit */unsigned short) arr_17 [i_0] [i_5] [i_4] [i_5] [i_5] [i_5]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
