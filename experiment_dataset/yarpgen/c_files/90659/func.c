/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90659
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
    var_19 = var_12;
    var_20 += ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) var_12)) * ((+(var_8)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((arr_6 [i_0] [i_0] [12] [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [20] [i_1 + 1]))) : (arr_6 [(_Bool)1] [i_1 - 1] [i_1] [i_1])))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((13874417334744253439ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) (unsigned short)22995);
                    arr_9 [(signed char)8] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((((/* implicit */_Bool) 3243742179660420005LL)) ? (2335623376362001721ULL) : (((/* implicit */unsigned long long int) 140737488355327LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -140737488355327LL)))))))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_2])) : (((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_2])))))));
                    arr_10 [i_0] [i_0] &= ((/* implicit */unsigned long long int) (signed char)112);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_3 [i_0]) ? (((/* implicit */int) (short)18979)) : (((/* implicit */int) arr_0 [i_0] [(short)20])))), (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [20] [i_0]))))))))));
        var_23 *= ((/* implicit */signed char) 4572326738965298177ULL);
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        arr_19 [i_0] [i_4] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) min((2335623376362001721ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((unsigned int) arr_6 [i_0] [i_3] [i_4] [(signed char)18])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [13ULL] [(unsigned short)13]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_4] [i_5])))));
                        var_24 *= (!(((/* implicit */_Bool) (signed char)21)));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_0] [i_3])) / (((/* implicit */int) arr_15 [i_3] [i_4] [i_4]))))))) ? ((~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) arr_3 [i_4]))))))) : (((/* implicit */int) arr_15 [i_0] [i_4] [i_3]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        for (signed char i_7 = 4; i_7 < 11; i_7 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned long long int) arr_5 [i_7] [i_7 - 3]);
                var_27 ^= ((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) (short)4859)) ? (arr_21 [i_6] [i_7]) : (((/* implicit */unsigned long long int) 200436676462895657LL)))) << (((4087504698U) - (4087504658U))))));
                arr_24 [i_6] = -1058396704;
                var_28 = ((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_7] [i_6] [i_6])) ? (arr_20 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (12942914702111544507ULL))));
                arr_25 [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((long long int) arr_3 [i_6]));
            }
        } 
    } 
}
