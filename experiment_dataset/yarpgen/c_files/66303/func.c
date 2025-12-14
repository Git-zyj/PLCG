/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66303
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8))));
                var_17 |= ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)-1)), (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) arr_5 [i_2 - 2] [i_1 - 2] [i_2 - 1] [i_2])))))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (-8343861055337463078LL) : (((/* implicit */long long int) var_3))))) ? (-8343861055337463049LL) : (((/* implicit */long long int) var_0)))))));
            }
            var_20 = ((int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0]))))));
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_12 [i_0] = ((/* implicit */int) (~(((long long int) arr_8 [i_0] [i_3]))));
            var_21 += ((/* implicit */unsigned char) ((-3541195686452932995LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) == (var_13)))))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((-8343861055337463078LL) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3])))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_3] [i_3])), (arr_11 [i_3] [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_10)))))) + ((-(((/* implicit */int) arr_11 [i_0] [i_3] [i_0])))))))));
            arr_13 [i_0] = ((/* implicit */int) min((((((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (signed char)-116)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : (var_1))), (((/* implicit */unsigned int) var_7))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [i_0])))));
        }
        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((((/* implicit */int) (unsigned short)50618)) & (((/* implicit */int) var_2)))) : (min((((/* implicit */int) arr_0 [i_0])), (var_15)))));
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4]))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_4] [i_4])))) : (var_12))))))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8343861055337463048LL)) ? (((/* implicit */int) min(((unsigned short)23829), (arr_1 [i_4])))) : (((/* implicit */int) var_5))));
    }
    var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    var_28 += ((/* implicit */unsigned int) (-(((int) var_10))));
    var_29 = var_14;
}
