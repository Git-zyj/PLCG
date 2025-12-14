/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69672
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
    var_15 = (~(((/* implicit */int) var_12)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned char) ((arr_7 [i_0] [i_2 + 3] [i_2 - 2] [i_2 - 1]) | (arr_7 [11] [i_2 - 1] [i_2] [i_2 + 3])));
                    arr_9 [i_2] = ((/* implicit */_Bool) arr_4 [i_0]);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)255)))))));
                }
                for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    arr_12 [(unsigned char)18] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_11 [i_0] [i_3])))) || ((!((!(((/* implicit */_Bool) var_5)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 1540325567U)) ? (((/* implicit */int) (unsigned short)43210)) : (((/* implicit */int) (short)-13367)))));
                                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_3] [(unsigned short)17]))));
                                arr_20 [i_4] [i_1] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1340140601))));
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */int) (~(max(((-9223372036854775807LL - 1LL)), (var_6)))));
            }
        } 
    } 
}
