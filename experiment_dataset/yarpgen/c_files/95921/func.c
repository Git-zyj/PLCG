/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95921
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
    var_11 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [(_Bool)1]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_12 -= ((/* implicit */int) (short)10508);
            arr_6 [i_0] = ((/* implicit */unsigned int) 951260944);
        }
    }
    for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_13 [(short)4] = ((/* implicit */short) ((((/* implicit */_Bool) min((-951260950), (((/* implicit */int) arr_9 [i_2 - 3]))))) ? (((((/* implicit */_Bool) arr_9 [i_2 - 3])) ? (603488520U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) min((var_2), (-951260954))))));
            arr_14 [i_2 + 1] [i_3] [9] = ((/* implicit */long long int) 4294967295U);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (short)-444))))) ? (((((/* implicit */_Bool) (unsigned short)12288)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (signed char)81))));
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (min((min((10887320467946108334ULL), (((/* implicit */unsigned long long int) 603488520U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) != ((+(((/* implicit */int) var_9)))))))))));
                    }
                } 
            } 
            arr_21 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53266))) | (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_3]))))), (var_6)))));
            arr_22 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 3459996611905056743LL))))) ^ (((/* implicit */int) ((_Bool) 5574151851481097656ULL)))));
        }
        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            arr_26 [(short)6] [i_6] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 603488520U)) ? (((/* implicit */unsigned long long int) 268435455)) : (var_6))), (((/* implicit */unsigned long long int) var_5))));
            arr_27 [i_6] [(short)4] [i_6] = ((/* implicit */short) var_7);
        }
        arr_28 [i_2] = ((/* implicit */short) ((((((/* implicit */int) arr_20 [i_2] [i_2 - 1] [(short)3])) | (((/* implicit */int) arr_20 [i_2 - 1] [i_2 - 1] [i_2])))) | (((/* implicit */int) ((short) var_9)))));
        var_16 = ((/* implicit */short) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))), (max(((+(arr_16 [i_2] [i_2] [i_2] [i_2]))), (((/* implicit */int) min((arr_9 [i_2 - 2]), ((short)-27097))))))));
        arr_29 [(short)6] = ((/* implicit */signed char) min((((short) (!(((/* implicit */_Bool) var_0))))), (max((arr_20 [i_2 - 3] [(short)17] [i_2]), (((/* implicit */short) ((((/* implicit */_Bool) 603488520U)) || (((/* implicit */_Bool) (short)-20958)))))))));
    }
}
