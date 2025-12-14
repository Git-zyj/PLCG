/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98326
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
    var_13 = ((/* implicit */unsigned short) (unsigned char)0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_4])))))));
                                arr_13 [(_Bool)1] [(_Bool)1] [(unsigned short)4] [2LL] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33519)))))) % (4294967295U)))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) var_2)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)65522)) ? (arr_0 [9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) >= (((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_5])))))))));
                    var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) arr_8 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 2147483641)))) : (arr_0 [i_1])))));
                    /* LoopSeq 1 */
                    for (int i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        arr_19 [1ULL] [i_5] [5ULL] [10] = ((/* implicit */int) arr_8 [i_6 + 1]);
                        arr_20 [i_6] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) (+((((+(((/* implicit */int) var_4)))) >> ((((+(2147483647))) - (2147483644)))))));
                        var_17 = ((/* implicit */int) (!((!(arr_8 [i_6 - 2])))));
                    }
                    var_18 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) (unsigned short)65511)))));
                    arr_21 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */short) (~((+(((/* implicit */int) arr_7 [i_5] [(_Bool)1] [i_1] [i_1] [(signed char)11]))))));
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    arr_24 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_7);
                    var_19 = ((((/* implicit */_Bool) 7049310378381308609LL)) ? (((((/* implicit */_Bool) (short)384)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4461))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(5979370520682768750ULL))))));
                    var_21 = ((/* implicit */unsigned short) arr_2 [11] [12]);
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) var_7)), ((~(((/* implicit */int) var_9))))));
    var_23 = ((/* implicit */unsigned short) (short)384);
}
