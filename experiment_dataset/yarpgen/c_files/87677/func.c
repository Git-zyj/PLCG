/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87677
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */long long int) (unsigned char)13);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) min((var_12), ((unsigned char)55)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            arr_16 [(_Bool)1] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_2]), (arr_10 [i_0] [i_2])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) (unsigned char)200)))) : (var_2)));
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_0] [i_3])), ((~(((/* implicit */int) var_0))))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)48222)) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (((((/* implicit */_Bool) arr_10 [8LL] [8LL])) ? (arr_6 [i_0] [(signed char)6] [i_1]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1])) - (((/* implicit */int) arr_11 [i_0] [6LL]))))) ? ((+(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) arr_14 [18ULL] [i_0] [i_1])))))) : (((/* implicit */int) (_Bool)1)))))));
        }
        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_0])) ? (((/* implicit */unsigned long long int) min((var_2), ((-(2)))))) : (max((arr_6 [(_Bool)1] [i_5] [i_0]), (arr_6 [i_0] [i_5] [i_5])))));
            arr_20 [i_0] = ((/* implicit */int) min((max((arr_6 [i_5] [i_5] [i_0]), (arr_6 [(unsigned char)17] [i_0] [i_0]))), ((+(((((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) : (var_10)))))));
            arr_21 [(unsigned char)1] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_12 [6LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_5] [i_0])), (arr_2 [i_0]))))) : (((312695390U) >> (((((/* implicit */int) (unsigned short)54232)) - (54217)))))))));
        }
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-((-(((/* implicit */int) var_6))))))) / (((long long int) min((((/* implicit */int) (unsigned short)54222)), (1))))));
}
