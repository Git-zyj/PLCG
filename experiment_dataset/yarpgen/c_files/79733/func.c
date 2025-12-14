/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79733
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
    var_18 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned int) (signed char)-87);
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(arr_1 [i_0 - 3])));
        var_19 &= ((/* implicit */unsigned int) var_14);
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_9 [i_0 + 2] [i_3 + 2] [i_2]), (var_11)))) ^ (((/* implicit */int) arr_9 [i_0] [i_3 + 3] [i_2 - 1]))));
                        var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 3])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 3] [i_3] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 3] [i_2 - 1] [i_2 + 1] [i_3]))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_0] [i_0])), (1385640385581175257LL)))) ? (arr_8 [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -3804241455478112804LL))))))))) ? (181239519021199640LL) : ((+(-181239519021199640LL)))))));
                        arr_13 [i_3 + 2] [i_3] [i_2] [i_1] [i_1] [i_0 - 3] = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) var_2)) ? (arr_0 [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_15)))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1 - 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 3])) ? (((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 2] [i_0 + 1] [i_0 - 3])) : (((/* implicit */int) arr_11 [i_1 - 2] [i_1 + 2] [i_1] [i_1] [i_0 - 3] [i_0 + 3]))))) ? (((-5445026880379505662LL) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 2] [i_1] [i_0] [i_0 + 3] [i_0 - 3]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -5445026880379505663LL))))));
            arr_14 [i_0] [i_0] [i_0] = ((((((arr_0 [i_0 + 2]) + (9223372036854775807LL))) >> (((arr_10 [i_1 - 1] [i_0 - 3] [i_0 + 1]) - (2738414508U))))) / (((/* implicit */long long int) min((arr_10 [i_1] [i_1] [i_0]), (((unsigned int) var_6))))));
        }
        for (signed char i_4 = 2; i_4 < 12; i_4 += 4) /* same iter space */
        {
            var_23 -= ((/* implicit */long long int) min((arr_5 [i_4 - 2]), (((signed char) var_6))));
            arr_19 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-85)))), ((+(((/* implicit */int) (unsigned short)63))))))) ? (max(((-(2147483584LL))), (((/* implicit */long long int) var_16)))) : (max(((~(var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4])) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) var_9)))))))));
            var_24 += ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) arr_18 [i_0] [i_4 + 1] [i_0])))))), (5445026880379505663LL)));
            var_25 += ((/* implicit */_Bool) (+(arr_0 [i_0])));
        }
        /* vectorizable */
        for (signed char i_5 = 2; i_5 < 12; i_5 += 4) /* same iter space */
        {
            arr_22 [i_0] [i_5] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_7 [i_0] [i_0] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 + 1])))))) ? (-2361209006334224960LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))));
            /* LoopNest 2 */
            for (long long int i_6 = 3; i_6 < 10; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 13; i_7 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_7]))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) var_15)) ? (-5445026880379505662LL) : (var_12)))));
                        var_27 = ((/* implicit */signed char) max((var_27), (arr_17 [i_7 + 1])));
                    }
                } 
            } 
            arr_28 [i_5] [i_0] [i_0] = (-(arr_16 [i_5 + 1] [i_5 - 2]));
            var_28 = ((/* implicit */signed char) var_1);
        }
        var_29 = ((/* implicit */signed char) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
    for (unsigned int i_8 = 3; i_8 < 11; i_8 += 3) /* same iter space */
    {
        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8 - 3] [i_8 - 1] [i_8 + 1]))) : (arr_7 [i_8] [i_8] [i_8 - 2] [i_8 + 1])))) ? (min((arr_7 [i_8 + 3] [i_8] [i_8 - 2] [i_8 - 3]), (arr_7 [i_8] [i_8] [i_8 - 3] [i_8]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_14))))));
        var_31 = ((/* implicit */unsigned short) (signed char)-96);
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) : ((-(5445026880379505663LL)))));
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_35 [i_9] [i_9]), (var_16))))));
        arr_36 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_15)))) : ((~(-2147483585LL))))))));
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((_Bool) (signed char)-108)))));
        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) arr_32 [i_9]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_9] [i_9])) || (arr_34 [i_9]))))))) : (arr_33 [i_9] [i_9]))))));
    }
}
