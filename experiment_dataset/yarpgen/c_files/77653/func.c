/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77653
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
    var_14 = ((/* implicit */unsigned short) ((short) var_13));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((short) var_5)), (max(((short)-19452), (((/* implicit */short) (unsigned char)194))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-7041))))) == ((~(var_12)))))) : (max((((/* implicit */int) (short)23088)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))));
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_2) ? (8907836531875287815LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) max((max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 1])))), ((~((+(((/* implicit */int) var_13))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_4] [(unsigned short)10] [(_Bool)1] = ((/* implicit */int) (+((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2587094607U)))))));
                                var_17 = ((/* implicit */unsigned char) max(((((+(arr_13 [i_0] [i_1] [i_1] [i_3] [i_0]))) ^ (((var_2) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32753))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [(unsigned char)10] [(unsigned char)10] [i_1] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [7LL] [(unsigned short)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_12))))))));
                                arr_17 [i_4] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_3] [(unsigned short)2] [i_0]))) == (arr_13 [i_4] [9U] [i_2] [9U] [9U])))) - (((/* implicit */int) ((unsigned char) arr_4 [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_3] [1U])))) : (max((((/* implicit */unsigned long long int) (+(3874726333U)))), (var_3)))));
                                arr_18 [i_0] [i_1] [i_4] [i_3] [(short)10] = var_13;
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((short) (unsigned short)21));
                }
            } 
        } 
    } 
}
