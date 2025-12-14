/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99869
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
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)22227)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> (((max((((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42509))))), (max((((/* implicit */unsigned long long int) var_2)), (var_7))))) - (16474058369264135053ULL)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) -423103023)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-86))));
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((2085439700552084401ULL) >= (var_16))))))), (((long long int) max((var_1), (((/* implicit */long long int) (_Bool)1)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((16361304373157467215ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3 + 2]))));
            var_21 = ((/* implicit */_Bool) var_10);
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)26)) & (((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned short)5])) > (var_12))))));
            var_23 = ((/* implicit */short) var_2);
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 2; i_6 < 21; i_6 += 2) 
            {
                var_24 ^= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)23024))));
                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2085439700552084397ULL)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) var_5)))))))));
            }
            var_26 = ((/* implicit */signed char) max((max((((/* implicit */int) (signed char)-102)), (arr_7 [i_0] [i_5 - 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23694)))))));
        }
        var_27 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((int) arr_13 [i_0] [i_0] [(short)0]))));
        arr_18 [i_0] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (16361304373157467215ULL)))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                {
                    var_28 -= ((/* implicit */signed char) (-((-(var_13)))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) max((125098944U), (((/* implicit */unsigned int) (_Bool)1)))))));
                    arr_24 [i_0] [i_8] [i_0] = ((/* implicit */signed char) var_6);
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2524667278U)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_9] [i_9])) | (((/* implicit */int) var_6))))) ? (min((var_13), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_23 [(signed char)7] [i_9] [i_9] [i_9])))))) : (var_2)));
        arr_29 [i_9] = ((/* implicit */signed char) ((-3652906989377458447LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_30 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((var_2), (((/* implicit */unsigned int) var_5)))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) var_8))))), (((-7364785981462896288LL) ^ (-7364785981462896278LL))))))));
    }
    for (signed char i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
    {
        arr_33 [i_10] [18] = ((/* implicit */short) arr_5 [i_10] [6] [i_10]);
        arr_34 [i_10] = ((/* implicit */unsigned int) (signed char)95);
        arr_35 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_25 [i_10]) < ((((_Bool)1) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28166))))))))) : (min((max((var_13), (((/* implicit */unsigned int) (unsigned short)6298)))), (((/* implicit */unsigned int) arr_20 [i_10] [i_10]))))));
    }
    var_31 = ((/* implicit */signed char) ((unsigned int) ((signed char) (!(((/* implicit */_Bool) 3545899620U))))));
    var_32 = ((/* implicit */long long int) 4176557586U);
}
