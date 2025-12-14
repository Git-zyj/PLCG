/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9841
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
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */short) var_11);
                        var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13)));
                    }
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (var_4) : (var_12)));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_13) : (var_18)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_18))) : (((((/* implicit */_Bool) var_0)) ? (var_15) : (var_13)))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (var_7)))) ? (((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) var_12)))) : (var_18)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            {
                var_25 = ((/* implicit */int) min((var_25), (var_6)));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) 
                {
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (unsigned short)57684)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned char)243))))));
                    arr_17 [13] [i_5] [i_6 - 1] &= ((/* implicit */long long int) var_14);
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (var_13)))) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) var_8)) ? (var_12) : (var_9))))))));
                }
                for (unsigned char i_7 = 4; i_7 < 20; i_7 += 4) 
                {
                    arr_21 [i_7 - 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2144764100)) ? (((/* implicit */int) (unsigned short)63413)) : (((/* implicit */int) (unsigned char)171))));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_11))));
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    arr_24 [i_8] [20] [i_5] [i_4] = ((/* implicit */int) var_13);
                    var_29 = var_4;
                    arr_25 [i_4] [i_4 - 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_17))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (var_5) : (var_7)));
                }
                arr_26 [i_5] = ((/* implicit */short) var_18);
                /* LoopSeq 3 */
                for (unsigned char i_9 = 3; i_9 < 19; i_9 += 3) 
                {
                    var_31 = ((/* implicit */int) var_10);
                    var_32 = ((/* implicit */short) var_18);
                    arr_29 [(unsigned short)20] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_15))) : (((((/* implicit */_Bool) var_14)) ? (var_15) : (var_13)))));
                    arr_30 [i_4] [i_4] [i_5] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63)) ? (1171083727U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))))))))));
                }
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    arr_33 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (short)-28395)) : (((/* implicit */int) (short)7)))) : (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3)))));
                    arr_34 [i_4] [i_4] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_9) : (((((/* implicit */_Bool) var_1)) ? (var_12) : (var_9)))))) ? (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (var_5))) : (((/* implicit */int) var_0))))));
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) var_14))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 4; i_11 < 17; i_11 += 2) 
                {
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_17))));
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3)))))));
                }
            }
        } 
    } 
}
