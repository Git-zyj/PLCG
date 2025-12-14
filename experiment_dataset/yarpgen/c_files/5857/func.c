/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5857
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
    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_15 = (~((~(min((85013606U), (((/* implicit */unsigned int) var_11)))))));
                                var_16 = ((/* implicit */short) min((var_16), (((short) min((((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))), (min((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0])), (var_4))))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 - 4] [(_Bool)1] [i_0 + 1] [i_4 - 3] [i_4])) == (((/* implicit */int) arr_9 [i_1 - 4] [i_1] [i_0 + 1] [i_4 + 1] [i_4]))))) | (((((/* implicit */_Bool) -1330914400268233449LL)) ? (((/* implicit */int) arr_9 [i_1 - 4] [i_1 - 4] [i_0 + 1] [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_0 + 2] [i_4 + 2] [i_4 + 2]))))));
                                var_18 = ((/* implicit */unsigned int) (!(var_11)));
                                arr_10 [(_Bool)1] [(_Bool)1] [i_4] [i_3] = ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [i_0] [i_0 - 1])), (var_9)))) + (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))), (var_10))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_15 [(signed char)3] [(signed char)3] [(unsigned short)9] [i_1 + 1] [11U] [i_1] = ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
                            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_0 + 1] [i_1 - 4] [i_2] [i_5]))));
                        }
                        for (signed char i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13730)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_1 + 1] [i_7 + 1])) : (((/* implicit */int) arr_14 [i_0] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_1 - 3] [i_7 + 2]))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_7] [i_7 + 2] [i_1 - 4] [i_0 + 1])) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_7 - 1] [i_0 + 1]))));
                        }
                        arr_18 [i_0] [i_0] [i_1] [(unsigned short)6] [(_Bool)1] [(short)2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0 + 2] [i_0] [i_1] [i_1 - 2]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (unsigned short)37834)))) : (((/* implicit */int) (unsigned short)27702)))), (((/* implicit */int) (!((_Bool)1))))));
                        var_23 = ((/* implicit */unsigned int) max((min((arr_8 [i_1 - 4] [i_0 + 1] [i_2]), (arr_0 [i_1 - 1]))), (arr_0 [i_1 - 2])));
                    }
                    var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) ((short) arr_17 [i_0] [i_0 + 2] [i_1 + 1] [i_0 + 2] [i_1 + 1])))));
                    arr_23 [9LL] [(signed char)9] [(_Bool)0] [9LL] = ((/* implicit */long long int) ((signed char) ((unsigned short) arr_16 [i_0 + 1] [i_1 - 3])));
                    var_25 = ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [(short)1] [i_0 + 1] [i_1 - 1]))));
                }
            } 
        } 
    } 
    var_26 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> ((((+(var_2))) - (3172411963U))))))));
}
