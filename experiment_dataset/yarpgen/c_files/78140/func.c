/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78140
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
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) == (var_1)));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) arr_0 [9]);
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) min((-8892756790392672811LL), (((/* implicit */long long int) arr_10 [0U]))))))))));
                                arr_15 [i_3] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) 4582103534410123490LL);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [(short)2])) ? (((/* implicit */int) ((arr_4 [i_1 + 2] [i_1 + 2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1])))))) : (((/* implicit */int) ((unsigned char) (signed char)56)))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
                {
                    arr_18 [i_1] = ((/* implicit */signed char) (-((~(arr_7 [i_1 + 2] [i_1] [i_1 + 1])))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) == (arr_4 [i_0] [i_1]))))))) == (arr_10 [(_Bool)1])));
                }
            }
        } 
    } 
}
