/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61964
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7002)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_1 [i_0] [(signed char)18])) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)61)), (arr_0 [i_0] [i_0])))))));
        var_17 = ((/* implicit */short) (-(((unsigned int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_8)))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_4 [(unsigned char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_3 [(signed char)22] [i_1] [i_1]), (var_9))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
            arr_5 [i_0] [(unsigned short)1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)82))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-24851))))), (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [(short)23]))))))));
            arr_6 [i_1] [i_1] [i_1] = arr_2 [i_1] [i_0] [i_0];
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (1760539757U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_13))))))))) ? (((((/* implicit */int) (unsigned char)87)) | (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))) : (((int) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25477))))))));
            arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(0LL))), (((/* implicit */long long int) (unsigned char)87))))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_0 [i_1] [14U])))) ^ (((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((((_Bool) (unsigned short)64985)) ? (var_0) : (((/* implicit */unsigned long long int) 4775244680501793587LL))))));
        }
        for (short i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 241511627)) ? (-4040078421851990332LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)551)))));
            arr_10 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [2LL]))) * (1946945478534101619ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (1716163305U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_2] [i_2 + 4])))))) - (((/* implicit */unsigned int) 0))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 3] [i_2] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_9)) : (1429793308)))) : (max((((/* implicit */unsigned long long int) var_3)), (arr_8 [i_2 + 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0] [i_2]))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)18120)))))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)23))))) : (((((/* implicit */_Bool) var_9)) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) var_15))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_3 [(unsigned short)24] [(short)23] [i_0]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)7905)), (arr_8 [i_2])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)32767))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
        }
        for (short i_3 = 2; i_3 < 21; i_3 += 4) /* same iter space */
        {
            arr_15 [22LL] [22LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3 + 3] [i_3] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)187)) ? (4105072948U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1779))))) : (((/* implicit */unsigned int) 1))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_5 = 2; i_5 < 23; i_5 += 1) 
                {
                    arr_22 [i_4] [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_20 [i_5 + 2] [i_5] [i_0] [i_3] [i_3 - 2])), (-3179511898045735251LL)))) ? (((((/* implicit */_Bool) arr_20 [i_5 + 2] [i_4] [(unsigned char)15] [i_3 + 4] [i_0])) ? (56ULL) : (((/* implicit */unsigned long long int) -1815144680)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))))), (((/* implicit */unsigned long long int) min(((+(1463318266218033017LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5 - 2] [(short)3] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_3 - 2] [i_4])) : (arr_11 [i_5] [i_5 - 1] [i_3 + 3])))))))));
                    arr_23 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_3)) / (((/* implicit */int) arr_19 [i_3 - 1] [i_5 - 2] [i_5])))), (((((/* implicit */int) arr_0 [i_3 - 1] [i_5 - 2])) << (((((/* implicit */int) arr_19 [i_3 - 1] [i_5 - 2] [i_5 - 1])) - (29468)))))));
                    arr_24 [i_5] [i_0] = ((/* implicit */long long int) arr_2 [i_3 + 4] [i_5 + 2] [i_0]);
                }
                arr_25 [i_4] [(unsigned short)23] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0] [17LL])) ? (arr_13 [i_3 + 4]) : (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_13 [i_0]))))))) : (min(((~(var_1))), (((/* implicit */long long int) (short)-16083))))));
            }
            arr_26 [i_0] [i_3 + 2] = ((/* implicit */int) ((((((/* implicit */_Bool) 189894347U)) ? (((arr_9 [13LL]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_0] [i_3 - 2] [i_3] [i_0]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3 - 1] [i_3 + 1] [i_3 + 4] [i_3 + 3])))));
        }
        for (short i_6 = 2; i_6 < 21; i_6 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_6 + 4] [i_6] [i_6 + 4] [i_0])) / (((((/* implicit */_Bool) arr_21 [i_6 + 2] [(short)20] [1ULL] [i_6 - 2])) ? (((/* implicit */int) arr_21 [i_6 + 4] [i_0] [i_0] [i_6])) : (((/* implicit */int) arr_21 [i_6 + 2] [i_6 - 1] [i_0] [i_6 + 4])))))))));
            arr_29 [i_6] [i_0] = ((/* implicit */short) ((min((4105072948U), (((/* implicit */unsigned int) arr_3 [i_6 - 1] [i_6 + 1] [i_6 + 1])))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6 - 2] [i_6 + 1] [i_6 - 2])))));
        }
        arr_30 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (1815144680) : (((/* implicit */int) ((((/* implicit */long long int) 69168469U)) <= (4036114043222393925LL))))))) ? (((long long int) (unsigned char)88)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(316047962))))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_34 [i_7] [i_7] = ((/* implicit */unsigned long long int) (signed char)-89);
        arr_35 [i_7] = ((unsigned char) (unsigned short)35629);
        arr_36 [i_7] [i_7] = var_3;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        arr_41 [i_8] = ((/* implicit */short) ((((/* implicit */int) var_2)) * (((/* implicit */int) (short)15967))));
        arr_42 [i_8] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_33 [i_8]))))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((long long int) (unsigned char)18)))));
    }
    var_24 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-18137)))) : (1843307053))));
}
