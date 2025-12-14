/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95436
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
    var_12 = ((unsigned char) ((((/* implicit */long long int) (-(var_1)))) % (var_10)));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (short)15872)))))) ? (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (short)-15872)))))) : (((((/* implicit */_Bool) (short)-15872)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)15872))))))));
    var_14 = ((/* implicit */unsigned int) var_9);
    var_15 = (~(min((1537858876U), (var_3))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 = var_7;
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_1] [i_2])) ? (arr_4 [i_2 - 2] [i_2 - 2] [i_2 + 1]) : (arr_4 [i_2 - 1] [17U] [i_2 - 1])));
                    arr_7 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)176))));
                                arr_12 [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)138));
                                arr_13 [i_2] [i_4] |= arr_0 [i_4];
                                arr_14 [i_3] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */int) ((_Bool) ((int) (unsigned char)132)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) ((((var_0) ? (4126966952U) : (4126966977U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 2])))));
                }
            }
        } 
    } 
}
