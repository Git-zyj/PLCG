/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86286
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) max((arr_3 [(signed char)2] [i_0 + 3]), (arr_3 [(signed char)0] [i_0 + 2])))), (arr_0 [(short)2]))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), ((-(((/* implicit */int) arr_0 [i_0]))))))) ? ((+((+(arr_1 [i_0] [i_0 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
        arr_5 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-3461474075971915715LL))) : (((/* implicit */long long int) var_4)));
        arr_6 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) var_9)), (var_12)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [6LL])) ? (-3461474075971915726LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) arr_3 [6LL] [i_1])))))));
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [(unsigned char)0] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (-3461474075971915715LL))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) arr_21 [15U] [i_2] [15U] [i_4] [15U] [i_5]))) + (-3461474075971915715LL)))))));
                        arr_24 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 4U)) ? (-7333956145662083025LL) : (-4495099536079481129LL))), (((/* implicit */long long int) var_1))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) % (((unsigned long long int) ((((/* implicit */_Bool) 3874879767U)) ? (3461474075971915714LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))))))));
                        arr_25 [i_3] [i_3] [i_5] = (+(max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) ^ (var_10))), (((/* implicit */long long int) arr_18 [i_5] [i_4] [i_3 + 2] [i_2])))));
                        arr_26 [i_2] [i_3] [(unsigned char)8] [i_5] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_3] [i_3])))))))), (((621772073) * (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        var_24 ^= max((arr_18 [i_2] [i_2] [i_2] [i_2]), ((!(((/* implicit */_Bool) (unsigned char)242)))));
    }
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        var_26 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) (~((-(((/* implicit */int) var_2))))))), (var_7)));
        var_27 = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_6]))) != (var_15))))), ((+(((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) arr_13 [i_6] [i_6])) : (((/* implicit */int) arr_16 [i_6] [i_6]))))))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 14137708614614389823ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_20 [i_6] [i_6]))), (((/* implicit */unsigned int) var_13))))) ? (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-3461474075971915733LL)))) : (((arr_18 [12ULL] [(signed char)16] [i_6] [i_6]) ? (arr_17 [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_11 [i_6] [i_6])))))) : (((/* implicit */unsigned long long int) ((((arr_15 [i_6] [i_6]) == (((/* implicit */unsigned long long int) 621772056)))) ? ((~(arr_14 [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_11 [i_6] [i_6])))))))));
        arr_29 [i_6] = ((/* implicit */unsigned short) arr_13 [i_6] [i_6]);
    }
    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned short) ((2147483647) <= (((/* implicit */int) var_2))))), (max(((unsigned short)1), (((/* implicit */unsigned short) var_13))))))))));
}
