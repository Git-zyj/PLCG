/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79468
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) (signed char)116))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) (~(min(((-(((/* implicit */int) (signed char)0)))), (((((/* implicit */int) arr_4 [i_2])) - (((/* implicit */int) (unsigned short)65526))))))));
                            arr_10 [i_0 - 1] [i_1] [i_2 + 1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1]))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) var_1)) : (-981898230))), (((/* implicit */int) var_16))))) : (9920167259677180397ULL)));
                            arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((arr_7 [i_2] [i_1] [i_2]) + (((/* implicit */long long int) ((3695629485U) - (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned long long int) (+(981898216)));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            {
                arr_19 [i_4] [i_4] &= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (arr_13 [i_5])))) ? (var_14) : (((/* implicit */unsigned long long int) max((arr_14 [i_5]), (((/* implicit */long long int) arr_5 [i_5] [i_5] [i_4] [i_5]))))))));
                arr_20 [i_4] [i_4] [i_5] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) min((((/* implicit */short) arr_16 [i_4])), (arr_6 [i_4] [i_4] [i_5] [i_5])))) : (((/* implicit */int) ((unsigned short) (unsigned short)27))));
                arr_21 [i_5] [i_4] [i_4] |= ((/* implicit */unsigned short) arr_6 [i_4] [i_5] [i_5] [i_4]);
                var_21 = ((/* implicit */short) ((unsigned int) var_10));
            }
        } 
    } 
}
