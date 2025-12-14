/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60035
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
    var_11 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned char) arr_5 [i_1] [i_1 - 1] [i_1 + 3] [i_1]);
                    var_13 = ((/* implicit */int) arr_1 [i_2 + 1]);
                    arr_6 [i_0] [i_2 - 1] [i_1] [i_2 + 4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))))));
                    arr_7 [i_1] [i_1] [(signed char)12] [i_1] = ((/* implicit */signed char) ((1705735547U) | (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) 1742849026)))) && (((/* implicit */_Bool) -1588298481))))))));
                }
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_1] = ((/* implicit */short) (-(1742849026)));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_3] [4U])) % (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (+(var_6)))) : ((-(3766297506018704059LL)))))) || (((/* implicit */_Bool) ((short) -6132060325536816151LL))))))));
                        var_15 = min((var_4), (var_4));
                        arr_13 [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((max((((/* implicit */long long int) var_2)), ((-(var_5))))) & (max((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (-(var_7))))))));
                        arr_14 [i_1] [i_1] [i_1] [(short)1] = ((/* implicit */unsigned int) var_0);
                        arr_15 [i_0 + 2] [i_1] [i_0] [i_0 + 1] = ((/* implicit */short) var_2);
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 *= ((/* implicit */signed char) var_1);
                        var_17 = 7304738871403783421LL;
                        /* LoopSeq 2 */
                        for (short i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */signed char) var_10)), (arr_0 [i_0] [(unsigned char)11]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -3766297506018704052LL)))))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_18 [(short)16] [i_1 + 3] [i_1 + 2] [i_1])))), (arr_9 [(unsigned short)6] [i_1] [i_3])))))));
                            var_19 = ((/* implicit */unsigned long long int) (short)-11607);
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((((/* implicit */int) arr_12 [i_3])) + (((/* implicit */int) (short)20781))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(var_7)))) - (min((var_5), (((/* implicit */long long int) 774158310U))))))) : (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7)))) ? (min((6854711200220816058ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (447531063U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                        }
                        for (int i_7 = 2; i_7 < 18; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) + (var_7)))) < ((+(min((((/* implicit */unsigned long long int) 13527766U)), (11592032873488735564ULL)))))))));
                            var_22 |= ((/* implicit */long long int) min((((unsigned int) (~(((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_7])) ? (arr_4 [i_0 + 2] [i_0] [i_0]) : (((/* implicit */unsigned int) 479043951))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (-1742849030))) : (((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_0 [i_5] [i_7 + 1])))))))));
                        }
                    }
                    for (long long int i_8 = 2; i_8 < 17; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            var_23 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)42))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_9] [i_8] [i_8] [(short)16] [(short)16]))) : (((unsigned int) arr_23 [i_0 - 1] [i_0 - 1] [i_8] [i_8 + 2] [i_9])))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) ((short) var_5))))))));
                            arr_31 [i_1] [i_1] [i_3] [i_8] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_19 [i_0 + 3] [i_8 - 2] [i_1 - 1] [i_8 + 1] [i_1])) | (((/* implicit */int) var_0))))));
                            var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((var_8) | (var_5)))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_2 [i_1] [i_8]))));
                            var_25 -= ((/* implicit */short) var_4);
                            arr_32 [i_0] [i_8] [i_0] [i_3] [8U] [(_Bool)1] [i_9] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (var_5) : (((/* implicit */long long int) var_6)))))));
                        }
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_26 [i_3]))));
                    }
                    for (int i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        var_27 = ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_34 [i_10 - 1] [i_10] [i_10 + 1] [i_10 - 1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (7304738871403783418LL))) : (((/* implicit */long long int) ((/* implicit */int) (((-(-8995799240163630455LL))) <= (((/* implicit */long long int) (~(((/* implicit */int) (signed char)108))))))))));
                        var_28 = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_0] [i_10 - 1] [i_1]))) : (arr_18 [i_1] [i_3] [i_1] [i_3]))))), (((((/* implicit */_Bool) ((((-8995799240163630445LL) + (9223372036854775807LL))) >> (((var_5) + (8728923691660766809LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8)))));
                    }
                    var_29 ^= ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (signed char)88))))), (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5)))))));
                }
                for (long long int i_11 = 0; i_11 < 19; i_11 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) -479043952)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (signed char)-45)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0] [i_11])))))))))));
                    var_31 = ((/* implicit */signed char) (((~(arr_36 [i_1] [i_1] [i_1 + 1] [i_1 + 3]))) % (((var_8) % (min((((/* implicit */long long int) var_7)), (6132060325536816157LL)))))));
                    arr_40 [i_11] [i_1] = ((/* implicit */unsigned char) ((8995799240163630438LL) == (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                }
                for (long long int i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */short) max((var_32), (((short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_6)))))))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((((arr_37 [i_0 - 1] [i_1] [i_1]) ? (((/* implicit */long long int) var_7)) : (arr_28 [i_1]))), (((/* implicit */long long int) (unsigned short)65523))))));
                    var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_38 [i_0] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_38 [i_0 + 2] [i_1] [i_1 + 4]))))) - (((((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_22 [i_1] [i_0] [i_1] [i_1]))))))));
                    var_35 = ((/* implicit */int) ((unsigned short) ((var_10) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (short)7936)) : (((/* implicit */int) (unsigned char)116))))))));
                    var_36 = ((/* implicit */int) ((min((((/* implicit */long long int) ((_Bool) arr_34 [i_12] [i_12] [i_12] [i_12]))), (((((var_5) + (9223372036854775807LL))) << (((((-6694365819098439939LL) + (6694365819098439986LL))) - (44LL))))))) == (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) var_9)) ? (arr_24 [i_0 + 1] [i_0 + 1] [18LL] [i_1] [i_12]) : (var_8)))))));
                }
                arr_43 [i_0 + 3] [18U] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6694365819098439923LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1]))) : (var_9))))))));
                var_37 -= ((/* implicit */short) ((((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [4ULL] [i_0 + 1]))))) << (((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [18LL] [i_0 - 1]))))))));
            }
        } 
    } 
}
