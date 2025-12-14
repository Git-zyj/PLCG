/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61292
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_15 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -144032509)))) * (min((((/* implicit */unsigned long long int) arr_0 [6LL])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)14]))) * (var_9))))));
        var_16 = (((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)26)) && (((/* implicit */_Bool) (short)0))))))) << ((+(min((arr_1 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) (short)0)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((arr_1 [4] [i_0]), (((/* implicit */unsigned long long int) (short)27601))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (49425162U)))) == (arr_2 [i_1] [i_0] [i_0 + 1])))) : (min(((-(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
            var_17 = ((/* implicit */_Bool) (+(6613900292331714383LL)));
        }
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */int) max((min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6613900292331714394LL))))), (var_7))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-5)) || (((/* implicit */_Bool) (unsigned char)253)))))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_2])))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */short) var_13)), (var_12))), (((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (_Bool)0))))))))) | (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (4529167473197986994LL))))) * (min((((/* implicit */long long int) (short)3)), (-4183321303507120970LL))))))))));
            var_20 -= ((/* implicit */unsigned int) ((((var_13) ? (((/* implicit */int) arr_7 [i_0 + 3])) : (((/* implicit */int) arr_7 [i_0 + 3])))) ^ ((~(((/* implicit */int) arr_7 [i_0 + 2]))))));
        }
        arr_10 [(unsigned short)10] |= ((/* implicit */_Bool) min(((~(((long long int) (unsigned char)245)))), (((/* implicit */long long int) ((((((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])) ^ (((/* implicit */int) (unsigned char)253)))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (short)18813)), (var_14)))))))));
    }
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) ((max((var_5), (((/* implicit */int) var_12)))) == (((((/* implicit */int) (unsigned char)89)) ^ (((/* implicit */int) (unsigned char)8))))))) << (((max((((/* implicit */int) ((((/* implicit */_Bool) -589544249)) || (((/* implicit */_Bool) var_9))))), (min((((/* implicit */int) var_12)), (var_5))))) - (20467))))))));
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) var_14);
        var_23 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_7))))))), (((/* implicit */int) max((((/* implicit */short) arr_11 [i_3] [i_3])), (min((((/* implicit */short) arr_11 [i_3] [i_3])), (arr_12 [i_3] [i_3]))))))));
        arr_14 [i_3] = ((/* implicit */_Bool) max(((((-2147483647 - 1)) & (((/* implicit */int) arr_12 [i_3] [i_3])))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_11 [i_3] [i_3])))))));
    }
    var_24 = ((/* implicit */unsigned char) var_6);
    var_25 = ((/* implicit */_Bool) ((var_6) ? ((((+(((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) var_14))));
}
