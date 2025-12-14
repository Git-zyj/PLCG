/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87016
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) var_4))));
        var_16 = ((/* implicit */long long int) ((arr_3 [i_0]) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_2 [i_0]))));
    }
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((var_2), (((/* implicit */unsigned char) ((((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) (unsigned short)0))))) <= (((((/* implicit */_Bool) var_1)) ? (-7369086175107139754LL) : (-7369086175107139754LL)))))))))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2081784928)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) (unsigned short)20367)) : (((/* implicit */int) var_2))))) : (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_5 [i_1]) : (((/* implicit */int) var_13)))))));
                arr_9 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_5 [i_2])) ? (13U) : (((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_2]))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_2])), (4294967292U)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_10)))))) ? (((int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -741068115)) ? (arr_5 [i_1]) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) max(((unsigned short)52181), (((/* implicit */unsigned short) var_2))))) : (max((arr_5 [i_2]), (arr_6 [i_2] [2LL] [i_1]))))))))));
                /* LoopNest 3 */
                for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) 
                        {
                            {
                                arr_17 [i_1] [1] [i_3] [(unsigned short)0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) (unsigned short)65516)), (var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52193)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) > (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))) * (13U))))))) : (max((var_14), (((/* implicit */unsigned int) arr_7 [i_3]))))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (unsigned char)19)), (max((((/* implicit */unsigned long long int) 0LL)), (arr_15 [10LL] [i_2] [i_2] [i_2] [i_5] [i_2] [i_5]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
                                var_20 = ((/* implicit */unsigned short) min((-3254971598420078351LL), (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_5] [i_4] [i_3] [i_2] [i_1]))))), (max((1997035522U), (((/* implicit */unsigned int) arr_12 [12ULL] [12ULL] [i_4] [(_Bool)1])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
