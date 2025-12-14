/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59505
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
    var_12 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) 2007708175U))))) ? (((/* implicit */long long int) ((342029157U) << (((var_5) + (7264063715259870931LL)))))) : (((long long int) var_11)))));
    var_13 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_6)))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((var_6) / (((/* implicit */long long int) var_10))))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) -7912967449697172082LL))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))), (((1216639884U) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((arr_1 [i_0] [i_0]) ? (((2007708175U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        var_15 -= ((/* implicit */unsigned int) max((((/* implicit */short) max((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (var_7)))), (((short) arr_1 [i_0] [7LL]))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (9223372036854775797LL) : (((/* implicit */long long int) 3952938118U))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_4 [11ULL] [11ULL]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) ((3497049351U) << (((var_9) - (8977891257887238281LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) : (var_1)))));
                        arr_11 [i_0] [i_1] [i_1 + 1] [i_3] = arr_4 [i_0] [i_0];
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [0LL]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_7 [i_0] [5U] [i_1] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 2007708175U)))) : ((-(var_5)))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 1])) ? (max((((/* implicit */unsigned int) (short)30132)), (arr_15 [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((4294967278U), (((/* implicit */unsigned int) arr_14 [i_4] [i_4])))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            for (unsigned char i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                {
                    arr_22 [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_15 [i_6 - 1] [i_5 + 2]), (arr_15 [i_6 - 1] [i_5 + 4])))) ? (((/* implicit */long long int) (((+(arr_15 [i_6 + 1] [i_4]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (9223372036854775797LL)));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                arr_30 [i_4] [i_4] [i_6 + 1] [10ULL] [i_6 + 1] = ((/* implicit */short) var_5);
                                var_18 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((3952938113U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */unsigned int) arr_18 [i_4] [i_4]);
                }
            } 
        } 
        arr_31 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_23 [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 2])) << (((((((/* implicit */_Bool) (short)-18658)) ? (2287259120U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8649))))) - (2287259109U))))), (((/* implicit */int) (short)-1945))));
        arr_32 [i_4] = ((/* implicit */long long int) var_3);
    }
}
