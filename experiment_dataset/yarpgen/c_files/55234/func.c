/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55234
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) arr_0 [14U] [i_0]);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(arr_0 [i_0] [i_0]))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (unsigned short)52473))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((unsigned int) arr_4 [i_1])) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned short)52473))))))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_12 [i_2] [i_2] [i_3] [i_4] = ((((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) ? (min((-24LL), (((/* implicit */long long int) arr_4 [i_1])))) : (((/* implicit */long long int) arr_8 [i_1] [i_2] [i_4])))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_5 [i_2]))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 2; i_5 < 19; i_5 += 1) 
                        {
                            arr_17 [i_1] [i_2] = max(((~(((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) arr_16 [i_1] [i_2] [i_3] [i_2] [i_5]))))))), (((/* implicit */int) ((signed char) arr_9 [i_5 + 1] [i_5 + 1] [i_2] [i_5 - 1] [i_5 - 2]))));
                            var_24 -= ((/* implicit */signed char) (((+(((((/* implicit */int) var_11)) - (((/* implicit */int) arr_7 [i_1] [i_1] [(short)10] [i_4])))))) | ((~(((/* implicit */int) arr_7 [i_1] [i_2] [i_5 + 1] [i_4]))))));
                            var_25 = ((/* implicit */unsigned char) min(((unsigned short)13063), (((/* implicit */unsigned short) (_Bool)1))));
                            var_26 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_3)) & (arr_3 [i_1]))) != (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_16 [18U] [18U] [3ULL] [i_2] [i_5])) : (((/* implicit */int) var_12)))))) ? ((~(((/* implicit */int) (unsigned short)52473)))) : ((-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)13063))))))));
                        }
                        arr_18 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-1563475834) * (((arr_8 [i_1] [i_2] [i_3]) * (((/* implicit */int) arr_7 [i_2] [i_2] [i_3] [i_4]))))))) ? ((((-(arr_3 [i_1]))) | ((-(((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) arr_13 [i_2] [(signed char)8] [i_4] [i_4] [(signed char)8] [(unsigned short)19])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned short)64609))))));
                        var_27 = ((/* implicit */long long int) var_18);
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)5414)))))));
        var_29 = ((/* implicit */short) ((unsigned short) ((arr_2 [i_1] [i_1]) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1])))));
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((-(((((/* implicit */int) var_7)) & (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_12))));
        var_31 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
        arr_21 [i_6] [i_6] &= ((/* implicit */long long int) ((min((var_13), (((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6] [i_6])))) | (((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]))));
    }
    var_32 = max((((/* implicit */long long int) var_11)), (var_16));
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13063))))), (((((/* implicit */_Bool) (short)7112)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((signed char) (unsigned char)240))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)52459)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-24LL)))))));
    var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((_Bool) (unsigned short)65280)) ? (((/* implicit */int) (unsigned short)52429)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))) : (((((/* implicit */int) var_12)) ^ ((~(((/* implicit */int) var_7))))))));
    var_35 |= var_14;
}
