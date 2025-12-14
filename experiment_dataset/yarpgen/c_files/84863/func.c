/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84863
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */int) arr_7 [i_3]);
                        arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_2] [1LL] [i_3] = ((/* implicit */unsigned char) min(((~(arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_2]))), ((-(arr_8 [i_0] [i_1 - 1] [(unsigned char)4] [i_2])))));
                        var_15 = ((/* implicit */int) max((var_15), ((~(((/* implicit */int) arr_3 [i_2] [i_3]))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_19 [i_0] [i_1] [(signed char)2] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)3183)), ((~((~(7338206215555390010ULL)))))));
                        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_1 - 1] [i_2] [i_4] [i_4]))));
                    }
                    arr_20 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) max((arr_16 [i_0] [i_0] [i_0] [i_2]), (max((((/* implicit */int) (unsigned short)65535)), (413382117)))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 14U))))), ((~(arr_15 [i_2] [i_2] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) var_7);
    var_18 *= ((/* implicit */signed char) min((var_11), (var_11)));
}
