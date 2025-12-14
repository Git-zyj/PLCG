/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74433
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
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_3)), (min(((~(2251799813685247ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_13)), ((unsigned char)30))))))));
    var_16 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((18444492273895866368ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_5))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_18 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_10 [i_1] [i_3] [i_4])), (((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_4])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65408))) | (18444492273895866361ULL))) : (((/* implicit */unsigned long long int) (~(0U))))))));
                            var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_3] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) : (arr_13 [i_2] [i_1] [i_2] [i_3] [i_4])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])), (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])) | (((/* implicit */int) (unsigned char)63))))))) : (((unsigned long long int) ((unsigned char) var_14)))));
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((16374898130778250524ULL) - (max((0ULL), (((/* implicit */unsigned long long int) 3874557806U))))))) ? (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned short)0)))) : (((int) (-(((/* implicit */int) (short)22246)))))));
                        }
                        arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) arr_3 [i_2] [i_1] [i_2]);
                    }
                    for (short i_5 = 3; i_5 < 17; i_5 += 3) 
                    {
                        arr_19 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_9 [i_0] [i_1] [i_1] [i_5 + 2])))) ? (max((max((8641610498405421291LL), (8641610498405421291LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0]))))))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (~(((/* implicit */int) max((arr_17 [i_0] [i_5 - 1] [i_5] [i_5 - 3] [i_5] [i_5 - 2]), (arr_17 [i_5 - 2] [i_5 - 3] [i_5] [i_5 - 3] [i_5 - 3] [i_5]))))));
                    }
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (6ULL) : (((/* implicit */unsigned long long int) var_5))))))))));
                        arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] = ((unsigned short) max(((+(((/* implicit */int) (unsigned short)65529)))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) ((min((((/* implicit */int) arr_4 [i_0] [i_2] [i_7])), (-102459655))) >= (((((/* implicit */int) arr_0 [i_0] [i_2])) & (((/* implicit */int) arr_0 [i_0] [i_2]))))));
                        var_22 = ((/* implicit */unsigned short) ((signed char) (unsigned short)56626));
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0])), (((long long int) (unsigned short)65535))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1074928538)) ? (((/* implicit */unsigned int) -2147483635)) : (0U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) (unsigned short)124)) ? (1953503019U) : (((/* implicit */unsigned int) 102459673))))))) ? (((/* implicit */int) max(((unsigned short)131), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)228)) <= (((/* implicit */int) (unsigned short)24735)))))))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))));
                        arr_27 [i_0] [i_2] [i_2] [i_7] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))) : (((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31181)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((max((((((/* implicit */_Bool) 2147483641)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_8] [i_9] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (102459676) : (((/* implicit */int) (unsigned short)49822))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6441800447465716092ULL))))))))));
                                arr_32 [i_0] [i_1] [i_2] &= max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (min((8641610498405421288LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)58339)) << (((4294967295U) - (4294967292U)))))))));
                                var_26 ^= ((/* implicit */int) (short)5118);
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) (unsigned char)8)), (((((/* implicit */_Bool) 351419518U)) ? (arr_29 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                    arr_34 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_8);
                    var_27 = ((/* implicit */int) min((((/* implicit */long long int) (+(-102459655)))), (((((/* implicit */_Bool) var_3)) ? (((long long int) (unsigned short)58339)) : (((/* implicit */long long int) 0U))))));
                }
            } 
        } 
    } 
}
