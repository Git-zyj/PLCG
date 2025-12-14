/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69167
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)249)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (short)-32758)), (1270393576)))) : (min((((/* implicit */unsigned int) (unsigned char)128)), (3351116414U)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)141)))))));
                    var_20 &= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) 379949492U)))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 943850882U)) ? (arr_6 [i_0]) : (17541400995570324069ULL)))))))));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_11 [i_3] [i_1] [i_0] = ((/* implicit */int) min(((unsigned char)105), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_3 - 1])) || (((/* implicit */_Bool) arr_10 [i_0] [i_3 - 1])))))));
                    arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)124), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)62838)) && (((/* implicit */_Bool) (unsigned short)16256)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_4 [i_3] [i_1] [(unsigned short)6]))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_1] [i_3 - 1] [i_1]) >= (((/* implicit */long long int) min((3351116416U), (((/* implicit */unsigned int) var_18)))))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_17 [(short)8] [i_3] [(short)8] [i_5 + 3] = ((/* implicit */long long int) ((int) var_1));
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)117)) ? (943850880U) : (3351116416U)))), (min((-3796044912409672478LL), (((/* implicit */long long int) (unsigned short)49278)))))))));
                                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_2))))) ? (max((((long long int) arr_9 [i_4] [i_1] [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) arr_15 [i_5] [i_4] [2ULL] [i_0] [i_0])) : (((/* implicit */int) arr_15 [14U] [14U] [i_0] [2LL] [i_5 + 3]))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_21 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 9351298928802993221ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)155)) % (((/* implicit */int) (unsigned char)89))))) : (((((/* implicit */_Bool) (short)7171)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_4 [7ULL] [i_0] [i_6]))))))));
                    var_23 = ((/* implicit */unsigned char) (+(2031616LL)));
                    arr_22 [i_0] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)7171)))) ? ((((_Bool)1) ? (arr_9 [i_0] [i_1] [i_6 - 1]) : (((/* implicit */unsigned int) var_16)))) : (((/* implicit */unsigned int) ((int) arr_8 [i_6])))))) || ((!(((/* implicit */_Bool) arr_6 [i_6 - 1]))))));
                    arr_23 [i_0] [i_0] [i_6] = min((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_6 - 1] [(unsigned short)15])) || (((/* implicit */_Bool) arr_3 [i_6 - 1] [i_6 - 1])))), ((!(((/* implicit */_Bool) (short)-2065)))));
                }
                for (short i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)16242)) ? (((/* implicit */int) (unsigned short)49278)) : (((/* implicit */int) (unsigned short)16258)))) : (((/* implicit */int) min(((unsigned short)62838), (((/* implicit */unsigned short) var_0)))))))) ? (((((/* implicit */_Bool) (~(arr_8 [i_1])))) ? (max((((/* implicit */long long int) (short)-14233)), (7182345260229913521LL))) : (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_7]))) | (6455427678986087580LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_7 + 1] [i_7] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_18))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                arr_34 [i_9] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [12] [i_9])) ? (((/* implicit */int) (unsigned short)2684)) : (((/* implicit */int) var_12))))) : ((~(arr_4 [5LL] [5LL] [5LL]))))) << ((((~(((arr_6 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (17062702368861460073ULL)))));
                                arr_35 [i_0] [i_0] [i_0] [i_7] [i_8] [i_8] [i_9] = ((((/* implicit */int) ((arr_29 [i_0] [i_0] [i_1] [i_7] [i_8] [i_9]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16230)))))) + (((/* implicit */int) ((((/* implicit */long long int) 3351116421U)) == (min((((/* implicit */long long int) (short)-14233)), (-7877957416793596899LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_9 [i_7 - 1] [i_7 + 1] [i_7 - 1]), (((/* implicit */unsigned int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (min((((/* implicit */unsigned long long int) (short)14233)), (16279153431788560939ULL))) : (((/* implicit */unsigned long long int) ((long long int) var_8))))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-14230)) && (((/* implicit */_Bool) var_11)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)96)))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned char i_12 = 2; i_12 < 15; i_12 += 3) 
                {
                    for (int i_13 = 1; i_13 < 14; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            {
                                arr_50 [i_0] [i_12] [i_12] [10ULL] [10ULL] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-14234)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_13 - 1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)48594)) : (arr_36 [i_0])))) ? (((((/* implicit */_Bool) (short)14234)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2064))) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) + (((/* implicit */int) arr_46 [i_12])))))))));
                                arr_51 [i_0] [i_12] [i_12] [i_13] = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) (unsigned short)55826))))) | (((/* implicit */int) (!(((/* implicit */_Bool) 484510996)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)14237))) == (943850881U)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)49306)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) max((var_5), ((short)-24013)))) : (((/* implicit */int) ((short) var_17)))))));
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-32759))))) : (702536546168282818LL)));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) (short)-16661)), (-6455427678986087581LL)))));
}
