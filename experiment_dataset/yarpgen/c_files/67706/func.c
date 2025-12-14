/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67706
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1]))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) | (min((0ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) ? (min((((/* implicit */long long int) (unsigned short)14133)), (-3074611827146520940LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1] [i_2])) & (((/* implicit */int) arr_1 [i_0 + 1]))))));
                    var_21 += ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) -5232743282462926519LL)), (9126233162659287794ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [4] [3LL] [i_2]) : (var_14))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (-5232743282462926519LL) : (-2824907876616270544LL))), (((/* implicit */long long int) arr_1 [i_0 - 1]))))) : (max((((/* implicit */unsigned long long int) var_5)), (((var_9) + (((/* implicit */unsigned long long int) -3074611827146520940LL)))))));
                }
            } 
        } 
        arr_7 [11LL] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 1])))), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6)))))))));
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)7)), (arr_1 [i_3]))))))) ? (((/* implicit */unsigned int) (~(var_13)))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_15)))) * (((((/* implicit */_Bool) (unsigned short)65510)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60884))) : (var_4)))))));
        arr_11 [(signed char)14] [(signed char)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)194))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [(unsigned short)18] [(unsigned short)19] [(unsigned short)19])) ? (arr_2 [2ULL] [i_3] [2ULL]) : (((/* implicit */int) arr_1 [i_3]))))) : (var_18)));
        arr_12 [i_3] |= arr_3 [i_3] [i_3] [i_3];
    }
    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 4) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(arr_13 [i_4])))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (arr_14 [i_4]) : (arr_14 [i_4]))))));
        var_23 = ((/* implicit */unsigned long long int) var_2);
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_14)))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) 18446744065119617024ULL);
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) 15769240166184237010ULL);
        var_25 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (0ULL))));
    }
    var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) (~((~(((/* implicit */int) var_8))))))), ((+(var_15)))));
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        for (signed char i_7 = 1; i_7 < 18; i_7 += 2) 
        {
            {
                arr_26 [i_6] [i_6] |= ((/* implicit */unsigned char) (unsigned short)63637);
                var_27 += ((/* implicit */unsigned short) min((max((var_11), (var_18))), (((/* implicit */long long int) (unsigned short)62607))));
                arr_27 [i_6] [i_7 + 1] [i_7] = ((/* implicit */unsigned char) ((signed char) (unsigned short)44274));
            }
        } 
    } 
}
