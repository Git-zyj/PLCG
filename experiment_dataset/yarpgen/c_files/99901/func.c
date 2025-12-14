/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99901
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
    var_15 = ((/* implicit */unsigned long long int) (~(1439592383U)));
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (2075122668U)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] = ((((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) >> (((arr_0 [i_1]) - (1788643114023225242ULL))));
            var_17 = ((/* implicit */signed char) ((arr_0 [i_1]) <= (arr_0 [i_1])));
        }
        arr_5 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) < (0U)))) >= (((/* implicit */int) arr_2 [(unsigned short)8] [(_Bool)1] [(unsigned short)8]))));
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_2] [i_2] [i_2])) <= (((/* implicit */int) arr_2 [i_2] [i_2] [i_2]))))), (max((arr_2 [i_2] [i_2] [i_2]), (arr_2 [i_2] [i_2] [i_2])))));
        arr_10 [(_Bool)1] [i_2] = ((/* implicit */signed char) (_Bool)0);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        arr_13 [(_Bool)1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) || (((/* implicit */_Bool) arr_2 [(unsigned short)12] [i_3] [i_3]))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_3])) - (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (_Bool)1))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_3] [i_3])) >= (((/* implicit */int) arr_2 [i_3] [i_3] [i_3]))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            for (unsigned short i_5 = 2; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_19 [i_5] [i_5] [i_5] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3])) == (((/* implicit */int) arr_8 [i_3]))));
                    arr_20 [i_3] [i_4 + 2] [i_4 + 2] = ((/* implicit */_Bool) ((short) arr_2 [i_4 - 1] [i_5] [i_5]));
                    var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_4 + 1])) + (((/* implicit */int) ((arr_12 [i_3] [4ULL]) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_3]))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        arr_24 [i_3] [i_3] [i_5 + 1] [i_6] [i_4] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_5 + 2] [i_6 + 1])) ? (((/* implicit */int) arr_9 [i_5 + 2] [i_6 + 1])) : (((/* implicit */int) (unsigned short)36985))));
                        arr_25 [i_3] [i_3] [i_5] [i_5] [i_3] = ((/* implicit */signed char) arr_11 [i_3]);
                        arr_26 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)6)) && (((/* implicit */_Bool) (short)-3178))))) < (((/* implicit */int) ((7266074246408298439ULL) > (((/* implicit */unsigned long long int) arr_22 [i_3] [18U])))))));
                    }
                }
            } 
        } 
        arr_27 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))) + (((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (6259313921627228975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [(signed char)13] [(unsigned char)10])))))));
    }
}
