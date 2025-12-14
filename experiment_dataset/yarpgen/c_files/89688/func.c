/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89688
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54319)) ? (((var_5) - (((/* implicit */long long int) 387113339U)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_5)))))) : (((((1108307720798208LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))))) ? (max((var_9), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (+(var_4))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned int) 1402504474U)), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [(unsigned char)7]))))) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), ((unsigned char)255))))))));
            arr_5 [i_0 + 1] = ((/* implicit */signed char) (((-(((/* implicit */int) ((signed char) var_0))))) != (((((/* implicit */int) arr_3 [i_0] [i_0 + 1])) << (((/* implicit */int) arr_3 [7ULL] [i_0 + 3]))))));
        }
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_14 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((arr_8 [i_0] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))))), (((/* implicit */long long int) (_Bool)1))))) + (((((((/* implicit */int) var_11)) <= (((/* implicit */int) (unsigned short)56492)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) : (var_1)))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) max((((((((/* implicit */int) var_7)) * (((/* implicit */int) arr_0 [i_3])))) + (((/* implicit */int) arr_3 [i_0] [1LL])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_3])) || (((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_3] [i_2] [i_0])))))) < (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_15 = ((/* implicit */unsigned long long int) ((_Bool) max((arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2]), (arr_10 [i_0 - 1] [i_0 + 3] [i_0 + 2] [i_0 - 2]))));
                    }
                } 
            } 
            var_16 *= ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_1 [i_0] [i_0 - 2])))) & (((/* implicit */int) ((arr_11 [i_0] [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_2]) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))))));
        }
        arr_13 [i_0] = min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (min((((/* implicit */unsigned long long int) ((unsigned short) var_10))), ((+(var_1))))));
    }
}
