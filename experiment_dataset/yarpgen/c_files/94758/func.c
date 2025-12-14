/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94758
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
    var_13 &= ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [24LL] [i_1])), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))))))) ? ((((+((-9223372036854775807LL - 1LL)))) | (max((((/* implicit */long long int) arr_1 [i_0])), ((-9223372036854775807LL - 1LL)))))) : (max((var_0), (var_2)))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [13LL] [14U]), (arr_4 [i_0] [(unsigned char)19]))))) : (((arr_5 [(_Bool)1] [(unsigned char)17]) & (9223372036854775787LL))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_2 = 2; i_2 < 24; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) (+(((var_4) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 2])))))));
        var_16 = (!(((/* implicit */_Bool) min((-9223372036854775779LL), (((/* implicit */long long int) ((unsigned char) arr_0 [(short)17])))))));
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_2 [i_3] [i_3])))), (((/* implicit */int) arr_7 [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (min((arr_8 [i_3]), (-1LL))) : (((-1LL) & (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((((((/* implicit */_Bool) arr_5 [i_3] [i_3])) && (var_7))) ? (var_0) : (((((/* implicit */_Bool) var_4)) ? (arr_9 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))))))));
        var_17 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) <= (arr_0 [i_3]))));
    }
    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_9 [i_4])) : (var_9))), (((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) : (var_9))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [16ULL])), (-9223372036854775796LL)))) - ((+(arr_0 [i_4])))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_8 [i_4 + 1]) % (((/* implicit */long long int) ((((/* implicit */_Bool) 3558689254510635808ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))))))))) ? (((/* implicit */int) arr_14 [i_4])) : ((+(((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_3 [8ULL] [i_4] [i_4 - 1])) : (((/* implicit */int) var_10))))))));
    }
    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 4) 
        {
            arr_24 [i_6] = ((/* implicit */int) max((((long long int) arr_15 [i_6])), (max((max((((/* implicit */long long int) arr_16 [i_6])), (8811933810982676832LL))), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)213)), (var_11))))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((((/* implicit */_Bool) ((var_5) % (((/* implicit */long long int) arr_20 [i_5] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_5]))) : (max((((/* implicit */unsigned long long int) -8811933810982676814LL)), (18288339999021031073ULL))))) << (((((((/* implicit */_Bool) (unsigned char)68)) ? (max((((/* implicit */unsigned long long int) var_8)), (arr_23 [i_5]))) : (6ULL))) - (17731485933656600141ULL)))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_21 = arr_11 [i_5];
            var_22 = ((/* implicit */short) min((var_2), (((max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)68)))) >> (max((-8811933810982676804LL), (((/* implicit */long long int) var_1))))))));
        }
        var_23 = ((/* implicit */_Bool) ((long long int) ((arr_25 [i_5]) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_5] [i_5] [(unsigned char)16]), (((/* implicit */short) arr_26 [i_5])))))))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    arr_35 [i_9] = (i_9 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (~(4911061451144222475LL)))) ? ((+(((/* implicit */int) arr_34 [i_10])))) : (arr_16 [i_9]))) << (((((((((/* implicit */long long int) arr_20 [(short)11] [i_8])) < (arr_5 [i_8] [i_9]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10]))) : (arr_18 [i_8] [i_10])))) : (min((1099511595008LL), (((/* implicit */long long int) arr_33 [i_9] [i_9] [i_9])))))) - (4183522415LL)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (~(4911061451144222475LL)))) ? ((+(((/* implicit */int) arr_34 [i_10])))) : (arr_16 [i_9]))) << (((((((((((/* implicit */long long int) arr_20 [(short)11] [i_8])) < (arr_5 [i_8] [i_9]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10]))) : (arr_18 [i_8] [i_10])))) : (min((1099511595008LL), (((/* implicit */long long int) arr_33 [i_9] [i_9] [i_9])))))) - (4183522415LL))) + (795958955LL))))));
                    var_24 += ((/* implicit */unsigned char) var_12);
                }
            } 
        } 
    } 
}
