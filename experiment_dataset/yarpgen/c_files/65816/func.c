/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65816
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
    var_20 = ((/* implicit */_Bool) max(((+((+(((/* implicit */int) var_5)))))), (((/* implicit */int) var_5))));
    var_21 = ((short) max((((/* implicit */short) var_11)), (min((((/* implicit */short) (signed char)0)), ((short)-19524)))));
    var_22 = ((/* implicit */long long int) var_0);
    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)117))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_24 &= ((/* implicit */unsigned char) (~(((unsigned int) (short)30717))));
                        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))));
                    }
                    var_26 = ((/* implicit */signed char) (((~(((/* implicit */int) var_0)))) != (((arr_7 [i_0 + 2] [i_0 - 3] [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_7 [i_0 - 4] [i_0 + 3] [i_0 + 3] [i_0 + 2])) : (((/* implicit */int) arr_6 [i_0] [i_0 + 3] [i_0] [i_0 + 3]))))));
                }
                /* vectorizable */
                for (long long int i_4 = 4; i_4 < 12; i_4 += 2) 
                {
                    var_27 = ((/* implicit */short) arr_1 [i_1]);
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */short) ((arr_9 [i_0 - 2]) || (arr_9 [i_0 - 3])));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 3; i_5 < 13; i_5 += 2) 
                    {
                        arr_15 [i_5] [i_5] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) (short)30717))));
                        var_28 *= ((((/* implicit */_Bool) (short)-31517)) || (((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0 - 3] [i_0 - 3])));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))) | (arr_2 [i_0 + 2] [i_0 - 2])));
                        arr_16 [i_0] [i_0] [i_4] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_4 - 3] [i_5 - 2])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)178)))))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-112)) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_0] [i_1] [i_4 - 1])) + (79))) - (19)))))) == (((long long int) var_9)))))));
                    }
                }
                arr_17 [i_0] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)30)))) > ((~(((/* implicit */int) arr_9 [i_1]))))));
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) (-(var_10)));
            }
        } 
    } 
}
