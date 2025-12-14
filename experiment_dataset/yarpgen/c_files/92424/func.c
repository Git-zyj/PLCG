/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92424
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-28)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_12) : (((/* implicit */long long int) 1528903228)))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2))))))))));
    var_21 ^= ((/* implicit */signed char) max(((-(((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_13)) - (31636))))))), (((/* implicit */int) var_4))));
    var_22 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    var_23 += ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)24)))));
                    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
                    var_25 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 - 2]))) > (var_6)));
                }
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)61848)) / (((/* implicit */int) (unsigned short)35148))))));
                                var_27 += ((/* implicit */signed char) max(((-(arr_4 [i_1 + 1] [i_5] [i_5]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 2])))))));
                                var_28 += ((/* implicit */unsigned char) ((((max((var_1), (((/* implicit */unsigned long long int) (unsigned char)243)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_0] [i_4] [i_3] [(signed char)0]) > (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_0] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_9 [i_0] [i_3] [i_4] [(unsigned short)9]))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (signed char i_7 = 1; i_7 < 8; i_7 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (signed char)-78))))))) <= (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) == (6099782345126746443ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((3263798117U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))))))) : (((3040769493805195864LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))))));
                            var_30 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (((/* implicit */long long int) ((arr_14 [i_0] [i_1] [i_1] [i_6] [i_7]) % (((/* implicit */unsigned int) 2147483647))))) : (max((((/* implicit */long long int) (signed char)11)), (arr_11 [1LL] [i_0] [i_0])))))) ? ((~(2331543669U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3850947510083459921LL)) != (arr_22 [i_7 + 1] [i_7 + 2] [i_7] [i_1 + 1] [i_7 + 3] [i_1 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
