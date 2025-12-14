/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63131
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
    for (long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_16 = (((~((~(arr_3 [11U] [12LL] [(unsigned short)12]))))) << ((((~(((/* implicit */int) (_Bool)1)))) + (10))));
                            arr_11 [i_3] [(short)10] [12U] [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [(unsigned char)2])) : (((/* implicit */int) arr_7 [11LL] [(_Bool)1] [1LL]))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                var_17 = ((arr_7 [i_0 - 1] [(short)11] [18LL]) ? (((/* implicit */int) (!(arr_7 [i_0 - 1] [(unsigned char)23] [17ULL])))) : (((/* implicit */int) min((arr_7 [i_0 - 1] [(signed char)2] [18LL]), (arr_7 [i_0 + 1] [22LL] [(signed char)1])))));
                                var_18 = (-(((((/* implicit */int) (short)25333)) >> (((/* implicit */int) (_Bool)1)))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 2; i_5 < 23; i_5 += 1) 
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10))))) <= (((/* implicit */int) (unsigned short)39845))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25691)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (signed char)28))))) ? (((/* implicit */int) arr_14 [6LL] [(unsigned short)3] [i_0 + 1] [i_5 - 2])) : (((/* implicit */int) (_Bool)1)))))));
                                var_21 = ((/* implicit */short) ((int) var_9));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (+(((/* implicit */int) arr_16 [i_0 + 1] [i_2])))))));
                            }
                        }
                    } 
                } 
                var_23 *= ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_4 [(unsigned char)19])), (var_9)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned short)17] [(_Bool)1] [(unsigned char)19] [14LL]))) % (arr_3 [7ULL] [(_Bool)1] [(short)4]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -583522868746004358LL)))))));
}
