/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59435
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)32)) : ((-(((/* implicit */int) (signed char)0))))))), (((unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_16))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))) ? (max((((/* implicit */long long int) var_15)), (0LL))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((var_4) > ((-9223372036854775807LL - 1LL)))))));
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) max((-9223372036854775807LL), (((/* implicit */long long int) (unsigned short)39371)))))), (((arr_4 [i_1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_20 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_6 [19])) + (((/* implicit */int) arr_4 [i_2]))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4 - 2])) ? (((/* implicit */unsigned int) arr_14 [i_5] [(signed char)20] [i_2] [i_4 - 2])) : (var_10)));
                            arr_18 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 1] = ((/* implicit */int) ((9223372036854775807LL) == (((-9223372036854775800LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237)))))));
                        }
                        for (long long int i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            arr_21 [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
                            var_22 = ((/* implicit */int) ((unsigned char) var_1));
                            arr_22 [i_2] [i_3] [17U] [i_5] [i_7] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_19 [(short)2] [13LL] [(unsigned short)19])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_7]))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_4] [i_4 - 1] [i_4] [i_4 - 2]) : (arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 - 1])));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_3] [(short)4] [i_4 + 1] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2] [(unsigned char)16] [i_5]))) & (4294967295U)))));
                            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)4))));
                            var_25 = ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 1])) ? (arr_11 [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 2]) : (arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]));
                        }
                        var_26 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (short)9)) > (((/* implicit */int) (signed char)4)))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((394806283U), (((/* implicit */unsigned int) (unsigned short)11058))))) ? (min((126318862U), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((3126302020U) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
    var_28 = ((/* implicit */long long int) (-((~(((/* implicit */int) var_12))))));
    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)85)))))));
}
