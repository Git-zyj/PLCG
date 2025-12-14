/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73418
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
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(min((var_2), (var_7)))))) + (((2ULL) << ((((((-2147483647 - 1)) - (-2147483595))) + (68)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((unsigned char) var_9)))) << (((((/* implicit */int) var_19)) / ((+(((/* implicit */int) var_15))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)249)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) / (1848389726739208417ULL))) : (((/* implicit */unsigned long long int) (+(65532U)))))), (((/* implicit */unsigned long long int) (unsigned char)255))));
        var_22 ^= ((/* implicit */short) min((arr_2 [10] [10]), (((/* implicit */long long int) (+((-(((/* implicit */int) var_11)))))))));
        arr_4 [i_0] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_16)) ? (arr_0 [i_0] [7]) : (var_13))) ^ (arr_2 [i_0] [i_0]))), (((/* implicit */long long int) ((unsigned char) (~(65559U)))))));
        arr_5 [(unsigned char)16] [i_0] = ((/* implicit */int) ((arr_0 [i_0] [i_0]) + (((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned char)2), ((unsigned char)255)))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_8 [(unsigned char)8] [(unsigned char)8] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])) : (3526687528660887569ULL))))));
        var_23 = ((/* implicit */int) (short)-23137);
    }
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        var_24 *= ((/* implicit */unsigned char) min((var_2), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)0)) ? (1548765193) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)186)))))));
                        var_25 &= ((/* implicit */signed char) max((((((/* implicit */int) (unsigned char)69)) / (8388607))), (((/* implicit */int) arr_11 [i_2] [i_2]))));
                        var_26 = ((/* implicit */long long int) (unsigned char)255);
                    }
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((18446744073709551610ULL) << (((min((((/* implicit */int) min(((short)16550), (((/* implicit */short) var_4))))), (((((/* implicit */int) (unsigned char)70)) / (((/* implicit */int) (unsigned char)26)))))) + (143))))))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) (((~(((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2]))) + (arr_2 [i_2] [(short)4]))))) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [14U] [(signed char)12] [(signed char)12] [i_2])) << (((((/* implicit */int) (unsigned char)74)) - (55)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) -8388608)), (arr_7 [i_2] [(unsigned char)7])))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_29 &= ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_7] [i_7] [i_6])) ^ (((/* implicit */int) max((((unsigned char) arr_23 [i_2] [i_2] [i_7])), (((unsigned char) 3004367775878908816ULL)))))));
                    arr_26 [i_7] = ((/* implicit */signed char) ((unsigned long long int) ((((unsigned long long int) -11LL)) << (((((/* implicit */int) ((signed char) (signed char)75))) - (44))))));
                }
            } 
        } 
        var_30 ^= ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) 4852353198592116776LL)) || (((/* implicit */_Bool) arr_21 [i_2] [i_2]))))))));
    }
}
