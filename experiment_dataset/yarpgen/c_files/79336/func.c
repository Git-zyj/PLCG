/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79336
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) (unsigned char)66);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) max((((((/* implicit */int) arr_8 [i_0] [i_1])) - (((/* implicit */int) var_8)))), (((/* implicit */int) var_3))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (short)-1))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((max(((~(((/* implicit */int) arr_0 [i_3])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))))), ((~(((((/* implicit */int) (short)15)) + (((/* implicit */int) (unsigned char)255)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 8; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((max((((/* implicit */int) var_9)), (((((/* implicit */int) var_5)) & (((/* implicit */int) var_3)))))), (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            {
                                arr_23 [i_6] [i_8] [i_6] [i_6] [i_6] [i_8] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10220)) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)-73)) : (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_13 [i_4] [i_5])))))), (((/* implicit */int) arr_5 [i_4]))));
                                var_16 -= ((/* implicit */signed char) (((~((+(((/* implicit */int) var_3)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_5])))))));
                                arr_24 [i_4] [i_8] [i_6] [i_7] [i_7] = ((/* implicit */short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)250))));
                                var_17 -= max((((/* implicit */short) (_Bool)1)), ((short)10));
                                arr_25 [i_4] [i_8] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)6))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned char) (unsigned short)541);
                            var_19 += ((/* implicit */short) arr_22 [i_4 + 1] [(unsigned char)4] [i_10]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)43)) << ((((((~(((/* implicit */int) (short)22385)))) | (((/* implicit */int) (unsigned short)40852)))) + (16499)))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-22020)))) ? (((/* implicit */int) min((var_12), (var_10)))) : (min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            {
                                arr_45 [i_11] [i_14] [i_13] [13LL] [i_11] [i_11] = ((/* implicit */short) var_12);
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-46)) ? (min((((/* implicit */long long int) arr_40 [i_12] [i_13] [(unsigned short)11] [i_15])), (7900882179207381142LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55797)) && ((_Bool)1))))))), (min((6191383784627969584LL), (((/* implicit */long long int) ((short) var_4))))))))));
                                var_23 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_38 [(short)6] [(short)6] [(short)6] [i_11])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */int) (short)23513)) == (((/* implicit */int) ((unsigned short) var_2)))))) : (((/* implicit */int) max((var_8), (((/* implicit */signed char) arr_39 [(short)12])))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_16 = 0; i_16 < 22; i_16 += 3) 
    {
        for (signed char i_17 = 3; i_17 < 20; i_17 += 1) 
        {
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) arr_38 [20LL] [i_16] [(_Bool)1] [i_17]))) : ((-(((/* implicit */int) (short)0))))))), (min((-9223372036854775802LL), ((-9223372036854775807LL - 1LL)))))))));
                var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_47 [i_16] [i_16]))));
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min(((unsigned short)18358), (((/* implicit */unsigned short) (signed char)0)))))));
                arr_52 [i_16] = ((/* implicit */_Bool) arr_42 [i_17] [i_17] [i_16] [i_16]);
            }
        } 
    } 
}
