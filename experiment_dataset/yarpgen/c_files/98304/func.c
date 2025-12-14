/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98304
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) (((-((~(((/* implicit */int) arr_3 [i_0 - 1])))))) * (((int) (!(((/* implicit */_Bool) 8441572419362756345ULL)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_3 - 1])))))) : (((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_2] [i_3 - 1] [i_3 + 1])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (9670941152698179950ULL))) : (((/* implicit */unsigned long long int) (-(1240646494U))))))));
                        var_15 = ((/* implicit */unsigned short) (((((~(arr_6 [i_0] [i_0]))) | (((((/* implicit */int) arr_5 [i_3] [i_0] [i_0])) % (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))) + (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_2] [i_3] [12U] [i_2])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) -1402673439)))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */int) (((!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3])))))) && (((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) var_5))))))));
                            arr_17 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)16213)) : (((/* implicit */int) (unsigned char)40)))), (((((/* implicit */_Bool) 13414629136904778160ULL)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_4])) : (1480235881)))))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_0 - 2]))) | (((unsigned int) arr_16 [i_0]))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((var_1) >= (var_7))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)164), ((unsigned char)48))))) : (14628363148253319859ULL)))) ? (((((/* implicit */_Bool) (~(1916697101)))) ? (((((/* implicit */_Bool) var_2)) ? (6124676105072515454ULL) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0 + 1] [i_0] [i_4])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_1] [i_0]))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_3] [i_2] [i_0]))) : ((-(((/* implicit */int) arr_5 [i_1] [i_0] [i_4])))))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                            var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_3 - 1] [i_5] [i_3 - 1])) ? (766858968) : (((var_7) | (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)1022)))) / (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) arr_9 [i_0] [i_5] [i_5] [i_5])) : (((/* implicit */int) (short)31909))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(unsigned short)2])) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (short)-16151)) ? (var_12) : (((/* implicit */unsigned long long int) arr_15 [i_3] [i_5])))) : (((/* implicit */unsigned long long int) ((var_3) >> (((((/* implicit */int) arr_5 [(short)2] [i_5] [i_3])) - (3755))))))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((122282063) - (122282046))))))));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)511)))));
                        }
                    }
                } 
            } 
        } 
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)28461)) ? (13414629136904778176ULL) : (((/* implicit */unsigned long long int) 1619268752)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2]) : (((/* implicit */int) arr_19 [(unsigned char)9] [i_0 + 4] [6U] [(short)8] [i_0 + 4] [i_0])))))))) ? (max((((unsigned int) var_12)), (((/* implicit */unsigned int) (+(var_7)))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_9 [i_0] [i_0] [8] [i_0])))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
        var_23 ^= ((/* implicit */_Bool) (short)12940);
        arr_27 [i_6] [i_6] |= ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26811))) : (4168889136U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)252)) && (((/* implicit */_Bool) (unsigned char)255)))))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 4) 
    {
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_7 + 1] [i_7 - 1])) + (((/* implicit */int) arr_22 [i_7] [i_7 - 1]))));
        arr_31 [i_7] [(unsigned short)0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)242))))) : ((+(((/* implicit */int) (_Bool)1))))));
        var_25 = ((/* implicit */unsigned char) arr_28 [i_7 + 1]);
        arr_32 [i_7] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
        var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_22 [i_7 - 1] [i_7 + 1]))));
    }
    for (int i_8 = 3; i_8 < 12; i_8 += 2) 
    {
        var_27 -= ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_33 [i_8 - 3] [i_8 + 1])))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_36 [i_8 - 2])) || (((/* implicit */_Bool) arr_9 [(unsigned char)2] [i_8] [(_Bool)1] [i_8 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((-1480235881), (((/* implicit */int) (short)13176))))))))) : (((((/* implicit */_Bool) (unsigned short)65519)) ? (1632175960U) : (((/* implicit */unsigned int) 1480235863)))))))));
    }
    var_29 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (var_3)))))) ? (((((/* implicit */_Bool) max((var_9), ((-2147483647 - 1))))) ? ((-(var_12))) : (((/* implicit */unsigned long long int) (-(2088384298U)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)252)))) ? ((+(3982554773U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)46)) + (((/* implicit */int) (_Bool)1))))))))));
    var_30 -= ((/* implicit */unsigned short) var_12);
    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1714411848)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)36471)))) * (var_9))))));
    var_32 &= ((((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)1))))))) ^ (var_11));
}
