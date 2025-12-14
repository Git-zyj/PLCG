/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68935
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
    for (int i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) arr_3 [i_1] [i_1] [i_0 + 3]))));
            arr_8 [i_0 + 3] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_6 [i_0])))) ? (532316706U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)0)), (arr_4 [(unsigned short)3]))))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
            arr_9 [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0 + 2]))))) < (((((/* implicit */_Bool) arr_3 [i_0 + 4] [i_1] [i_1])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-123)))))));
            arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1787086829309867674LL)) ? (134217727LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-119)))))))));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_17 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_11 [i_0 + 4] [i_2] [i_0 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_11 [i_0 + 2] [i_0 + 2] [i_2])))));
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 842209008707951028ULL)) ? (134217727LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [5LL] [5LL] [6U]))))))))) && (((/* implicit */_Bool) -134217743LL)))))));
        }
        for (unsigned char i_3 = 3; i_3 < 8; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_11 [i_3] [i_3 + 2] [i_0 + 1]))) - (((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_4])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_4] [i_5]))))));
                        arr_22 [i_5] [i_3 - 1] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 + 2])) ? (arr_12 [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)7] [i_0 - 1])))))) ? (((/* implicit */long long int) -133087049)) : (((((/* implicit */_Bool) 2512647037U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))) : (9223372036854775807LL)))));
                        arr_23 [i_0] [i_0 + 4] [i_0 + 4] [i_4] [i_5] = ((/* implicit */int) arr_5 [i_0 - 1] [i_3] [i_4]);
                    }
                } 
            } 
            arr_24 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1292839583U)) ? (((((/* implicit */_Bool) 134217735LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0 + 1]))) : (3002127713U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))))) != (((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_0])))))));
        }
        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 4) /* same iter space */
        {
            arr_27 [i_0] [i_6 + 2] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0]);
            arr_28 [i_0] [i_0] = ((/* implicit */unsigned int) (~((-((~(((/* implicit */int) (short)32767))))))));
            arr_29 [i_6] = ((/* implicit */unsigned long long int) max(((+(arr_26 [i_0 - 1] [i_6]))), (((((/* implicit */int) ((short) arr_17 [i_0] [i_6 + 1] [i_6 + 1]))) / (((/* implicit */int) ((((/* implicit */_Bool) -134217743LL)) && (((/* implicit */_Bool) arr_4 [i_6])))))))));
            arr_30 [i_0] [i_6 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-2))));
        }
        arr_31 [i_0] = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
        arr_32 [i_0] = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0 + 2] [i_0]))))));
    }
    var_20 += var_3;
    var_21 = ((/* implicit */unsigned long long int) var_1);
}
