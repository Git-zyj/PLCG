/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96063
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */_Bool) 13137201036108963788ULL)) ? (459148018249925626LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) | ((-(((/* implicit */int) arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) (unsigned char)10);
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */int) (short)-11106)) == (((/* implicit */int) (short)-24009)))))));
    }
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)233)) << (((((((/* implicit */int) arr_2 [i_2])) + (13633))) - (5))))), (((((/* implicit */int) (unsigned char)211)) + (((/* implicit */int) (_Bool)1)))))))));
            arr_13 [(signed char)3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_3 - 1])) ? (((/* implicit */int) arr_1 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) (unsigned char)10))))) <= (min((max((-459148018249925626LL), (((/* implicit */long long int) (signed char)120)))), (((((/* implicit */_Bool) (short)-11096)) ? (-459148018249925625LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11096)))))))));
            arr_14 [i_2] [(short)13] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (((((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (min((arr_5 [i_2]), (((/* implicit */unsigned long long int) var_16))))))));
            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) arr_4 [i_3 - 2] [i_2])) != (((/* implicit */int) arr_1 [i_2] [(_Bool)1]))))) == ((~(-171343218))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_17)) : (((arr_10 [(unsigned short)7]) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (signed char)28)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) max((-1577060967), (((/* implicit */int) (_Bool)0))))) >= (var_2))))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            arr_18 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14781092340350927857ULL)) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) arr_15 [i_2]))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)22)) : (((/* implicit */int) (short)11116)))))));
            var_23 = ((/* implicit */short) arr_12 [(unsigned char)7] [i_4] [i_4]);
        }
        arr_19 [(signed char)6] = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_6 [i_2]), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (1577060964) : (((/* implicit */int) var_5))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
    {
        var_24 += arr_1 [(unsigned char)9] [i_5];
        arr_23 [i_5] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)137)) <= (((/* implicit */int) (short)4)))) ? (((/* implicit */int) (signed char)126)) : ((~(((/* implicit */int) (unsigned short)0))))));
        arr_24 [i_5] = ((/* implicit */int) arr_0 [i_5] [i_5]);
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))) < (((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) var_13)), (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)0)))))))));
}
