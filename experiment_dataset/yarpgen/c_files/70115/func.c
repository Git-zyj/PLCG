/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70115
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64885)) ? (min((((/* implicit */unsigned int) (unsigned short)18118)), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)650)))));
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_14 -= ((/* implicit */unsigned long long int) (unsigned char)229);
                        var_15 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_1))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) * (((((/* implicit */int) (unsigned short)46504)) / (((/* implicit */int) var_2)))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_16 = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_2] [i_0]))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_12 [(unsigned short)6] [i_1] [i_2] [6ULL])))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_4] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [(unsigned short)2])) : (((/* implicit */int) (unsigned short)64885))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((var_8) >= (((/* implicit */unsigned long long int) -3882830772413277308LL)))) ? (((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67)))))) : (((/* implicit */int) var_6)))))));
                        var_18 = ((/* implicit */unsigned char) (short)22772);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)46504)) ? ((~(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) -582139920)))))) : (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1] [i_2])), (arr_3 [i_1]))) >> ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22773))) : (0LL))))))));
                        var_20 |= ((unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_14 [i_5] [i_5])));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_9)))));
                        var_22 += ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
                    }
                    var_23 = ((/* implicit */int) (_Bool)0);
                    arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (10546855593681742887ULL)));
                    arr_19 [i_2] [i_1] [(unsigned char)5] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_14 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_1] [(unsigned char)10] [i_2])), (var_8))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2])) ? (((/* implicit */int) (unsigned short)14409)) : (((/* implicit */int) (unsigned char)0))))) != (18446744073709551615ULL)))))));
                }
                var_24 = ((/* implicit */_Bool) max(((~(0ULL))), (((/* implicit */unsigned long long int) max((-1711193736), (((/* implicit */int) var_7)))))));
                arr_20 [i_0] [i_0] = ((/* implicit */long long int) ((((unsigned long long int) ((unsigned long long int) (unsigned short)64885))) == (((/* implicit */unsigned long long int) (+((-(arr_17 [10U]))))))));
                var_25 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (-(-1)))) ? (max((6495855395875794507ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) arr_17 [6ULL]))))));
            }
        } 
    } 
}
