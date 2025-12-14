/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91793
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (unsigned char)44))));
    var_18 = (-(((unsigned int) (-(var_1)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            arr_8 [i_1 - 3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_16)) ? (arr_4 [i_1 - 1] [i_1 - 2]) : (arr_4 [i_1 - 1] [i_1]))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (((/* implicit */int) var_12))))))))));
            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            var_20 = ((/* implicit */unsigned short) ((arr_1 [i_1]) << ((((-(((/* implicit */int) (unsigned short)43978)))) + (44001)))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)21565)), (max(((-(((/* implicit */int) (unsigned short)25297)))), (((/* implicit */int) (unsigned short)21568)))))))));
            var_22 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((long long int) arr_7 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_0] [i_0])), ((signed char)-45))))))));
        }
        var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) min(((unsigned short)21557), (((/* implicit */unsigned short) var_8)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                for (int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    {
                        arr_19 [i_4 + 2] [i_4 + 1] [i_2] [i_4 + 1] = ((/* implicit */short) (+(((int) var_15))));
                        var_24 -= ((/* implicit */int) ((long long int) (~(((/* implicit */int) var_10)))));
                        var_25 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_3 + 4])) / (((/* implicit */int) (unsigned short)43961))))), (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_3 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_3 - 3]))) : (arr_17 [i_2] [i_2] [i_2] [i_2] [i_3 - 3] [i_3 - 3])))));
                    }
                } 
            } 
        } 
    }
}
