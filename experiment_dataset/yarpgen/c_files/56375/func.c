/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56375
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
    var_11 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0 + 2] [i_1] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) || (((/* implicit */_Bool) arr_2 [i_0 - 2]))))), ((-(max((((/* implicit */int) arr_0 [i_1 + 1])), (262143)))))));
                var_12 = ((/* implicit */unsigned long long int) ((max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) >= (((/* implicit */int) arr_4 [i_1] [i_1]))))) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                arr_12 [i_2] = (~((-(((((/* implicit */int) arr_7 [i_2])) % (((/* implicit */int) var_6)))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_18 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_2]))))) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_5])) : (((/* implicit */int) (_Bool)1))));
                            var_13 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)43)) < (((/* implicit */int) (short)-12429))))), (arr_0 [i_4]))));
                            var_14 = ((/* implicit */unsigned long long int) -993659089767244886LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned int) var_10);
    var_16 = ((/* implicit */unsigned short) var_3);
}
