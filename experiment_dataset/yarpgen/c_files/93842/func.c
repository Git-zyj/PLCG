/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93842
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
    var_15 = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) var_1)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (33521664U))))), (((((/* implicit */_Bool) 33521655U)) ? (33488896ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                    arr_9 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) var_1)))), (((/* implicit */int) (short)11140))))) ? ((-(min((arr_7 [i_0] [i_1] [i_2] [i_1]), (((/* implicit */long long int) arr_3 [i_0] [i_1 - 1] [i_2])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (1130446340) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                    var_16 = ((/* implicit */unsigned int) (short)11122);
                    var_17 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) ((short) arr_5 [i_2] [i_1] [(short)0] [i_0]))))), (((((/* implicit */_Bool) arr_4 [i_2] [(short)13] [i_1 + 3])) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_1 + 3])) : (((/* implicit */int) var_1))))));
                    var_18 &= ((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (unsigned short)128)))))) * (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38168))) : (2661821903220482585ULL))))))))));
        var_20 += ((/* implicit */short) -9);
        arr_10 [i_0] [i_0] = ((/* implicit */int) -8999192106236534814LL);
        arr_11 [i_0] = ((/* implicit */unsigned int) -576775383);
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [(unsigned char)13] [(short)4] [(unsigned char)13])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_6 [1U] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((0), (((/* implicit */int) (unsigned short)38168))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3]))) - (18446744073709551594ULL))))))) : (((((/* implicit */_Bool) ((var_7) ^ (1786936912)))) ? (max((arr_13 [i_3]), (((/* implicit */unsigned int) (unsigned char)42)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)22)) ? (var_13) : (arr_0 [i_3])))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) arr_13 [i_3]);
            arr_17 [i_3] [i_4] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_6 [i_3] [i_3] [i_4] [i_4]))))));
            arr_18 [i_3] [i_4] = ((/* implicit */unsigned int) arr_12 [i_3]);
            arr_19 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)20884), (((/* implicit */unsigned short) arr_3 [i_3] [i_4] [i_4]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_4] [i_4] [i_3] [i_3]))))) ? (((/* implicit */int) arr_4 [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_5 [i_3] [i_4] [i_3] [i_4])));
        }
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (((((+(((/* implicit */int) (_Bool)0)))) < (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_3] [i_3] [i_3])), (arr_12 [i_3])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_3] [i_3]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_3]) : (((/* implicit */int) arr_12 [i_3])))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_5] [i_5]))) >= ((-(0U)))))))))));
            arr_23 [i_3] [i_3] = ((/* implicit */long long int) var_10);
        }
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)57524)) ? (((((/* implicit */_Bool) (short)30628)) ? (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_6))))) : (((arr_20 [i_3] [i_3]) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_3])))))) : (((((/* implicit */_Bool) (unsigned short)65533)) ? (arr_1 [i_3]) : (((/* implicit */int) ((unsigned short) 2078434314)))))));
    }
    var_25 = ((/* implicit */_Bool) var_13);
    var_26 = (+(min((var_5), (((/* implicit */unsigned int) ((unsigned char) var_9))))));
    var_27 = ((/* implicit */int) (unsigned short)60174);
}
