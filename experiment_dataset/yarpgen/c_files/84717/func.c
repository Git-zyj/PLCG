/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84717
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((min((-6217559278873544483LL), (((/* implicit */long long int) var_8)))) + (9223372036854775807LL))) >> (((/* implicit */int) arr_8 [i_2] [i_2 + 3] [i_2 - 1] [i_2 - 1]))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_15 ^= min((((/* implicit */int) (((-(var_6))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_2 + 2] [i_2 + 2] [i_2 - 2] [i_2 - 2] [i_3] [i_0])))))), ((~(((/* implicit */int) min((var_11), (var_8)))))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1])) * (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (arr_17 [i_0] [i_1] [i_2] [i_1] [i_4]))))))))))));
                                var_17 = ((/* implicit */int) ((short) arr_2 [i_4]));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) -6217559278873544483LL))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    var_19 &= (~(min((((/* implicit */long long int) (!(var_7)))), (-6217559278873544483LL))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                arr_36 [i_7] [i_7] [(unsigned char)4] [i_8] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_5))))))));
                                var_20 = ((/* implicit */long long int) min((((/* implicit */int) var_8)), ((-(((/* implicit */int) arr_32 [i_5]))))));
                                arr_37 [i_7] = ((/* implicit */signed char) arr_31 [i_5] [i_7] [i_6] [i_7] [i_8] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
