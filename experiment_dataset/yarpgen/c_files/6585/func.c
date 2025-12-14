/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6585
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
    var_20 = ((/* implicit */unsigned short) (((((-(var_16))) == (((/* implicit */int) min((var_2), (((/* implicit */short) var_8))))))) ? (((((/* implicit */long long int) ((var_13) ? (var_6) : (((/* implicit */int) var_13))))) & ((-(var_11))))) : (((/* implicit */long long int) min((((int) var_9)), ((-(var_14))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((((/* implicit */int) arr_0 [(signed char)11])) << (((((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_0])))) - (110)))))));
                arr_7 [12] [i_1] [(signed char)15] = ((/* implicit */short) (~(arr_2 [i_0] [i_1])));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_5 [0ULL] [0ULL])), (max((arr_12 [i_1] [i_1] [7U] [i_3]), (arr_12 [i_0] [i_1] [i_2] [i_3]))))))));
                            arr_16 [i_1] [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (+(((/* implicit */int) arr_3 [i_1] [i_1]))))))));
                            arr_17 [i_1] [(_Bool)1] [2] = ((/* implicit */int) (-(((unsigned long long int) arr_3 [16LL] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
