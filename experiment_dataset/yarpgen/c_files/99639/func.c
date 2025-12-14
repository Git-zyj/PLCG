/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99639
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) ((3006620898874126662ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))))))) : (max((((/* implicit */long long int) arr_3 [i_0])), (arr_2 [i_0] [(short)12] [i_0])))))) && (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_2 [(unsigned short)13] [i_1] [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) == (4U))))));
                                var_23 = ((/* implicit */long long int) min(((signed char)-110), (((signed char) ((unsigned short) (signed char)-110)))));
                                var_24 += ((/* implicit */int) arr_4 [i_3]);
                                var_25 += ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-103))));
                            }
                        } 
                    } 
                    arr_10 [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2871939023263736348ULL)) ? (18446744073709551615ULL) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_2]), (arr_0 [i_0]))))) : (18446744073709551615ULL)));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_1 [i_1]))));
                    arr_11 [i_0] [i_0] [i_2] |= ((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL));
                    var_27 -= ((/* implicit */signed char) ((((((/* implicit */int) max(((unsigned char)180), (((/* implicit */unsigned char) (signed char)-49))))) <= (((/* implicit */int) (unsigned char)76)))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_19))))), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                }
                var_28 -= ((/* implicit */unsigned long long int) ((unsigned int) min((min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)5])), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_1])) << (((18446744073709551610ULL) - (18446744073709551596ULL)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (unsigned char)37))) >= (((/* implicit */int) max(((unsigned short)27502), (((/* implicit */unsigned short) (short)-11385)))))));
        arr_14 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1824905608)) && (((/* implicit */_Bool) (signed char)115))))) != (((/* implicit */int) ((_Bool) (unsigned char)219)))))) == (((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) ((signed char) arr_7 [i_5] [i_5] [i_5] [i_5 - 1]))) : (((/* implicit */int) ((unsigned short) (signed char)48)))))));
        var_30 += ((/* implicit */unsigned short) var_5);
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 1; i_7 < 10; i_7 += 1) 
        {
            var_31 -= ((/* implicit */unsigned int) ((unsigned long long int) 10058771249321101353ULL));
            arr_19 [i_6] = var_5;
        }
        var_32 *= ((/* implicit */int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-14055)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))))))));
        var_33 |= ((/* implicit */signed char) var_11);
        arr_20 [i_6] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_6]))));
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) arr_6 [(_Bool)1] [i_6] [i_6] [i_6] [i_6] [i_6]))));
    }
}
