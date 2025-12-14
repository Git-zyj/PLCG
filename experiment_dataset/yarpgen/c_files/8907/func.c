/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8907
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
    var_14 = ((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) * (((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((13361564780270150528ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (max((arr_4 [i_1 - 1] [(unsigned char)0] [i_1 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_0])) || (((/* implicit */_Bool) var_13))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((281474976710655LL) == (((/* implicit */long long int) ((/* implicit */int) (short)20983)))))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((unsigned short) (short)24576));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_1 + 1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */int) ((((long long int) (~(arr_3 [i_0] [i_0] [i_4])))) ^ (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) 6421685386195002258ULL))))))));
                            var_16 = ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */long long int) max((((/* implicit */int) (short)-20983)), ((+(((/* implicit */int) (signed char)84))))))) : ((+(-6629281360833021901LL))));
                            arr_15 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) (~((~(((/* implicit */int) (short)24582))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1])))), (min((var_0), (-1831297287))))))));
                        }
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1 - 1] [i_1] [i_1 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)24576)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 5085179293439401088ULL)))) | (((((/* implicit */_Bool) arr_10 [i_3] [i_2] [16U] [0ULL])) ? (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_0] [i_3] [i_1 + 1])) : (var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1] [i_1 - 2])) ? (((/* implicit */int) (short)-24576)) : (((/* implicit */int) var_12))))))))));
                    }
                    for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_1 + 1] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((arr_4 [i_0] [(signed char)20] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))))))) ? (((/* implicit */int) ((min((((/* implicit */int) (unsigned char)6)), (1831297286))) == (((/* implicit */int) ((unsigned char) (short)24576)))))) : (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_12)) - (1711)))))));
                        arr_20 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) (short)-24576)))), (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [(unsigned short)21] [i_2] [i_5])) && (((/* implicit */_Bool) arr_1 [i_1])))))))));
                        var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 6017587827530716444LL)) ? (((/* implicit */int) (short)24213)) : (-1743683313)))));
                    }
                    arr_21 [i_0] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned short) min(((+((-2147483647 - 1)))), ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [18U])) : (arr_2 [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_8);
    var_21 &= ((/* implicit */int) (~(((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1831297303)), (var_7)))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_9)) : (var_1)))))));
}
