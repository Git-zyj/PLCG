/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65081
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
    var_13 |= ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned short) (+(var_12)));
                                var_15 &= ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_0] [i_3] [i_4] [i_4])))) * (((/* implicit */int) arr_4 [i_0] [(short)16]))));
                                arr_15 [i_0] [i_0 + 2] [(unsigned short)13] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)30269)) == (((/* implicit */int) var_9))))) == (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_12))))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0 + 4] = min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 3] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4294967283U)))), ((~(var_3))))));
                arr_17 [(signed char)14] [i_0 + 4] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_1)), ((short)-24759)))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_5)))) : (((/* implicit */int) ((short) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
        {
            {
                var_16 -= ((/* implicit */_Bool) (((-(arr_5 [i_5] [i_5] [i_5]))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967283U)) >= (arr_5 [i_5] [i_5] [i_6 + 2]))))));
                var_17 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((short)31397), (((/* implicit */short) arr_10 [i_5] [i_5])))))) < ((+(var_12)))))) >> (max((-9029140827536072097LL), (((/* implicit */long long int) (_Bool)1))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (((~(((/* implicit */int) min((((/* implicit */short) var_1)), (var_11)))))) / (((/* implicit */int) var_11)))))));
    var_19 = ((/* implicit */unsigned short) var_12);
}
