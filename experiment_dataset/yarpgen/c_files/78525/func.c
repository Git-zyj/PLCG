/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78525
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
    var_11 = ((/* implicit */unsigned char) var_10);
    var_12 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_1))) & (((/* implicit */int) ((arr_2 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)3]))) != (arr_2 [i_0]))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((arr_4 [i_0 + 2] [i_0 - 2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(unsigned short)1] [i_0 + 2] [i_2])))));
                    var_13 = ((/* implicit */_Bool) arr_9 [i_2 - 1] [i_0 - 3] [i_0 + 2]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) arr_6 [i_1] [i_4]);
                                var_15 -= ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
}
