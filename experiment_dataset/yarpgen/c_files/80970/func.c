/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80970
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
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) (short)-25938)) : (((/* implicit */int) var_1))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0 + 1]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((((/* implicit */int) var_3)) + (2147483647))) >> (((arr_1 [(unsigned short)9]) - (13844221027209838918ULL)))))))) ? ((-(arr_0 [i_0 - 2]))) : ((-((+(((/* implicit */int) var_2))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_18 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) (unsigned short)0))) | (((unsigned long long int) arr_5 [i_1] [i_2])))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_5 [i_2] [i_1])) - (43901)))))) ? (((/* implicit */int) max(((short)-26284), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)32736)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_1))))))));
        }
        var_20 = ((/* implicit */unsigned short) (~(var_4)));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_9 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -943543838)))))) : (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (4270297693407711580LL)))));
        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(arr_8 [i_1] [(unsigned short)5] [(short)10])))) && ((!(((/* implicit */_Bool) arr_7 [(short)7] [i_1] [2LL])))))) ? ((+(((int) arr_6 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_4))))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 12; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_21 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_11)) | (1839305840U)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) var_14))))))));
                                arr_26 [i_3] [i_7] [i_5] [i_6] [i_7] [i_7] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1330))) % (arr_23 [i_6 - 1] [9ULL] [i_6] [13])));
                            }
                        } 
                    } 
                    arr_27 [i_3] [i_3] = ((/* implicit */unsigned int) ((signed char) var_9));
                }
            } 
        } 
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_4))));
    }
    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */short) (signed char)122)), (((short) (short)1330)))))));
        arr_32 [i_8] [i_8] = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    }
    var_26 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
    var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) var_7)))))) ? (((((((/* implicit */_Bool) 1651945859982806408LL)) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) var_11)) : (max((var_14), (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-19108)))))))) > (max((((/* implicit */long long int) max((var_1), ((signed char)79)))), (min((1143914305352105984LL), (((/* implicit */long long int) (short)1330))))))));
    var_29 = ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (-9223372036854775807LL - 1LL))))))), (((short) (~(((/* implicit */int) (short)13402)))))));
}
