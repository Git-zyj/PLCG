/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65399
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
    var_10 &= ((/* implicit */signed char) var_6);
    var_11 = ((/* implicit */unsigned int) (((((+(((/* implicit */int) (signed char)64)))) * (min((var_5), (((/* implicit */int) (short)0)))))) | (max(((+(((/* implicit */int) var_9)))), (((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 + 1] [i_0] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)20927))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_9 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_8)))));
                    arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_4)))) || (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20927))))) && ((!(((/* implicit */_Bool) var_9))))))));
                    arr_11 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)34598), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)20907)))))))) ? ((+((+(27U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (max((((((/* implicit */long long int) ((/* implicit */int) var_2))) * (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)33)) && (((/* implicit */_Bool) var_9)))))))));
                }
                for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_15 [i_0] [i_1] [5] [i_0] = ((/* implicit */int) 2147483647ULL);
                    arr_16 [i_1] = ((/* implicit */unsigned short) max(((unsigned char)33), (((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) : (17824049896153657172ULL))))));
                    var_12 = (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8))))) : ((+(((/* implicit */int) var_9)))));
                    var_13 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) 27U))))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (_Bool)1))))));
                    var_14 = ((/* implicit */short) var_0);
                }
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-1))));
                    arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_6)), ((+(min((((/* implicit */unsigned int) 33554432)), (27U)))))));
                    var_16 &= ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned short) (short)892)), ((unsigned short)20913))));
                }
                arr_21 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_8), (var_9))))))) || (((/* implicit */_Bool) var_4))));
                var_17 = ((/* implicit */unsigned short) var_9);
                arr_22 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 622694177555894444ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-893))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (max((var_8), (var_3)))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_8))));
}
