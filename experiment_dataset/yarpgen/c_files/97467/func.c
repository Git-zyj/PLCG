/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97467
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_15 *= ((/* implicit */signed char) (unsigned char)205);
    }
    var_16 &= ((/* implicit */unsigned short) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        var_17 += ((/* implicit */unsigned long long int) var_12);
        arr_4 [i_1] = ((/* implicit */_Bool) ((var_1) ? (1683310217345882853LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)205)) || (((/* implicit */_Bool) (unsigned short)64049))))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned int) arr_3 [i_1 + 1] [(_Bool)1])))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    {
                        arr_15 [i_2] [(signed char)8] [(signed char)11] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (arr_0 [i_5 - 1]))) | (((unsigned int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)32768))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            arr_18 [(signed char)11] [i_3] [i_3] [i_5 - 1] [13U] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_1)), (arr_13 [i_5 - 1] [i_5 + 1] [i_5 - 1]))))) <= ((((!(((/* implicit */_Bool) (unsigned short)32768)))) ? ((~(var_4))) : (((((/* implicit */_Bool) var_9)) ? (arr_7 [i_6] [i_6]) : (arr_16 [(unsigned char)14] [i_2] [10U] [(unsigned char)14] [i_5] [i_6])))))));
                            arr_19 [i_2] [i_2] [i_3] [(_Bool)1] [i_4] [i_4] [i_6] = ((/* implicit */short) var_4);
                        }
                        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_12)) < (((/* implicit */int) (unsigned short)30720)))))) : (((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] = ((/* implicit */signed char) ((((int) ((arr_9 [i_2] [i_2]) / (var_5)))) / (((((/* implicit */_Bool) (unsigned short)32776)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)50))))));
    }
    var_20 += ((/* implicit */unsigned char) var_2);
    var_21 |= ((/* implicit */_Bool) (+(((((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
}
