/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57060
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) var_11))))) / ((+(arr_3 [i_2])))));
                        var_16 = ((/* implicit */unsigned char) (short)32197);
                        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_0])) < (((/* implicit */int) arr_5 [i_1])))) ? (((((/* implicit */_Bool) 1394118204509373866LL)) ? (2040ULL) : (((/* implicit */unsigned long long int) 3438879931846176529LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((arr_5 [i_1]) ? (arr_6 [i_0] [i_2] [i_2]) : (((/* implicit */int) var_1)))))))));
                    }
                } 
            } 
            var_17 -= arr_0 [i_0];
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_11);
        }
        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
        {
            var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2541481716826503093LL)) ? (72057594037927935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52726)))));
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((+(((/* implicit */int) arr_13 [i_4] [i_0] [i_0])))) / (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])))))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = ((unsigned long long int) (unsigned char)57);
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                var_20 -= ((/* implicit */unsigned short) (unsigned char)96);
                arr_23 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))) / (((/* implicit */int) (signed char)-54))));
                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_5]))));
            }
            arr_24 [i_0] [i_5] [i_5] &= ((/* implicit */long long int) ((arr_0 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))));
        }
        arr_25 [i_0] = ((/* implicit */unsigned char) ((unsigned short) 268435455ULL));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_27 [i_7]))));
        var_23 = ((/* implicit */_Bool) ((unsigned short) (short)7911));
        var_24 = ((/* implicit */signed char) ((int) arr_26 [i_7] [i_7]));
    }
    /* vectorizable */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_25 -= ((/* implicit */short) arr_28 [(signed char)22]);
        arr_31 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6064)))))) ? (((/* implicit */long long int) 3310538668U)) : (((((/* implicit */_Bool) (signed char)65)) ? (var_12) : (((/* implicit */long long int) var_4))))));
    }
    var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) var_12))) ? (var_0) : (((/* implicit */long long int) (+(((/* implicit */int) var_14))))))) / (((/* implicit */long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_13)))))));
}
