/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92637
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
    var_10 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((short) var_5))) : (((((/* implicit */int) min((var_8), (var_3)))) - (((/* implicit */int) max(((short)2212), (((/* implicit */short) (unsigned char)0)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */unsigned char) (-(((int) arr_1 [i_0 + 1]))));
                            var_11 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1]))));
                        }
                    } 
                } 
                var_12 = (i_0 % 2 == zero) ? (((((((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) + (2147483647))) << ((((((~(((/* implicit */int) max((((/* implicit */short) arr_7 [i_0] [i_0] [i_1 + 1])), (arr_11 [i_0] [(unsigned char)15] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))))) + (9))) - (7))))) : (((((((((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) - (2147483647))) + (2147483647))) << ((((((~(((/* implicit */int) max((((/* implicit */short) arr_7 [i_0] [i_0] [i_1 + 1])), (arr_11 [i_0] [(unsigned char)15] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))))) + (9))) - (7)))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1 + 2])) < (min(((~(arr_10 [(unsigned char)8] [(unsigned short)16] [(unsigned short)16] [2ULL]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [(_Bool)1] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned char)0] [(_Bool)1] [(unsigned char)0]))) : (arr_5 [0LL] [i_1 + 1] [i_1] [i_1])))))))))));
                var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_1 - 1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_1);
}
