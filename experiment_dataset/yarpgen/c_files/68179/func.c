/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68179
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
    var_11 = ((/* implicit */unsigned int) max(((short)20674), (((/* implicit */short) (signed char)64))));
    var_12 ^= ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max(((signed char)78), ((signed char)-50))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (-(max((arr_11 [i_0] [i_1 + 3] [i_3] [i_4 - 4] [i_1 + 3] [i_4]), (arr_11 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_4 - 4] [i_4] [i_4 - 1])))));
                                var_15 = ((/* implicit */unsigned int) var_3);
                                arr_14 [i_0] [(signed char)3] [i_2] = ((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0]), (((max((arr_12 [i_0] [i_0] [5ULL]), (var_3))) ? (arr_3 [i_3]) : (((((/* implicit */int) arr_4 [(unsigned char)9] [i_3])) % (arr_6 [i_0] [i_1 + 2] [i_0])))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) max((((((/* implicit */int) ((_Bool) arr_10 [(unsigned char)2] [5LL] [i_2] [i_2] [i_2]))) % (((((/* implicit */_Bool) 22U)) ? (arr_13 [i_0] [i_2]) : (((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_2]))));
                    arr_15 [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        var_17 ^= ((/* implicit */unsigned char) ((((137438953440LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) -22)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)42)))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_7))));
        var_19 = ((/* implicit */int) var_1);
        var_20 = ((/* implicit */_Bool) max(((+(((int) (_Bool)1)))), (((/* implicit */int) ((((arr_16 [17]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))))) > (arr_16 [i_5]))))));
    }
}
