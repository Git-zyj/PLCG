/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74969
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
    var_13 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (var_6)))), (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    var_14 = ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_9);
        var_15 &= ((/* implicit */_Bool) var_4);
        var_16 ^= ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_17 *= ((/* implicit */unsigned short) ((3ULL) & (((/* implicit */unsigned long long int) ((arr_4 [i_1 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [2U] [2U]))))))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((1260606935U) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_1 + 1] [i_1 + 3] [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (arr_4 [i_1]))))));
            arr_10 [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)64755)) * (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_3 [i_1])) >> (((((/* implicit */int) var_1)) - (15816))))) : (((/* implicit */int) arr_7 [i_1]))))))) : (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)64755)) * (((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */int) arr_3 [i_1])) + (2147483647))) >> (((((/* implicit */int) var_1)) - (15816))))) : (((/* implicit */int) arr_7 [i_1])))))));
        }
        for (int i_3 = 2; i_3 < 24; i_3 += 2) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_11 [i_1] [i_3 - 2] [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)64755)) : (((/* implicit */int) (short)1539))))))) ? (arr_12 [i_1]) : (((/* implicit */long long int) (~(arr_5 [i_1 + 2]))))));
            arr_14 [i_1] [i_1] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)780)))))) ? (((/* implicit */int) ((arr_8 [i_3 + 1] [i_1 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) arr_13 [i_3] [i_3])))), (((/* implicit */int) ((unsigned short) 1290542492)))));
            var_20 = ((/* implicit */signed char) var_9);
            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-251153002) + (2147483647))) >> (((var_8) + (8378760449038741190LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (949493587608543999ULL)))) ? (((((/* implicit */_Bool) 7417023750515060472LL)) ? (((/* implicit */int) max((var_10), (var_1)))) : (((var_12) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [(unsigned char)1])))))) : (((((/* implicit */int) arr_3 [i_3])) ^ (((((/* implicit */int) arr_7 [22U])) / (((/* implicit */int) (unsigned short)780))))))));
            arr_15 [i_1] = ((signed char) 1290542492);
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) arr_4 [i_4 + 1]);
            arr_18 [i_1] = ((/* implicit */unsigned short) arr_13 [i_1 + 2] [i_4]);
        }
        arr_19 [i_1] [8ULL] = ((/* implicit */signed char) ((unsigned int) arr_6 [i_1] [i_1]));
    }
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((var_0) + (var_0))), (((/* implicit */unsigned long long int) var_12))))) ? (max((var_0), (((/* implicit */unsigned long long int) 127064851U)))) : (max((((/* implicit */unsigned long long int) ((_Bool) (unsigned short)33997))), (var_9))))))));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_12))));
}
