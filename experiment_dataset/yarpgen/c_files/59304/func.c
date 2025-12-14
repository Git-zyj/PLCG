/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59304
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_1] &= max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))), (arr_1 [i_0]));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_16 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (+(-9223372036854775784LL)))) ? (var_0) : (((/* implicit */unsigned long long int) (-(var_5)))))));
                            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3 + 2] [i_2 + 1])) ? (arr_5 [i_1] [i_3 + 3] [i_2 - 1]) : (arr_5 [i_1] [i_3 - 4] [i_2 + 2])))) ? (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))) : (18446744073709551596ULL))) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_3 - 1] [i_2 + 2]))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_3] [i_2] = ((/* implicit */int) arr_4 [i_0] [i_0]);
                            arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (unsigned short)36717);
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
        {
            {
                arr_21 [i_4] [i_5] [i_5] = ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_4] [i_5 + 3])) ? (arr_20 [i_4] [i_5 + 3]) : (arr_20 [i_5] [i_5 + 3])));
                arr_22 [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) arr_15 [i_4])))));
            }
        } 
    } 
}
