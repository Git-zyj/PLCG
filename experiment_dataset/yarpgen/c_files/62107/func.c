/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62107
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] = (+(var_13));
            var_14 = ((/* implicit */unsigned int) var_5);
            arr_5 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) var_7))))), (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_1 [i_0])))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) (!(((((/* implicit */int) (short)-15825)) < (((/* implicit */int) (unsigned char)29))))))) == (((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (short)16751)) : (((/* implicit */int) (_Bool)1))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_2])), ((unsigned short)41421)))), (((unsigned int) var_9))))));
            var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(var_6))), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) ((arr_2 [i_2]) || (((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)254))))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((short) var_12))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_0 [i_0])))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((arr_2 [i_3]) ? (((((/* implicit */int) var_11)) / (((/* implicit */int) arr_0 [i_3])))) : (((((/* implicit */int) (short)-16752)) | (((/* implicit */int) arr_2 [i_3]))))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)9751)) ? (((/* implicit */int) (short)-16751)) : (((/* implicit */int) (_Bool)1)))));
        var_18 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_3] [i_3])) + (2147483647))) >> (((arr_1 [i_3]) - (7880245917073675040ULL)))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) var_10))));
}
