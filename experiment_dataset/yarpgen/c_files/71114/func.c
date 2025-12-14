/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71114
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_0))))) >= (var_9)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    var_14 |= ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_15 = (~(min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))), (((long long int) var_4)))));
        arr_2 [i_0] [16LL] = ((/* implicit */short) ((_Bool) -2336280604050102747LL));
        arr_3 [(unsigned short)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) > (-1LL))))))) > ((+(max((((/* implicit */long long int) (_Bool)1)), (-2336280604050102747LL)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) 1LL);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) arr_5 [(unsigned short)7] [i_2]);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned char) ((signed char) var_6))))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_8)))))));
                        arr_15 [(unsigned char)2] [i_1] [i_3 + 2] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))) & (((/* implicit */int) arr_9 [i_3 + 2]))));
                    }
                } 
            } 
            arr_16 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
        }
        arr_17 [i_1] = ((/* implicit */unsigned short) ((short) var_8));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((0LL) + (var_7)))))) ? (max((var_10), (min((var_10), (((/* implicit */long long int) var_2)))))) : ((+((+(-2494815243097729384LL)))))));
}
