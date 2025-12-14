/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89514
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) (+((~(3119344274370975179LL)))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_20 |= (!(((/* implicit */_Bool) 1125899906842623LL)));
                            var_21 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0]);
                        }
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_11 [i_2 + 1] [(short)5] [4ULL] [i_0]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2503434705U)) ? (((/* implicit */long long int) 2108795246U)) : (1125899906842601LL))), ((+(var_4)))))), (26388279066624ULL)));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max((max((17217273720756967928ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) 2503434704U)))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((arr_11 [i_2 + 1] [i_2] [i_2 + 1] [i_2]), (arr_11 [i_0] [i_0] [i_2 + 1] [i_5])))), (2503434704U)));
                        var_25 |= ((/* implicit */_Bool) min((-6182594502339763756LL), (((/* implicit */long long int) (unsigned short)0))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [1ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)5971)) == (((/* implicit */int) var_0))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_14 [i_0] [(short)7] [12ULL] [12ULL] [(short)7] [i_7] [12ULL])))))))));
                            var_27 = ((/* implicit */long long int) ((((arr_2 [i_0]) << (0ULL))) == (((/* implicit */unsigned long long int) 4294967290U))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)58)) & (((/* implicit */int) (short)-6740))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */int) ((arr_8 [i_2] [i_2] [i_2 + 1] [(unsigned short)11]) <= (17217273720756967928ULL)));
                            var_30 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2 - 1] [i_6] [i_6 - 1] [(short)9] [i_8] [i_8]))) / (var_18)));
                        }
                    }
                    for (unsigned short i_9 = 2; i_9 < 12; i_9 += 2) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)158)) >> (((((/* implicit */int) (unsigned short)30287)) - (30280)))));
                        var_32 = ((/* implicit */long long int) (+(1791532611U)));
                    }
                    var_33 |= ((/* implicit */long long int) min((((4294967290U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                    var_34 = var_4;
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */long long int) var_2);
    var_36 = ((/* implicit */unsigned long long int) min((max(((+(-6559392006232142524LL))), (((/* implicit */long long int) ((var_4) > (var_4)))))), (0LL)));
}
