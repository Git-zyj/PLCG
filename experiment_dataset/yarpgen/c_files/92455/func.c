/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92455
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) max(((unsigned short)65531), (var_14)))) : (((/* implicit */int) ((2407060664155154609ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12168)))))))) : ((+((-(((/* implicit */int) arr_0 [i_0 + 1]))))))));
        arr_2 [(unsigned short)8] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                for (unsigned short i_4 = 3; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)-29)) ^ (((/* implicit */int) arr_0 [i_1]))))));
                        arr_13 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned short)30155)) : (((((/* implicit */_Bool) (unsigned short)54891)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(arr_1 [i_1 - 1]))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_1 - 1] [i_1] [14ULL])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) /* same iter space */
    {
        var_22 = var_17;
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)22)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 2; i_6 < 23; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (unsigned short i_8 = 1; i_8 < 22; i_8 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_9);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 1; i_9 < 23; i_9 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)54881))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_24 [i_5] [i_6] [i_7] [i_5] [i_8] [i_9])))) : (((/* implicit */int) (unsigned short)40618)))))));
                            var_26 |= (-(((1873106722366786131ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54892)) && (((/* implicit */_Bool) var_3))))))))));
                        }
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((arr_22 [i_5 + 1] [i_6] [i_7] [i_8 - 1] [i_6 - 2]) == (((((/* implicit */_Bool) (unsigned short)9971)) ? (arr_22 [i_10] [i_6] [i_7] [i_6] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                            var_29 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_10] [i_8 + 2] [(unsigned short)5] [i_5] [i_5]))));
                        }
                        var_30 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8 - 1] [(signed char)11] [i_6] [i_5 + 2])) ? (((/* implicit */int) (unsigned short)54868)) : (((/* implicit */int) arr_11 [i_5] [i_5 + 2] [i_5 - 1] [i_5] [i_5])))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? ((+(((/* implicit */int) (unsigned short)55564)))) : (((/* implicit */int) arr_26 [i_5] [i_6 + 1] [i_5] [i_5] [i_5 - 1]))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 1) /* same iter space */
    {
        arr_30 [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13436486658808562306ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_11 + 1]))));
        var_32 |= ((/* implicit */unsigned long long int) arr_20 [i_11 + 2] [i_11 + 2] [i_11]);
        var_33 *= ((unsigned short) arr_20 [i_11 - 1] [i_11 + 2] [i_11]);
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_11] [i_12])) ? (15638255412674704553ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_11 - 1] [i_11 - 1])))));
            var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
        }
        for (signed char i_13 = 2; i_13 < 21; i_13 += 4) 
        {
            var_36 = ((/* implicit */unsigned long long int) arr_0 [22ULL]);
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((((var_11) + (15765113134589549310ULL))) - (((arr_15 [i_13 - 1]) ^ (var_11)))))));
        }
    }
    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_1))))) & ((~(var_7)))))) ? (((((((/* implicit */_Bool) (unsigned short)59341)) ? (9ULL) : (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))) : (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_12)))))))));
}
