/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73925
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (unsigned short)51146))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned long long int) var_13)))));
        var_17 = ((/* implicit */unsigned int) (short)1);
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) -1351538632);
        arr_5 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)0)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)65507)) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) <= (((/* implicit */int) arr_13 [i_2] [i_2] [i_2])))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((3807267376U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6341357447287231335LL)) ? (((/* implicit */int) arr_14 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1])) || (((/* implicit */_Bool) (unsigned short)51169)))))));
                                var_21 = ((/* implicit */short) (unsigned char)191);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) -1562852508)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (3807267358U)))))));
                }
            } 
        } 
        arr_21 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1])) == (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 + 1]))));
    }
    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1071644672)) ^ (var_9)))) ? (var_11) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17969))) % (17716633737813076432ULL))) >= (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32387))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        var_24 = ((/* implicit */long long int) ((487699943U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_6])))));
        var_25 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6] [i_6]))) != (487699919U)));
        var_26 ^= ((/* implicit */short) ((((/* implicit */int) (short)32408)) >> (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_7 = 4; i_7 < 8; i_7 += 1) 
    {
        var_27 = ((/* implicit */long long int) min((var_27), (((var_13) ? (((long long int) (short)32387)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (((/* implicit */int) (short)-32371)) : (((/* implicit */int) (unsigned char)65))))) == (var_5)))))))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (((_Bool)1) ? (-4421540315562224273LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))))))));
        arr_27 [i_7] [i_7] = ((((/* implicit */_Bool) (short)-27811)) ? (134217727) : (((/* implicit */int) (unsigned short)5837)));
        var_29 = ((/* implicit */_Bool) (unsigned char)191);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) -1586981498)), (arr_15 [i_8] [6ULL] [i_8] [i_8])))) ? (((((/* implicit */_Bool) (short)128)) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (487699904U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7597))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11274))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19248))))))));
        var_31 -= ((/* implicit */unsigned char) (short)-15777);
        arr_31 [(signed char)8] |= ((/* implicit */short) ((((/* implicit */_Bool) -4704303617641695725LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)18))));
    }
    var_32 ^= ((/* implicit */unsigned int) var_13);
}
