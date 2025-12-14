/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71105
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-4615))));
        arr_4 [14U] = min((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)4615)))), ((+(((/* implicit */int) (unsigned char)229)))));
        arr_5 [i_0] = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */int) (unsigned short)5298)), (-1586971658))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_11 [(short)11] [i_1] [(signed char)19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_1))))) ? ((~(((/* implicit */int) (short)(-32767 - 1))))) : (((arr_2 [i_2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)20751))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)36)) : (1651850947)))) ? (min((15019215659761740572ULL), (((/* implicit */unsigned long long int) (unsigned short)3686)))) : (((/* implicit */unsigned long long int) arr_8 [i_1 - 1] [i_0] [i_2 + 2]))))));
                    arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) arr_7 [i_0]);
                    arr_13 [(unsigned short)14] [(short)0] [i_2] |= ((/* implicit */long long int) min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 4])) ? (((/* implicit */int) arr_7 [i_1])) : (arr_8 [i_0] [i_1 + 1] [i_2 - 1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_18 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)3686))))) ? (arr_14 [i_2] [i_2] [10ULL] [i_2] [i_2 + 2] [i_2]) : (((((/* implicit */_Bool) var_8)) ? (949568339) : (((/* implicit */int) var_1)))));
                        arr_19 [4LL] [4LL] [i_2] [i_2] [4LL] [i_0] = ((/* implicit */short) (!(((_Bool) (unsigned short)16786))));
                        arr_20 [i_0] [i_1] [i_0] [(signed char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (arr_8 [i_0] [i_0] [i_0])));
                        arr_21 [0LL] [i_1] [i_2] [i_3] [i_0] &= ((/* implicit */int) -8993459613726781602LL);
                        arr_22 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) (signed char)-110);
                    }
                    for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 3) 
                    {
                        arr_27 [(unsigned short)6] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */short) (signed char)127)), ((short)-4598)));
                        arr_28 [i_0] [i_1] [(short)4] [i_1] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_1])))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        arr_33 [i_5] [i_5] = ((/* implicit */short) var_10);
        arr_34 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9087060680415581517LL)) ? (((var_5) >> (((((/* implicit */int) (unsigned short)60237)) - (60176))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5])))));
        arr_35 [i_5] = ((/* implicit */unsigned short) var_0);
        arr_36 [0] [i_5] = ((/* implicit */unsigned char) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    var_11 = ((/* implicit */long long int) var_1);
    var_12 = var_6;
}
