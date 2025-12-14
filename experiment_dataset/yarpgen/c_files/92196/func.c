/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92196
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_0] = ((/* implicit */int) var_3);
                        var_13 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-121))));
                        var_14 = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned short) ((((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) (unsigned short)0)))) >= (((/* implicit */int) arr_9 [i_2] [i_1] [i_0])))))));
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_5))));
                        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12ULL)) ? (-989669998) : (((/* implicit */int) (signed char)-121))));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) * (((/* implicit */int) (!(((/* implicit */_Bool) -940671596)))))));
                            var_18 -= ((/* implicit */unsigned char) (unsigned short)25334);
                        }
                        arr_17 [i_0] [i_0] [i_2] [i_4] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (arr_3 [i_1] [i_1]))))))), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_4]));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (10116413U)))))))))));
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((arr_3 [i_0] [i_1]) > (((/* implicit */unsigned long long int) var_4))));
                        var_20 = ((/* implicit */signed char) max((var_20), (min((var_9), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-112)))))))));
                    }
                    arr_19 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_1]))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (0) : (((/* implicit */int) (signed char)127)))))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0] [i_0]))))) ^ (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))), ((!(((/* implicit */_Bool) (signed char)-121))))))))))));
                    arr_20 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max((var_9), ((signed char)122))), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]))))))))));
                }
                for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    var_22 += ((/* implicit */int) 15ULL);
                    var_23 = ((/* implicit */unsigned long long int) ((arr_23 [i_1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)120)) << (((((/* implicit */int) var_8)) - (33467))))))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_30 [i_8] [i_6] [i_6] [i_6] [i_1] [i_8] = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (-647667287)))) ? (min((((/* implicit */long long int) var_8)), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)121)), (var_8))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)30)))))));
                                var_24 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (arr_0 [i_0])))) == (((((/* implicit */_Bool) (+(134217712ULL)))) ? (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) var_6)) + (var_11)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) | (18446744073575333903ULL))) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_1] [i_6])), (arr_7 [i_0] [i_0] [i_0])))))))));
                }
                var_26 -= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) var_10))), (min((arr_5 [i_1]), (arr_7 [i_0] [i_0] [i_1]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 4) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)13970)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) : (13738945691204497558ULL)));
        arr_35 [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */int) min(((unsigned char)16), (((/* implicit */unsigned char) (_Bool)1))))) * (((/* implicit */int) (signed char)35)))), (max(((+(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_33 [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_31 [i_9] [i_9 + 1]))))))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_11)))) | (min((min((((/* implicit */unsigned long long int) arr_32 [i_9])), (arr_33 [i_9]))), (((((/* implicit */_Bool) arr_31 [i_9] [i_9])) ? (arr_33 [i_9]) : (134217720ULL))))))))));
        arr_36 [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_32 [i_9 + 1]))));
    }
    for (signed char i_10 = 4; i_10 < 19; i_10 += 1) 
    {
        arr_39 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((unsigned int) var_5)))));
        var_29 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))))))));
    }
    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0))))));
    /* LoopNest 2 */
    for (unsigned int i_11 = 1; i_11 < 12; i_11 += 4) 
    {
        for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            {
                arr_44 [i_11] = ((/* implicit */unsigned long long int) arr_7 [i_11 + 2] [i_11 + 2] [i_11 + 1]);
                arr_45 [i_11] [i_12] [i_12] = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
}
