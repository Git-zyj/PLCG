/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93495
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
    var_16 = ((/* implicit */int) ((var_1) <= (((/* implicit */long long int) var_14))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((int) var_10))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (unsigned char)186)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_18 &= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)121))));
                    var_19 = ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)70)) + (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 3] [i_1]))))));
                    arr_6 [(_Bool)1] [10ULL] [i_2 + 3] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_15)) : (4135634637151154313LL))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)8191)) > (((/* implicit */int) (_Bool)0))))) : (arr_5 [i_0] [i_1] [i_2 - 2])));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_0] |= ((/* implicit */signed char) ((long long int) ((unsigned short) arr_5 [i_2] [i_2 + 3] [i_2 - 1])));
                        var_20 *= ((/* implicit */unsigned char) arr_1 [i_3]);
                    }
                    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [(signed char)3] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((int) ((unsigned short) var_12))) << (((((((((/* implicit */int) (short)7124)) * (((/* implicit */int) arr_2 [i_0])))) + (((/* implicit */int) arr_10 [(_Bool)1] [i_2 + 1] [i_1] [i_0])))) - (351672533)))))) : (((/* implicit */unsigned char) ((((int) ((unsigned short) var_12))) << (((((((((((/* implicit */int) (short)7124)) * (((/* implicit */int) arr_2 [i_0])))) + (((/* implicit */int) arr_10 [(_Bool)1] [i_2 + 1] [i_1] [i_0])))) - (351672533))) + (243840260))))));
                        arr_16 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                    }
                    arr_17 [i_0] = ((/* implicit */_Bool) 17026197643433056963ULL);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 4; i_5 < 8; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (signed char i_7 = 3; i_7 < 8; i_7 += 3) 
                {
                    {
                        arr_28 [i_0] [i_5] [(_Bool)1] [(short)6] [i_6] [i_0] &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [(short)11] [(short)11] [i_6] [i_7 - 2])) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) var_2)))));
                        var_21 -= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)2] [1] [i_7])) ? (((/* implicit */unsigned long long int) arr_19 [i_5 - 2])) : (arr_18 [i_7] [i_7]))), (((/* implicit */unsigned long long int) max((arr_22 [i_0] [i_0] [i_6] [i_7]), (((/* implicit */long long int) var_11)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)35))))) / (var_14)))) : (max((((arr_26 [i_0] [i_5 + 2] [i_6] [i_7 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) var_9)))));
                        var_22 = ((/* implicit */unsigned char) ((-4135634637151154313LL) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 73376165U))))) > (((/* implicit */int) (unsigned char)184))))))));
                    }
                } 
            } 
        } 
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_2 [i_0]))));
    }
}
