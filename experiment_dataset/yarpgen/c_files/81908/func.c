/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81908
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 - 2]);
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) ((arr_0 [i_0 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (short)16383))));
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 - 2]))));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 11; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            {
                var_18 &= (((+(((/* implicit */int) arr_5 [i_1 - 1])))) + (((/* implicit */int) max(((short)-16621), (((/* implicit */short) arr_5 [i_1 - 1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_19 = (+(arr_9 [i_1 - 4]));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((/* implicit */unsigned int) -2054301290)) : (((((/* implicit */_Bool) (short)-19019)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19010))) : (var_3)))))) : ((~(arr_11 [i_1 - 4]))))))));
                        }
                    } 
                } 
                arr_16 [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 2] [i_1 - 2] [i_1])) ? (arr_6 [i_1 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19034)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16372)) ? (arr_10 [i_1 - 4] [i_1 - 4] [i_1 + 2] [i_1]) : (arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1])))) : (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 3] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1]))) : (12549503820434980234ULL)))));
            }
        } 
    } 
}
