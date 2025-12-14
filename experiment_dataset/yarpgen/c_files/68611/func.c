/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68611
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
    var_18 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), ((~((-(6ULL)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) ((min((((/* implicit */int) arr_0 [i_0 + 2] [2])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) var_4)))))) + (((/* implicit */int) arr_1 [i_0 + 1]))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_14 [i_3] [i_2] [i_3] [i_2] = min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 72057594037927935LL))))), (((((/* implicit */unsigned int) 2147483647)) + (446053283U))))), (((/* implicit */unsigned int) ((((/* implicit */int) min(((short)-1), (((/* implicit */short) arr_9 [i_3]))))) & (max((((/* implicit */int) arr_6 [i_1] [i_2] [i_3 + 1])), (var_5)))))));
                        arr_15 [i_4] [i_3] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */int) var_12);
                        arr_16 [i_3] [1ULL] [i_3 + 4] [1ULL] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 1073741823U))))));
                        arr_17 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) ((((1073741823U) - ((-(arr_13 [i_1] [i_2] [i_2] [i_3 + 2] [19] [i_4]))))) + (max((3221225472U), (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] [i_1] |= ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]);
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435392U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))) : (min((((/* implicit */unsigned int) var_7)), (984147523U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((-72057594037927935LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1])))))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [(_Bool)1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) : (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned char)255)))))))) : (arr_5 [i_1] [19U]))))));
    }
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
        arr_22 [i_5] = ((/* implicit */unsigned long long int) arr_20 [i_5]);
        var_21 = ((/* implicit */unsigned int) min((arr_11 [i_5] [i_5] [i_5]), (((/* implicit */int) arr_8 [i_5]))));
        var_22 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) arr_8 [i_5])))));
    }
    for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            for (int i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)(-32767 - 1)))));
                    arr_31 [i_6 + 2] [i_6] [i_6 + 2] = ((/* implicit */unsigned short) min((min((arr_27 [i_6 + 3] [i_6] [i_8 + 2]), (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) arr_27 [i_6 + 4] [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)0)) : (arr_27 [i_6 + 1] [i_6] [i_8 + 1])))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            {
                var_25 = ((/* implicit */signed char) (unsigned short)52595);
                arr_38 [i_9] [i_9] = var_6;
                arr_39 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), ((~(-1LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18U)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9]))) ^ (-1472935158789506975LL)))))) : (926660625083458623ULL)));
            }
        } 
    } 
}
