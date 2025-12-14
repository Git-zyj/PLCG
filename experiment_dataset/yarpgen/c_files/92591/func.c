/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92591
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
    var_10 = ((/* implicit */unsigned short) (unsigned char)0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-770106541) | (((/* implicit */int) var_2))))) ? (min((arr_3 [i_0] [0ULL]), (6U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned char)13])) + (2147483647))) >> (((var_4) - (2060798392U))))))))), (15876547788370753804ULL)));
                    var_12 &= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) + (((int) var_4))))) : (((long long int) (!(((/* implicit */_Bool) var_0)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) var_8);
                                arr_14 [(short)6] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [(unsigned short)8])) - (13302))))) ^ ((-(((((/* implicit */int) (signed char)-32)) + (((/* implicit */int) (signed char)31))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (signed char)31)), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (((arr_13 [i_0] [i_4] [i_2 + 3] [(signed char)3] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_3] [i_2 - 2] [i_1] [i_1] [i_0])))))))));
                                var_14 ^= ((/* implicit */unsigned char) (unsigned short)65516);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (signed char)-32))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((arr_12 [(signed char)0] [i_1] [i_1] [i_1] [i_0] [i_2] [0ULL]) & (318414590U)))));
                }
            } 
        } 
    } 
}
