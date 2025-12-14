/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92548
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
    var_19 = ((/* implicit */long long int) var_12);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (min((((var_13) | (((/* implicit */unsigned long long int) var_6)))), (var_15))) : (((/* implicit */unsigned long long int) max((144115188075855871LL), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
                    {
                        var_22 -= ((/* implicit */unsigned long long int) var_17);
                        var_23 |= ((/* implicit */unsigned short) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (max((((/* implicit */long long int) (_Bool)1)), (5869657094069311143LL))))));
                        arr_13 [i_1] [i_1] [i_4] [i_1] [(short)6] |= (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_12)))) << (((max((((/* implicit */int) var_8)), (var_16))) + (135)))))));
                    }
                    var_24 = ((/* implicit */long long int) arr_9 [i_2] [i_3]);
                }
            } 
        } 
        arr_14 [1ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((unsigned long long int) var_14)) : (((unsigned long long int) arr_5 [i_1] [i_1]))));
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_25 [i_5] [i_6] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_18 [i_6] [i_6] [i_6]), (((/* implicit */int) (signed char)-20))))), (var_9)))) ? (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) == (arr_24 [i_5] [i_5] [i_6])))) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((signed char)0), ((signed char)127))))));
                        arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) max((min((min((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_7 - 1])) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) var_6))));
                    }
                } 
            } 
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) max((var_7), (((/* implicit */int) arr_12 [i_5] [i_5] [i_6] [i_6])))))) * (((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_6])) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) var_2))))))));
            var_26 = ((unsigned short) ((signed char) (signed char)0));
        }
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
        {
            var_27 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (2053032140U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 16239806515368944429ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (549755813872ULL))))))), (((max((arr_2 [i_5] [i_5]), (((/* implicit */unsigned long long int) (_Bool)1)))) + (((/* implicit */unsigned long long int) -7773042636356314216LL)))));
            var_28 = var_8;
            arr_30 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) arr_9 [i_9] [i_9])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_9] [i_9])) : (((/* implicit */int) arr_9 [i_5] [i_9])))))));
            var_29 = ((/* implicit */unsigned long long int) arr_18 [i_9] [i_9] [i_9]);
            var_30 = ((/* implicit */signed char) ((_Bool) max(((short)-25960), (((/* implicit */short) max(((_Bool)1), (var_3)))))));
        }
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned long long int) max((min((var_16), (((/* implicit */int) max((var_14), (arr_27 [i_10])))))), (-772423450)));
            arr_34 [i_10] [i_10] [i_10] = ((/* implicit */signed char) (~(((unsigned long long int) (_Bool)0))));
            var_32 = var_14;
            arr_35 [i_10] [i_10] = ((_Bool) (_Bool)1);
        }
        var_33 |= ((/* implicit */short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))) < (min((1097907150U), (((/* implicit */unsigned int) var_2))))))));
        arr_36 [i_5] [i_5] = ((/* implicit */signed char) arr_24 [i_5] [i_5] [i_5]);
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
    {
        arr_39 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (_Bool)1))));
        var_34 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (161416074U))));
        var_35 = ((/* implicit */unsigned int) ((short) var_6));
        var_36 = ((/* implicit */long long int) var_11);
        var_37 -= ((/* implicit */short) arr_11 [i_11] [i_11] [i_11] [i_11]);
    }
    var_38 = ((/* implicit */_Bool) min((var_38), (var_4)));
    var_39 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))))) : (var_15))) : (((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) (_Bool)1))))))));
}
