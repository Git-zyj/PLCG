/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87873
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
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16997449479081447071ULL)) ? ((-2147483647 - 1)) : ((-2147483647 - 1))))) : (((((/* implicit */_Bool) var_11)) ? (arr_10 [(unsigned short)6] [(signed char)21] [(signed char)21] [i_3] [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55917)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            arr_15 [i_1 - 1] [i_3] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                            var_17 |= (signed char)47;
                            var_18 = ((/* implicit */unsigned short) (~(var_12)));
                        }
                        for (signed char i_5 = 1; i_5 < 20; i_5 += 4) 
                        {
                            arr_19 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) var_9))))));
                            arr_20 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) var_9)))));
                            arr_21 [i_0] [i_3] [i_2] [i_3] [i_5] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)25))));
                        }
                        var_19 = ((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) min((((/* implicit */short) arr_18 [i_0 - 2] [i_1 - 1])), (var_15)))) + (4899))) - (29))));
                        var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) arr_14 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2])) : (var_12))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (972920157) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) var_6)))))))));
                    }
                } 
            } 
        } 
        arr_22 [i_0] [(signed char)20] |= ((((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) arr_14 [i_0 - 1] [(unsigned short)2] [(short)14] [i_0] [i_0] [i_0 - 2] [i_0 - 1])), (-2211110631375726142LL))))) % (((/* implicit */int) min((((unsigned char) 972920157)), (var_9)))));
    }
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_4 [i_6]), (arr_4 [i_6]))))));
        var_21 &= ((/* implicit */unsigned int) min((((unsigned long long int) (~(((/* implicit */int) (short)-9709))))), (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))));
        var_22 += ((/* implicit */unsigned short) (((+(min((((/* implicit */long long int) -972920158)), (var_3))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */int) ((unsigned short) (signed char)53))) : (((/* implicit */int) ((unsigned short) var_16))))))));
    }
    var_23 = ((/* implicit */int) max((((unsigned long long int) (signed char)(-127 - 1))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)9)))))) ^ (((long long int) 972920158)))))));
    var_24 = max((max((((/* implicit */int) var_11)), ((-(-1340450104))))), (((((((/* implicit */int) (short)-13421)) - (((/* implicit */int) var_16)))) + (min((((/* implicit */int) (signed char)-65)), (var_7))))));
}
