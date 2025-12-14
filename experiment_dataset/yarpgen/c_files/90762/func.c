/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90762
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((arr_2 [i_0 + 1] [14U]) ? (((/* implicit */long long int) ((int) arr_3 [i_0] [i_1]))) : (max((var_13), (((/* implicit */long long int) var_2)))))) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)0))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) -116493676);
                            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) ((signed char) var_13))) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                var_19 = ((max((max((var_8), (var_3))), (arr_1 [i_0]))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0 + 1]), (var_6)))) || (((/* implicit */_Bool) (+(var_14))))))) > (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_11)))))))))));
                            var_21 ^= ((/* implicit */unsigned short) (short)2701);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_6 = 2; i_6 < 8; i_6 += 4) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_6])) ? ((~(max((((/* implicit */unsigned long long int) var_15)), (arr_18 [i_6]))))) : (((/* implicit */unsigned long long int) (~((~(4294967295U))))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 3; i_7 < 10; i_7 += 4) 
        {
            for (unsigned int i_8 = 3; i_8 < 9; i_8 += 2) 
            {
                {
                    arr_24 [i_6 + 1] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_14)))) ^ (var_7)))) ? ((~((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_1))));
                    arr_25 [(signed char)8] [(signed char)8] [(signed char)8] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (3667732569U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 4; i_9 < 8; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_6 + 2] [i_10] [i_10 + 1] [i_10 + 1])))))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (unsigned short)0))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_28 [i_6] [i_7] [i_8] [i_9] [i_8] [i_10 + 1])))) ? (((((/* implicit */_Bool) -5336381700052240158LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_2 [i_9] [i_6]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_6 - 2] [9LL] [i_8 - 2] [i_10] [i_7])) && (((/* implicit */_Bool) arr_26 [i_7 - 1] [i_6 - 2] [i_10] [i_8 - 3] [10ULL] [i_6]))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_26 [i_6] [i_7] [i_7 - 1] [(unsigned short)8] [(signed char)2] [i_10])))))))));
                            }
                        } 
                    } 
                    var_26 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) -2075985720)) != (-7257113277754380085LL)));
                }
            } 
        } 
        arr_34 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)46030)), (2880653848U)))) ? (((/* implicit */int) var_11)) : (var_9)));
    }
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) >> (((/* implicit */int) (_Bool)1)))))));
}
