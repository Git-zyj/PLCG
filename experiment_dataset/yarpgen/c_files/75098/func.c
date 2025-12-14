/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75098
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) >= (var_3))))) * (max((((/* implicit */unsigned long long int) var_9)), (var_6)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) max((max((((/* implicit */short) arr_2 [i_0])), ((short)(-32767 - 1)))), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] [(short)18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-6672)) : (((/* implicit */int) (unsigned char)0))))) : (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - (7701684901393279692ULL)))))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5135))) + (18446744073692774400ULL))) <= (arr_1 [(_Bool)1] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) (unsigned short)9579);
                    arr_9 [i_0] [i_1] [i_0] [11LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -498892521460839804LL)) ? (((long long int) 267911168U)) : (arr_7 [i_2 - 2] [i_2 - 1] [i_2 - 1])));
                    var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)295)) ? (2278624211U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6672))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2 - 2])) && (((/* implicit */_Bool) var_12)))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_7 [i_0] [i_2 - 1] [(_Bool)1]))));
                    var_21 = ((/* implicit */long long int) ((unsigned short) (signed char)40));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) var_2);
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            arr_15 [i_3] = ((/* implicit */signed char) ((unsigned long long int) ((short) var_9)));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_0))));
        }
        var_24 = ((/* implicit */unsigned long long int) (unsigned short)46707);
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) 2862655580189918894LL)))))));
    }
    var_26 = min((((/* implicit */int) var_8)), (((int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_6))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */long long int) 267911168U)) : (arr_16 [i_5])));
        var_27 = ((/* implicit */long long int) ((signed char) -1LL));
        var_28 -= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) -307157038)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)18] [i_5]))))));
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) var_15))))) : (max((((/* implicit */unsigned int) (unsigned char)236)), (0U)))))) ? (var_9) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6))))), (var_14))))));
}
