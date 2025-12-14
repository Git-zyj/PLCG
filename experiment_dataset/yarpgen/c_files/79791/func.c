/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79791
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (max((((/* implicit */unsigned int) var_2)), (var_1))) : (var_12)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) (-(var_19))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [6] [(unsigned char)13] |= ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0]))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_12)))));
                    var_21 = ((/* implicit */unsigned short) ((((arr_6 [i_0] [i_1] [i_2]) > (arr_3 [i_2]))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (arr_3 [i_0])))) : (((((/* implicit */_Bool) max((((/* implicit */signed char) arr_5 [i_0] [i_1] [i_2])), (var_10)))) ? (min((((/* implicit */unsigned int) -99158451)), (18U))) : (((/* implicit */unsigned int) ((-99158448) - (((/* implicit */int) var_0)))))))));
                }
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) var_16)) : (((unsigned long long int) (short)578)))))));
                    var_23 |= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-26716)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max(((-(((int) 2834185391U)))), (((/* implicit */int) var_14)))))));
                                var_25 = ((/* implicit */_Bool) ((int) 591926116562679097LL));
                                var_26 = ((/* implicit */long long int) ((int) arr_12 [i_0] [i_1] [i_0]));
                                arr_15 [12] [7] [12] [12] [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_11)) & (arr_3 [i_0]))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_27 ^= 4187329475U;
                                var_28 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)32763))))) > (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_0 [i_0])))));
                            }
                        } 
                    } 
                }
                var_29 -= ((/* implicit */short) arr_14 [i_0] [i_0] [i_0] [i_0]);
                var_30 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1]))))));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_2 [i_1]);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) ((((18446744073709551613ULL) >= (((/* implicit */unsigned long long int) 4187329483U)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) var_0)))))))))));
    var_32 ^= ((/* implicit */unsigned int) ((unsigned short) var_4));
}
