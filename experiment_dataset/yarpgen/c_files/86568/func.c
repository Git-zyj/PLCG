/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86568
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
    var_10 = ((/* implicit */long long int) ((int) (+(min((var_3), (((/* implicit */int) var_2)))))));
    var_11 = ((/* implicit */unsigned int) ((var_8) > (((8539203302130248893LL) | (((/* implicit */long long int) ((/* implicit */int) ((short) var_7))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (~(max((8539203302130248873LL), (((/* implicit */long long int) ((((/* implicit */int) (signed char)31)) / (((/* implicit */int) (signed char)70)))))))));
        var_12 += ((/* implicit */short) ((unsigned short) ((unsigned short) 8539203302130248893LL)));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) > (min((((/* implicit */long long int) (unsigned short)34961)), (8539203302130248919LL)))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((long long int) min(((unsigned char)2), ((unsigned char)7))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) 8539203302130248893LL))))) : (min(((~(((/* implicit */int) (unsigned char)199)))), (((/* implicit */int) arr_2 [i_1])))))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            for (signed char i_3 = 3; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_13 [i_3 + 1] [i_3 + 1] [i_3 - 2] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)85)), (var_5))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (short i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */_Bool) (-(min((((/* implicit */int) (signed char)70)), (var_3)))));
                                arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) min((min((((/* implicit */long long int) (signed char)1)), (8539203302130248904LL))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned char)23)) ? (var_1) : (arr_9 [i_1] [i_2 - 1] [i_1])))))));
                                var_15 ^= (+(17LL));
                                arr_19 [i_3 - 3] [i_3 - 3] [i_3 - 3] [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) min((44LL), (((/* implicit */long long int) 0))))) && (((/* implicit */_Bool) 17LL))))), (((((/* implicit */_Bool) min((var_7), (var_1)))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) -8539203302130248904LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)34840))))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_1] [3LL] = min((var_7), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)55))))));
                    arr_21 [i_1] [i_2 - 1] [i_3 - 2] = ((/* implicit */short) max(((((~(16LL))) * (((/* implicit */long long int) ((/* implicit */int) ((-8539203302130248904LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 6295722656569336297LL)) ? (((/* implicit */int) (unsigned short)63679)) : (((/* implicit */int) (short)-24277)))) - (((/* implicit */int) (unsigned short)1)))))));
                }
            } 
        } 
    }
}
