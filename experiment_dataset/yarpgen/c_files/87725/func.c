/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87725
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        {
                            var_11 += ((/* implicit */_Bool) arr_9 [i_4] [i_3]);
                            arr_17 [i_0] [i_0] [i_2] [(_Bool)1] [10LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 + 1]))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_1 - 2]))) : (((long long int) (unsigned short)27071)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) max((arr_15 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */unsigned short) arr_13 [5LL] [i_3]))))) : (min((var_9), (((/* implicit */int) var_6)))))))));
                            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-((-(arr_10 [i_0] [i_1 - 2] [i_2 + 1]))))))));
                            arr_18 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) max((-6715975948970510342LL), (((/* implicit */long long int) 107104083))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), ((short)-10084)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((11165014349967183359ULL), (((/* implicit */unsigned long long int) var_0))))))))) : (max((((/* implicit */unsigned int) (short)-15547)), (max((arr_10 [i_0] [(unsigned short)8] [(unsigned short)8]), (((/* implicit */unsigned int) arr_7 [i_1] [i_0]))))))));
                        }
                    } 
                } 
            } 
            var_14 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_0] [i_0])))))));
            arr_19 [i_0] [i_1 + 1] = ((/* implicit */long long int) ((min((((unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18214270676873439318ULL))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [(unsigned short)8] [i_1 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (signed char)53)))))) : (max((((/* implicit */unsigned int) (_Bool)0)), (3242871226U))))))));
        }
        var_15 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_5)))) > (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0])) < (((/* implicit */int) arr_9 [i_0] [i_0]))))))) || (((/* implicit */_Bool) arr_9 [i_0] [i_0]))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((_Bool) var_0));
}
