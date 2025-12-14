/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67598
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL)))))) ? (min((((((/* implicit */_Bool) 4160749568U)) ? (var_10) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))) : (max((max((var_10), (((/* implicit */unsigned long long int) (short)10057)))), (((/* implicit */unsigned long long int) (~(var_9))))))));
    var_13 |= ((/* implicit */_Bool) var_10);
    var_14 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))));
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((-1) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0] [i_1])) - (31))))) & (((((/* implicit */int) (short)-10047)) ^ (arr_0 [i_1])))))) && (((/* implicit */_Bool) -14))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_4]);
                                var_17 = ((((/* implicit */_Bool) arr_12 [i_0] [i_3 - 1] [i_2] [i_2] [i_1] [i_0])) ? (((((((/* implicit */_Bool) 2507979289549491034ULL)) ? (((/* implicit */int) (short)-10058)) : (((/* implicit */int) (unsigned short)55082)))) - (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_0] [i_4])))) : (((arr_4 [i_3 - 1] [i_4] [i_4]) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_4 [i_3 - 1] [i_4] [i_4])))));
                                var_18 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (unsigned char)51)) | (((/* implicit */int) (unsigned short)10441)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
