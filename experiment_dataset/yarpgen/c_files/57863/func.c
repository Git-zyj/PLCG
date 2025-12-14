/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57863
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (+(((arr_0 [2U] [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))) < (1177063564U))))));
        var_14 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_12)))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max(((unsigned char)9), ((unsigned char)13)))) == (((/* implicit */int) (unsigned char)178)))))) & (max((max((((/* implicit */unsigned int) var_6)), (1941843007U))), (((/* implicit */unsigned int) (unsigned char)247))))));
        var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_5))))) ? (((/* implicit */int) max((arr_1 [(unsigned char)12]), (((/* implicit */short) var_11))))) : ((-(((/* implicit */int) arr_4 [i_1])))))), ((+(((/* implicit */int) max((var_5), (var_8))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(arr_0 [i_1] [i_2])))), (((unsigned int) var_4))))) ? (min((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_11))))), ((-(((/* implicit */int) var_1)))))) : (max((((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_1 [(_Bool)1])))))))));
            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            arr_10 [i_1] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_11))))))) || (((/* implicit */_Bool) ((((/* implicit */int) max((var_2), (var_9)))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_6)))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 1) 
    {
        var_17 = ((((((/* implicit */int) arr_11 [i_3] [i_3])) & (((/* implicit */int) var_2)))) <= (((((/* implicit */int) var_1)) | (((/* implicit */int) var_8)))));
        arr_13 [(_Bool)1] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)255));
        var_18 = ((/* implicit */_Bool) var_2);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(_Bool)1] [i_3]))))) ? (((arr_5 [(_Bool)1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_3 [i_3] [i_3])))))));
        var_20 = ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_9)))));
    }
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (max((((/* implicit */int) max((var_12), (var_6)))), ((+(((/* implicit */int) var_7))))))));
    var_22 |= ((/* implicit */unsigned char) ((max((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_10))))), ((-(((/* implicit */int) var_1)))))) ^ (((/* implicit */int) ((_Bool) ((_Bool) var_5))))));
}
