/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97063
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((6002187294949260459ULL) ^ (((/* implicit */unsigned long long int) var_12)))) : (max((12444556778760291156ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) ? (((long long int) max((arr_0 [i_0]), (var_8)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 12444556778760291158ULL))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 |= ((/* implicit */int) min((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) : (var_12))), (((/* implicit */long long int) arr_6 [i_0] [i_0])))), (((/* implicit */long long int) var_2))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 + 2] [i_3 - 1] [i_2]))));
                            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))) ? ((~(12637955543557206479ULL))) : (((/* implicit */unsigned long long int) (-(-361100040107414650LL))))));
                            var_23 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (12444556778760291153ULL) : (((/* implicit */unsigned long long int) var_11)))));
                            arr_14 [i_0] [i_4 - 1] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_4] [i_4 - 1] [i_3 + 3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) arr_11 [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 + 1] [5LL]))));
                        }
                        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)147))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) var_6)))) : (((var_2) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)6])) : (((/* implicit */int) var_4))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)111)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) (unsigned char)141)) ^ (((/* implicit */int) (unsigned char)116))))))));
                        arr_17 [i_5] [i_2] [i_0] [i_0] = ((/* implicit */short) (((~(((/* implicit */int) max((var_1), (arr_16 [i_5] [i_2] [i_1] [i_0])))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (short)-4822))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5]))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (var_11) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_13 [i_0] [i_1] [i_2] [i_6] [i_6 + 2] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_6])))))) : (min((var_3), (((/* implicit */long long int) var_5))))))));
                                arr_25 [i_1] [i_1] = ((/* implicit */short) -8802961752556096783LL);
                                arr_26 [i_0] [i_6 - 1] [i_7] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1752601424)) ? (6002187294949260462ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_6] [i_6 - 1]))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))) : (arr_13 [i_0] [i_1] [i_7] [i_6] [i_7] [i_7])))))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_22 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 + 2] [i_6 - 2])), (((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_6 + 2] [i_6 - 1] [i_6] [i_6 + 2] [i_7]), (arr_22 [i_2] [i_6 + 2] [i_7] [i_7] [i_7]))))) : (min((max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2])), (arr_24 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)22272)) ? (((/* implicit */int) (short)-32760)) : (788454256))) & (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_17))))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (unsigned char)137)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned char)7] [(unsigned char)7] [(_Bool)1] [(unsigned char)7] [i_0])))))))));
        var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) max((var_10), (((/* implicit */long long int) (_Bool)1))))))));
        arr_28 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) var_12))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) arr_30 [i_8] [i_8]))));
        var_32 = ((/* implicit */signed char) max((((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned short)39858)))) * (min((((/* implicit */int) (unsigned short)12789)), (var_7)))))), ((~((~(var_11)))))));
    }
    var_33 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (var_7) : ((~(var_15))))), ((((!(((/* implicit */_Bool) var_7)))) ? (min((((/* implicit */int) var_16)), (var_7))) : (((/* implicit */int) ((_Bool) var_10)))))));
    var_34 = ((/* implicit */signed char) var_10);
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)21256)) && (((/* implicit */_Bool) (short)-21268))));
}
