/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7413
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) ((((var_15) << (((((/* implicit */int) (signed char)-15)) + (22))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) | (((/* implicit */int) (_Bool)1)))))))) >> (((((/* implicit */int) var_11)) + (22027))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-2))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)-64)))) - (((/* implicit */int) (signed char)-64)))))));
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-5))));
                    }
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_3 [i_0] [i_1])))) || (((/* implicit */_Bool) min((arr_3 [i_1] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (arr_10 [i_2] [i_2] [i_2 - 3] [i_2] [i_2])))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (8855193865217377484LL)))) && (((/* implicit */_Bool) arr_3 [i_2 - 3] [i_2 + 1]))))))))));
                    var_23 = ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_6 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-64))))))) << (((/* implicit */int) ((((/* implicit */int) (signed char)14)) == (((/* implicit */int) (unsigned char)76)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)3))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (max((arr_14 [i_0] [i_2 - 3] [i_2] [i_5 + 2] [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_4] [i_5 - 1] [i_4] [(unsigned short)0])) || (((/* implicit */_Bool) arr_0 [i_5]))))))) : (((max((8717692057096105355LL), (((/* implicit */long long int) (short)(-32767 - 1))))) << (((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) - (1)))))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) - (-273562687250571328LL))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_27 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) arr_4 [i_0]))))), (((((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 1] [i_2 - 3] [i_2 + 1])) * (((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 3] [i_2 - 1] [i_2 + 2]))))));
                        arr_21 [i_0] [4LL] [4LL] [i_2] = ((/* implicit */_Bool) 0ULL);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        arr_24 [(unsigned char)2] = ((/* implicit */unsigned char) (((!((_Bool)1))) ? (((/* implicit */int) min(((short)-18604), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_23 [i_7 - 1])) <= (arr_22 [i_7] [i_7]))))));
        arr_25 [i_7] = ((/* implicit */short) max((((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_22 [(short)20] [i_7]))) >> (((min((((/* implicit */unsigned long long int) (signed char)-63)), (arr_22 [i_7] [i_7]))) - (16550570591175283601ULL))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-1290)) || (((/* implicit */_Bool) (signed char)-9)))), ((_Bool)1))))));
        var_28 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)114), (((/* implicit */unsigned char) var_17))))) || (((/* implicit */_Bool) 9223372036854775808ULL)))))));
    }
    var_29 = ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)-56))))));
}
