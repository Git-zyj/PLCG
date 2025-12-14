/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62155
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
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_7 [i_2] [13LL] [i_2] = ((/* implicit */signed char) var_9);
                    var_10 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0 - 2])) == (((/* implicit */int) ((unsigned short) var_0)))))), (((unsigned int) var_5)))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                var_12 |= ((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                                arr_18 [i_5] [i_3] [i_3] [i_3] [i_0 - 1] = arr_15 [i_0 - 1] [i_0 + 1];
                            }
                            for (int i_6 = 2; i_6 < 19; i_6 += 2) 
                            {
                                arr_23 [i_0] [i_1] [i_1] [i_3] [(short)10] [i_6] [i_6 - 2] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-24979)))) & (max((arr_10 [i_0 + 1] [i_6 - 2] [i_6] [i_6]), (arr_10 [i_0 - 1] [i_0 - 1] [i_4] [8LL])))));
                                arr_24 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)25002), ((short)18059))))) ^ (var_1)));
                            }
                            arr_25 [i_0] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_15 [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_9))))) : (var_5)))) % (var_0));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_7)))), (max((((/* implicit */unsigned long long int) var_8)), (var_1))))))))));
    var_15 = ((/* implicit */signed char) var_5);
}
