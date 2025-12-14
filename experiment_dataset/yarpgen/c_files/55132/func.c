/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55132
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (-9223372036854775807LL - 1LL)))) ? (((((/* implicit */_Bool) ((9223372036854775781LL) >> (((((/* implicit */int) (short)1972)) - (1950)))))) ? (((/* implicit */int) min(((short)-1958), ((short)-1958)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)1948), (var_5)))))))));
                arr_8 [14ULL] = ((/* implicit */unsigned long long int) ((long long int) (short)-1973));
                arr_9 [i_1] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)1957)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)511))))), (arr_2 [i_0])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1972))) : (var_4)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2 + 2]))) : (var_4)))))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    var_13 += ((/* implicit */short) min((((((/* implicit */_Bool) (short)1942)) ? (((/* implicit */int) (short)-1972)) : (((/* implicit */int) (unsigned short)511)))), (((/* implicit */int) ((unsigned char) (short)1972)))));
                    arr_17 [i_2] [i_3] [i_2] [i_4] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)1972)) : (((/* implicit */int) (short)25882)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_4])))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (short)1971))))))));
        /* LoopSeq 2 */
        for (short i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            var_15 -= ((/* implicit */unsigned int) (short)19031);
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                arr_22 [i_6] [i_5 + 2] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (short)1970)) >> (((((((/* implicit */long long int) ((/* implicit */int) (short)19031))) | (-5988143596297474925LL))) + (5988143596297457985LL)))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-1957)) ? (((/* implicit */int) arr_12 [i_2 + 1])) : (((/* implicit */int) (unsigned short)11002)))) - (((/* implicit */int) ((unsigned short) arr_20 [i_2] [i_6])))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-1956)) : (((/* implicit */int) arr_15 [i_2 + 1] [i_5] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) min((5988143596297474928LL), (((/* implicit */long long int) var_9))))) : (((((/* implicit */_Bool) var_1)) ? (arr_13 [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 4096839905U))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_2] [i_2 + 1] [i_5 + 2] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_5] [i_6])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_2] [i_6])), ((unsigned char)125))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_5] [i_6])))) : (((((/* implicit */_Bool) min((5988143596297474925LL), (((/* implicit */long long int) var_1))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)15516)) >= (((/* implicit */int) var_9)))))))))))));
                arr_23 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 11761563022421475149ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3658969378U) >= (1540673754U))))) : (min((1916427300U), (((/* implicit */unsigned int) arr_6 [i_2 + 2] [(unsigned short)2] [(unsigned short)2])))))));
            }
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            arr_26 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_18 [i_2 - 1] [i_7 + 1]) : (arr_18 [i_2 - 1] [i_7 + 1])))) ? (33554432) : (((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_7 + 1]))));
            arr_27 [i_7] [i_2 - 1] [i_7 + 1] = ((/* implicit */_Bool) var_10);
            var_18 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_7 + 1])))));
            arr_28 [(unsigned char)14] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((arr_11 [i_7]), (((/* implicit */unsigned long long int) arr_25 [i_2] [i_7]))))))) ? (min((((/* implicit */int) arr_6 [i_2 + 2] [i_7 + 1] [i_7])), (((((/* implicit */int) (short)0)) - (((/* implicit */int) var_1)))))) : (((/* implicit */int) (unsigned char)126))));
        }
    }
    var_19 += ((/* implicit */signed char) (short)19031);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_3))));
}
