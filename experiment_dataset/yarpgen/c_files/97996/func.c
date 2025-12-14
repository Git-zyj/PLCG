/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97996
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-((+(((/* implicit */int) var_13)))))))));
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) var_8)), (((((var_6) + (2147483647))) >> ((((~(var_10))) - (3804560993U)))))));
    var_16 = ((/* implicit */signed char) min(((~(min((var_0), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) (((~(var_10))) ^ (min((var_10), (var_10))))))));
    var_17 = ((/* implicit */int) (~(var_12)));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1] [i_0 - 3]))) == (arr_3 [i_0]))) ? ((~(((/* implicit */int) arr_0 [11ULL])))) : (((/* implicit */int) arr_2 [i_0 - 4] [i_1 - 3])))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    arr_9 [11] [i_1 + 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) <= (((((/* implicit */_Bool) ((7529204096844944847ULL) / (((/* implicit */unsigned long long int) 847812033U))))) ? (arr_8 [i_0] [4LL] [i_0 + 1] [i_0 - 1]) : (((((/* implicit */_Bool) 4294967295U)) ? (-13LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((arr_11 [i_0] [i_0] [i_1 + 1] [i_0] [i_2] [i_3 + 1]), ((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 1] [i_0]))))))), ((-(min((((/* implicit */unsigned int) arr_0 [4U])), (arr_3 [i_0 + 1])))))));
                                arr_15 [i_2] [i_2] = max((arr_7 [(unsigned short)3] [i_2]), (((/* implicit */unsigned long long int) arr_14 [i_0 - 1] [i_1 - 3] [i_2] [i_3] [3])));
                                arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+((-(-857553283)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */unsigned int) arr_11 [i_0] [i_0 - 4] [(unsigned char)5] [i_1] [i_2] [i_2])) ^ (arr_3 [i_1 - 2]))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) arr_10 [10U] [i_1 - 2] [(unsigned short)2] [i_2 + 1])) : (arr_4 [(unsigned short)8] [(unsigned short)8] [i_2])))))))));
                }
            }
        } 
    } 
}
