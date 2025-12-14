/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56702
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_16 *= max((((/* implicit */unsigned long long int) (~((~(arr_2 [i_0] [(unsigned short)8])))))), (max((((((/* implicit */unsigned long long int) var_15)) & (86966090345945063ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_17 = ((/* implicit */signed char) arr_3 [i_0]);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)85)) > (((/* implicit */int) (unsigned char)240))))) * (((arr_5 [i_1] [i_1]) - (((/* implicit */int) (signed char)3))))));
                var_19 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [11] [(unsigned char)6])) ? (((/* implicit */int) (_Bool)1)) : (arr_7 [i_0] [i_1] [(signed char)15]))));
                var_20 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
            }
        }
        for (int i_3 = 3; i_3 < 14; i_3 += 1) 
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (~(3271450695U)))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))))));
            var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (arr_9 [i_0] [8ULL] [i_3] [i_0])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [(unsigned short)10] [(unsigned short)10])) & (var_6)))) ? (((((arr_6 [i_0] [(unsigned short)14]) + (9223372036854775807LL))) >> (((-1377183894565520300LL) + (1377183894565520358LL))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) arr_7 [i_0] [3U] [i_0])) : (2751796511U))))))) : (((((((/* implicit */_Bool) arr_10 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [(unsigned char)5])) ? (((/* implicit */unsigned long long int) arr_5 [3ULL] [3ULL])) : (arr_11 [i_0] [(_Bool)0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [13U] [i_3] [i_3])) * (((/* implicit */int) arr_9 [13ULL] [i_3] [i_3] [i_3])))))))));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((long long int) ((((arr_7 [i_4] [i_4] [i_4]) + (((/* implicit */int) (short)-14697)))) - (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4])))));
        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) || (((/* implicit */_Bool) arr_2 [i_4] [i_4])))))));
        var_24 = ((/* implicit */unsigned short) min((arr_0 [i_4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) || (((/* implicit */_Bool) arr_11 [i_4] [i_4])))))));
        arr_16 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_4]) != (((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_4 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) 671458384)))))))) ^ (arr_3 [i_4])));
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_5])) ? (arr_7 [i_5] [i_5] [i_5]) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5])) : (1455652323))) : (((/* implicit */int) (_Bool)1))))), (arr_15 [i_5] [(_Bool)1])));
        var_25 = arr_14 [i_5];
    }
    var_26 = ((/* implicit */int) var_14);
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) var_3)), (-1)))), (((var_5) - (((/* implicit */long long int) -2099935696))))))) ? ((+(max((((/* implicit */unsigned int) var_2)), (var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))))));
}
