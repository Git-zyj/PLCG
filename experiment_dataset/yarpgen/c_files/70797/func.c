/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70797
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
    var_11 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6))))), (var_6)));
    var_12 = ((/* implicit */signed char) ((long long int) min((var_0), (var_3))));
    var_13 &= ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (var_2)))) : (((/* implicit */int) var_0)))) == ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((((((((/* implicit */int) arr_5 [i_0] [i_1])) * (((/* implicit */int) var_10)))) >= (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) : (((max((var_8), (((/* implicit */unsigned int) arr_2 [i_0])))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4))))))));
                                var_16 = ((/* implicit */int) var_0);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_6) : (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_11 [i_0] [i_1] [15] [i_5] [i_5] [i_6]))))) : (var_8))) / (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), ((-(arr_12 [i_0] [i_0] [i_0] [13U] [i_0]))))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_6] [i_6] [i_6 - 2] [i_6] [i_6 + 1] [(short)10])) : (((/* implicit */int) arr_11 [i_6] [i_6] [i_6 + 2] [i_6] [i_6 + 2] [i_6 + 2]))))) & ((~(var_7)))));
                            var_19 = (-(((((/* implicit */_Bool) ((arr_12 [i_0] [i_1] [i_5] [i_6] [i_6]) / (((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_7))) : (((/* implicit */unsigned long long int) var_6)))));
                            var_20 ^= ((/* implicit */unsigned long long int) max(((~(arr_8 [i_5] [i_5] [i_5 + 1]))), (((/* implicit */int) ((arr_8 [7LL] [7LL] [i_5 - 1]) == (arr_8 [(_Bool)1] [i_5] [i_5 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
