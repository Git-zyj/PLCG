/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90119
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
    var_16 = ((/* implicit */unsigned short) var_5);
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)252))))), (max((((/* implicit */unsigned short) var_5)), (var_8)))))), ((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) + (max(((-(((/* implicit */int) var_13)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)221)), ((short)-3074))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) ((signed char) ((signed char) (unsigned char)30)));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (var_10)));
                    var_21 ^= ((/* implicit */long long int) ((int) var_10));
                }
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((unsigned char) var_9));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned short)10] [i_0 - 3] [i_3] [i_3 + 1])) ? (arr_11 [i_0 - 2] [i_0 - 2] [2LL] [i_3 - 1]) : (arr_11 [i_0] [i_0 + 2] [i_1] [i_3 + 1])));
                        var_24 = var_12;
                    }
                    var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (max((var_0), (((/* implicit */int) var_5))))))), (max((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_3] [i_1])), (var_9))), (((var_7) | (((/* implicit */unsigned long long int) var_10))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) (~(((/* implicit */int) ((6367617865638578105LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))))))));
                        var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_15 [i_0]), (max((((/* implicit */unsigned short) arr_0 [i_0])), (var_12))))))));
                    }
                    var_28 = ((/* implicit */int) min((arr_11 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_14 [i_3 - 1] [i_0 + 3])))))));
                }
                for (unsigned int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */int) var_13))))))))));
                    arr_19 [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) ((unsigned char) var_7)))))) : (((((/* implicit */int) max((arr_16 [i_0] [15] [i_0] [i_0 + 1]), (var_12)))) / (var_0)))));
                    var_30 = ((/* implicit */unsigned short) ((((_Bool) max((var_10), (var_0)))) ? (((/* implicit */int) ((unsigned char) ((arr_5 [i_6] [i_1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_1)))))));
                }
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) / (((/* implicit */int) ((unsigned char) arr_8 [i_0 - 1] [i_0] [i_0 + 3])))));
            }
        } 
    } 
    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_15))))))))) : ((-(max((((/* implicit */unsigned long long int) var_11)), (var_7)))))));
}
