/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89061
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
    var_13 = min((var_2), (((/* implicit */unsigned long long int) ((var_3) > (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-27339)))))))));
    var_14 = max((((/* implicit */long long int) (signed char)5)), (22LL));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-25), (((/* implicit */int) (short)27318))))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) var_11))));
                var_15 = ((/* implicit */unsigned long long int) max((min((arr_2 [i_0] [i_1] [i_1]), (((/* implicit */long long int) var_4)))), (((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0] [i_1] [i_1]) : (arr_2 [i_0] [i_1] [i_0])))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL))));
                        arr_14 [i_0] [i_2] [i_0] [i_3] [i_0] [i_0] = ((((/* implicit */int) ((arr_12 [i_2] [i_2] [i_2]) <= (((/* implicit */long long int) ((unsigned int) var_3)))))) << (((((arr_10 [i_1]) ^ (((/* implicit */unsigned int) var_12)))) - (608397084U))));
                    }
                    var_16 *= min((((/* implicit */unsigned int) ((var_10) != (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0]))))), ((+(2001923430U))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_19 [i_4] [i_5] [i_1] [i_1] = ((/* implicit */short) min(((-(arr_15 [i_0] [i_0] [i_0] [i_0]))), (max(((+(13ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (var_12) : (((/* implicit */int) (unsigned char)14)))))))));
                            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-7634))));
                        }
                    } 
                } 
            }
        } 
    } 
}
