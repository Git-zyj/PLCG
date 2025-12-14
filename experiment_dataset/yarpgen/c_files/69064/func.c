/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69064
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (short)8373))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -8437266085675883441LL))))) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (signed char)-126)))))))) ? (((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 4])))) : (((/* implicit */int) ((short) arr_0 [i_0 + 3])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */int) min(((short)21357), ((short)29899)))) - (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (short)1170)) : (((/* implicit */int) (short)-16920))))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
            {
                arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0]);
                arr_9 [i_0] [i_0] [(short)5] = (((!(((/* implicit */_Bool) arr_5 [i_2] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)84))))) : (((long long int) (short)-564)))) : ((((!(((/* implicit */_Bool) 2556764914880911644LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)26796)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (unsigned short)56103))))) : (5696780931024894410LL))));
            }
            /* vectorizable */
            for (short i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 12; i_4 += 4) 
                {
                    var_14 = arr_7 [i_1];
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-18127)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (short)-29900))));
                        var_16 = ((/* implicit */long long int) arr_12 [i_5] [i_3] [i_1] [i_0]);
                    }
                    for (short i_6 = 3; i_6 < 13; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_6] [i_6] [i_0] [i_6] = ((short) (short)29899);
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (short)22937))))) ? (((/* implicit */int) arr_18 [i_6 + 3] [(unsigned short)10] [i_3] [i_3] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-108)) || (((/* implicit */_Bool) arr_15 [(unsigned short)1] [i_0] [i_1] [i_0])))))));
                        var_18 += ((/* implicit */short) arr_4 [i_0 - 2] [i_0] [i_0]);
                        var_19 -= ((/* implicit */short) ((signed char) arr_17 [i_4] [i_4] [i_1] [i_0 + 3]));
                        var_20 = ((/* implicit */long long int) arr_12 [(signed char)14] [i_4 - 2] [(short)13] [(unsigned short)1]);
                    }
                }
                arr_23 [(short)8] [i_1] = ((/* implicit */unsigned short) arr_3 [(signed char)5] [i_0]);
            }
            var_21 += ((/* implicit */signed char) ((arr_13 [i_0] [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (short)10062)))));
            arr_24 [i_1] [i_1] = ((/* implicit */unsigned short) (-((-(min((-9208760276573416189LL), (((/* implicit */long long int) (short)-21762))))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) (signed char)14)), (1693566978966700968LL))) : (max((((/* implicit */long long int) arr_16 [(short)10])), (arr_3 [i_0] [(unsigned short)6])))))) ? (((long long int) ((short) (short)22937))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0])))));
        }
        var_23 = ((/* implicit */long long int) ((signed char) (short)-20212));
        arr_25 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        arr_30 [i_7] = ((/* implicit */short) arr_28 [(unsigned short)14]);
        arr_31 [i_7] [i_7] = ((/* implicit */signed char) arr_27 [i_7]);
    }
    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_9))))))));
}
