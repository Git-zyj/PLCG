/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57333
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)6] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)27142)))))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (16383ULL)))) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (unsigned char)30))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_11 -= ((/* implicit */short) (((-(((/* implicit */int) arr_5 [i_1] [i_2])))) - (((/* implicit */int) arr_5 [i_0] [i_2]))));
                                arr_14 [i_1] [i_0] [i_4] = ((/* implicit */_Bool) var_5);
                                arr_15 [i_2] [i_0] = ((signed char) ((unsigned char) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_1)))));
                                arr_16 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)43363);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161))) % (18446744073709551615ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) && (((/* implicit */_Bool) ((signed char) (signed char)-121)))))))));
    var_13 = ((/* implicit */short) (((~(min((var_9), (((/* implicit */unsigned long long int) var_2)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) <= (var_8))))))))));
}
