/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93962
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned char) var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))) ? (((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) (~(var_2)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_11 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5926864536471067238LL)))))) : (arr_7 [i_2] [i_2])));
                            var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)243))))) ? (((long long int) (unsigned char)228)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)51))))) ? ((+(((/* implicit */int) var_0)))) : ((+(((/* implicit */int) (unsigned char)13)))))))));
                        }
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((unsigned long long int) arr_8 [i_0 + 1] [(unsigned char)9] [i_0] [i_2] [i_2 + 1])))));
                    }
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0 + 1] [2] [(unsigned char)11] [i_5] [i_6] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) var_8)) & (7889989293378525928ULL))))) ? ((-(arr_0 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(14999180704756301600ULL)))))));
                            var_15 &= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14999180704756301597ULL)) ? (3447563368953250021ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [i_5] [i_5])))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) var_0)))))), ((-(arr_5 [i_0 - 1])))));
                            arr_23 [i_6] [i_6] [(short)15] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((var_1) & (arr_7 [i_0] [i_0]))) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_1] [i_2] [i_2 + 1])))))));
                        }
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_5] [i_5] [i_2] [i_1] = ((/* implicit */int) arr_6 [(unsigned char)5] [i_1] [i_2 - 1] [(unsigned char)5]);
                            var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (max((arr_25 [(short)17] [i_1] [i_2 - 1] [(short)17] [i_2 - 1] [i_2]), (max((arr_0 [i_0]), (((/* implicit */long long int) (-2147483647 - 1)))))))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) && (((/* implicit */_Bool) ((signed char) 14999180704756301597ULL)))))))))));
                            var_18 = ((/* implicit */_Bool) (((-(arr_20 [(unsigned short)20] [(unsigned short)20] [(unsigned short)20] [(short)1] [(unsigned short)20]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)240))))));
                            var_19 &= ((unsigned short) (~(((var_5) ? (1040384) : (((/* implicit */int) var_3))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [14U] [i_5] [i_0] [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_2] [i_8]);
                            arr_31 [i_0 + 1] [i_1] [i_1] [i_2] [i_5] [i_5] [i_8] = ((/* implicit */unsigned int) var_5);
                        }
                        arr_32 [i_0] [i_0] [(short)22] [16U] = ((/* implicit */unsigned char) ((((14999180704756301586ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [i_5] [i_5] [i_5] [i_1] [i_0] [i_5])) >> (((1385577316U) - (1385577288U)))))))) & (((/* implicit */unsigned long long int) arr_25 [21] [(unsigned char)22] [i_2] [i_1] [i_1] [(signed char)13]))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                    {
                        var_20 = var_3;
                        var_21 = ((/* implicit */signed char) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
                    {
                        arr_40 [i_0] [17U] [i_2] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (3447563368953250007ULL)))));
                        arr_41 [17] [22U] [22U] [22U] |= ((/* implicit */signed char) ((arr_29 [(_Bool)1] [i_2] [(signed char)1] [i_2] [i_2 + 1] [i_10]) == (((/* implicit */int) (unsigned char)156))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((3497138490U) < (min(((+(4294967289U))), (((/* implicit */unsigned int) (signed char)101)))))))));
                        arr_44 [i_11] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) var_7);
                        arr_45 [i_1] [(short)7] [i_1] [14LL] [i_0] = ((/* implicit */unsigned long long int) (~((+(arr_25 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_0 - 1])))));
                    }
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 1307962538)) && (((/* implicit */_Bool) (unsigned char)242))))) : (((/* implicit */int) arr_34 [i_0] [i_1] [i_2] [i_1]))));
                    var_24 -= ((/* implicit */unsigned int) ((((var_7) == (((/* implicit */unsigned long long int) var_1)))) ? (((/* implicit */long long int) ((arr_5 [i_0 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)36), (((/* implicit */unsigned char) arr_18 [i_0] [(_Bool)1] [i_1] [i_2] [i_2] [(unsigned short)1] [i_2 + 1]))))))))) : (min((max((((/* implicit */long long int) arr_12 [i_0 + 1] [i_1] [(unsigned short)20] [i_1] [(unsigned short)20] [i_2])), (arr_11 [i_2 + 1]))), (arr_11 [i_1])))));
                }
            } 
        } 
    } 
}
