/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76854
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
    var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)25180)) ? (((/* implicit */long long int) var_7)) : (max((var_9), (((/* implicit */long long int) var_5))))))));
    var_12 |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-125)) >= (((/* implicit */int) (unsigned char)6))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-90))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (var_10))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min(((signed char)-107), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (signed char)29)))))));
        arr_5 [i_0] = ((/* implicit */_Bool) (-(arr_3 [i_0])));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) min(((-(((/* implicit */int) ((arr_7 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-107)))))))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) ((arr_10 [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(signed char)12])))))) : (((/* implicit */int) ((signed char) (signed char)125)))))));
                    arr_14 [i_2] |= ((/* implicit */unsigned int) max((arr_7 [i_2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
                    var_13 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) max((4194304LL), (((/* implicit */long long int) (unsigned char)62))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_19 [i_3] [i_3] = ((/* implicit */int) arr_10 [i_3]);
        arr_20 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_10 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_3]))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
    {
        arr_23 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((var_2) + (((/* implicit */unsigned int) arr_1 [i_4])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3584)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (unsigned char)6))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4])))))) ? (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-125)), ((short)32767)))))))));
        arr_24 [i_4] [(short)1] |= ((/* implicit */short) (!((!(((/* implicit */_Bool) (+(var_6))))))));
    }
    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) <= ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)57344)) : (((/* implicit */int) var_5))))))));
}
