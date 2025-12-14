/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77519
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
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(9223372036854775807LL)))))))));
    var_21 += (-((+((+(var_10))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) arr_4 [i_1] [i_1])))))))));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) (+((~(1305553779306361027LL)))));
                    var_23 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)27998))));
                    arr_9 [i_0] [20] [11] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-22197)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_4] [(signed char)10] [i_1] [(signed char)10] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))))));
                                arr_15 [i_4] [i_2 + 3] [i_2 + 3] [21U] [i_4] = ((/* implicit */long long int) (-((~((~(var_10)))))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-22197))))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    arr_20 [i_5] = ((/* implicit */short) (+((-((-(var_10)))))));
                    var_25 += ((/* implicit */short) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)232)))))))));
                }
                arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(9223372036854775807LL)))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
}
