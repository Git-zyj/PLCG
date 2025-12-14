/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88696
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_15 -= ((/* implicit */unsigned short) var_13);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [8ULL] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))))) | ((~(((/* implicit */int) arr_1 [i_0 + 2] [i_0]))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 2] [i_0]))))) ? (max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0])))))) : ((-(((/* implicit */int) var_14))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_17 [i_2] [i_1] [i_2] = ((/* implicit */signed char) 16383);
                                var_17 = ((((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) == (((((/* implicit */int) arr_10 [i_2] [i_1 + 3] [i_3])) / (((/* implicit */int) arr_10 [i_2] [i_1 + 1] [i_4])))));
                                var_18 = ((/* implicit */unsigned char) arr_14 [i_1] [i_2] [i_3] [i_1] [i_5]);
                            }
                        } 
                    } 
                } 
                var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((-9223372036854775804LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) ? ((-(((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1])))) : (((/* implicit */int) ((arr_12 [i_2 + 2] [i_2] [i_1 + 3] [14U] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 2] [i_1]))))))));
            }
        } 
    } 
}
