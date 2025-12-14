/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99287
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [i_2])), (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)35960))) : (max((var_11), (((/* implicit */unsigned long long int) var_1))))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) (unsigned char)42))))) ? (min((4294967288U), (((/* implicit */unsigned int) arr_1 [i_0] [(_Bool)1])))) : (((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_6 [i_0] [i_0] [i_1])))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13271696839688033200ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))))), (0ULL)))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((-(((arr_1 [i_1] [i_1]) ^ (((/* implicit */int) (unsigned char)12)))))) == (max((((/* implicit */int) (short)16326)), (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) 4613739893595845838LL));
                        var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))) == (3464349865U)))));
                        arr_12 [13] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
                        arr_13 [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_3 - 1])) <= (((/* implicit */int) arr_3 [i_0] [i_3 - 1]))));
                    }
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max(((~((~(arr_1 [i_2] [i_1]))))), (((((/* implicit */_Bool) 432665849)) ? (((/* implicit */int) arr_3 [i_2] [i_0 + 1])) : (((/* implicit */int) ((_Bool) (unsigned char)233))))))))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */signed char) (unsigned short)11);
    var_18 = ((/* implicit */int) ((_Bool) var_10));
    var_19 = ((/* implicit */short) ((3371488990119153627LL) - (((/* implicit */long long int) 2891127441U))));
}
