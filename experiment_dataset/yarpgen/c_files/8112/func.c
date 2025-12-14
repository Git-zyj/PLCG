/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8112
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
    var_15 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_9)) / (-868698799))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_6)) : (1834130147)))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */int) var_14))))), (var_4)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (~(arr_6 [i_1] [i_1] [i_0 - 1])));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_1] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0] [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (min((arr_0 [i_0 + 1]), (min((var_0), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2])))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) -2147483647)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_3] [i_2])) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) var_13)) : (2081948840U)))));
                        var_19 ^= ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [i_2] [i_3])) ? (arr_11 [i_0]) : ((+(((/* implicit */int) var_3)))))) + (2147483647))) >> (((min((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])), (var_13))) + (143)))));
                    }
                    for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */int) (unsigned char)46);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15883094918909476284ULL)) ? (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_7 [i_0 - 1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 2147483647)))) : (arr_6 [i_0] [i_1] [9U]))) : (min((arr_6 [i_4 - 2] [i_2] [i_0 + 1]), (((/* implicit */unsigned long long int) (~(95229604))))))));
                        var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -95229604)) * (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))) : (var_10)))));
                    }
                    var_23 -= ((/* implicit */unsigned long long int) min((max((((/* implicit */int) arr_8 [i_0 - 1])), (arr_11 [i_0 - 1]))), (arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
                    var_24 = ((/* implicit */long long int) min((arr_1 [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) 2591791975U))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (int i_6 = 2; i_6 < 10; i_6 += 2) 
            {
                {
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) >= (var_5))))));
                    var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))) : (2563649154800075322ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_1 [i_5])))))));
                    arr_21 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned char)255))) ? ((~(((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned char)239)))))) : (((((/* implicit */_Bool) arr_4 [i_6 + 2] [i_5] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_6] [i_5] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_6 + 2] [i_5] [i_0]))))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1]))))) ? (((/* implicit */int) ((unsigned char) var_3))) : ((+(((/* implicit */int) (unsigned char)223))))))) - (max((arr_6 [i_0 + 1] [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))))));
        arr_22 [i_0] = ((/* implicit */unsigned char) ((((int) 1555305496)) <= (((/* implicit */int) arr_19 [i_0] [i_0] [i_0 + 1]))));
    }
    var_29 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) var_12))))))) & (min((((/* implicit */unsigned int) ((((-1555305482) + (2147483647))) >> (((2081948841U) - (2081948815U)))))), (max((1879910388U), (((/* implicit */unsigned int) var_14))))))));
    var_30 *= (((+((+(0U))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_4)))) ? (((((/* implicit */int) var_12)) % (((/* implicit */int) (unsigned char)16)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)16))))))));
}
