/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64233
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (min((-1479647130), (((/* implicit */int) arr_0 [i_0]))))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) 2600847032324669721LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [(_Bool)1]))) : (3333184951U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))) ? (((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2])) % (((/* implicit */int) arr_0 [i_3])))) : (((((/* implicit */_Bool) ((28LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_2 + 1] [i_1])))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_1 [i_0]))))))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) | ((-(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [(short)2] [i_1])))))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0])))) % (((((/* implicit */_Bool) (-(-7409974825825778484LL)))) ? (((/* implicit */int) (unsigned short)58617)) : (((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) != (arr_10 [i_0] [(_Bool)1] [i_0] [i_0]))))))));
    }
    var_20 &= ((/* implicit */_Bool) var_6);
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) var_2))) > (var_8))), (((961782344U) != (var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_3))))))))));
    var_22 ^= ((/* implicit */signed char) var_1);
}
