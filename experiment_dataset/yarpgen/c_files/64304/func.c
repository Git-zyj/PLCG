/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64304
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
    var_20 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    var_21 |= ((/* implicit */unsigned int) var_3);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) var_14);
                                arr_13 [10] [i_3] [i_2] |= ((/* implicit */_Bool) var_15);
                                var_23 = ((/* implicit */unsigned char) (signed char)-121);
                                var_24 = ((/* implicit */int) var_3);
                                var_25 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_0]);
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_2] [i_2] [(unsigned short)4] = ((/* implicit */short) min((2147483647), (arr_3 [i_0] [(_Bool)1] [(signed char)12])));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [(signed char)8] [i_0] &= var_3;
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((arr_18 [i_0] [i_0] [i_1] [2] [2] [i_5 - 2] [i_6]) != (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) || (((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)44))))))))))));
                                var_27 += ((/* implicit */_Bool) (-2147483647 - 1));
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)8] [10LL] [i_0])) ? (((/* implicit */unsigned int) 2147483647)) : (arr_5 [i_0] [i_1] [i_0])))) ? ((~(2147483647))) : (((/* implicit */int) max((var_19), (((4294967295U) <= (((/* implicit */unsigned int) 2147483647)))))))));
                }
            } 
        } 
    } 
}
