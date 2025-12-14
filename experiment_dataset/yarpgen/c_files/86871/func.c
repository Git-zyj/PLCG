/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86871
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
    var_20 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min(((short)31496), (((/* implicit */short) var_16)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            arr_6 [i_1] = ((((/* implicit */_Bool) -4364678668196662118LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1))));
            arr_7 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) 9223372036854775807LL)) * (min((((/* implicit */unsigned long long int) var_4)), (var_0))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_5 [i_1 - 1] [i_1 + 2])), ((short)-973))))));
            arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9007199254736896LL)) ? (((((/* implicit */int) arr_4 [i_0] [i_1])) - (((/* implicit */int) arr_2 [i_0])))) : (((var_11) ? (((/* implicit */int) (short)973)) : (((/* implicit */int) var_11))))))) ? ((-(((/* implicit */int) (signed char)-118)))) : (((/* implicit */int) (signed char)1))));
        }
        var_21 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)50498))))), ((+(var_0))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) var_12))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            var_22 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) arr_1 [i_2]))))) + (((/* implicit */int) min(((unsigned short)1), (((/* implicit */unsigned short) var_17)))))))), ((~(((arr_3 [i_0] [i_2] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_0]))))))));
            var_23 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)31744)) : (((/* implicit */int) var_9)))) % (((/* implicit */int) var_15))))));
            arr_14 [i_0] [i_2 + 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_6)))))) ? (((((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned char)144)))) + (((((/* implicit */int) var_18)) / (-1145075089))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-1)) && (var_3))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31779)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (signed char)57))))))))));
        }
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((968474934772297174ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0])))))) > (max((((/* implicit */int) arr_11 [i_0] [i_0])), (-540222558)))))) == (((/* implicit */int) min((((((/* implicit */int) (unsigned char)214)) >= (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) (short)17431)) || (((/* implicit */_Bool) var_5))))))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        arr_19 [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) var_10)))));
        arr_20 [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_1)))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_15 [i_3 - 1])) : (((/* implicit */int) var_5)))))));
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)225))))) ? (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_2))))) : (((((/* implicit */int) (signed char)77)) | (((/* implicit */int) var_13))))))) >= (((((((/* implicit */int) (signed char)127)) == (((/* implicit */int) (unsigned short)22746)))) ? (min((-3659376036861937261LL), (((/* implicit */long long int) var_7)))) : (min((7688485506536348003LL), (((/* implicit */long long int) 2147483647))))))));
}
