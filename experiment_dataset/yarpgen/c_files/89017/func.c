/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89017
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))) * (17890990714557360429ULL)))) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-8445804644128552246LL))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_0] [7U] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned char)146))))) ? (arr_7 [i_0] [(unsigned short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_2 [i_0 - 1]))))))));
                        var_20 = ((/* implicit */signed char) (~(((((/* implicit */int) var_9)) & (((/* implicit */int) arr_5 [i_3 - 1] [4LL] [i_3 + 2]))))));
                        var_21 += ((/* implicit */short) max(((+(((/* implicit */int) arr_11 [i_3 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_18), (max((((/* implicit */unsigned short) var_9)), (arr_11 [i_0])))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16354148772969579182ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) 548365027U))))))) : (((((/* implicit */int) max((var_14), (var_2)))) & (((/* implicit */int) arr_4 [(unsigned short)5] [i_1]))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (2092595300739972438ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))));
                    }
                    /* vectorizable */
                    for (short i_4 = 3; i_4 < 11; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) (unsigned char)125);
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 11; i_5 += 4) 
                        {
                            var_25 += ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_2 - 1] [(signed char)5] [i_2])) ? (arr_10 [i_0 - 1] [i_0 + 3] [i_1 + 3] [0U] [i_0 - 1] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 3] [i_2 + 2] [(unsigned short)6] [6U]))));
                            var_26 |= ((/* implicit */int) ((var_9) ? (arr_6 [i_0 + 2] [i_0 + 4] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        }
                        arr_18 [i_1] = ((/* implicit */unsigned short) (-(arr_7 [i_0] [i_1 + 2])));
                        arr_19 [i_0 + 3] [i_1] [i_1] [i_2 - 1] [(unsigned short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) (short)19670)) : (((/* implicit */int) (short)25))));
                    }
                    arr_20 [(short)8] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
    } 
}
