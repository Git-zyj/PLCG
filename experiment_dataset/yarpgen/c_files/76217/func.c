/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76217
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
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (var_10)));
    var_17 = ((/* implicit */unsigned char) max((max((var_10), (((long long int) (unsigned short)56430)))), (-2398856401870105178LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) (signed char)-15)))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((short) (_Bool)0));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) (_Bool)0));
        var_19 = ((/* implicit */short) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (unsigned short)13450);
        arr_7 [i_1] = ((/* implicit */unsigned long long int) -5329358592106021734LL);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_1] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) (((_Bool)1) ? (9223372036854775799LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56430)))))) - (arr_11 [i_1] [i_1])))));
                arr_13 [i_1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)141)) >> (((((/* implicit */int) (unsigned short)52096)) - (52065)))));
            }
            var_21 = -9223372036854775791LL;
            var_22 = ((/* implicit */_Bool) max((1763461352), (((/* implicit */int) (!(((/* implicit */_Bool) 8796093022207LL)))))));
        }
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1881894117201875993LL)))), (((((/* implicit */unsigned long long int) 6793894684415077096LL)) | (arr_11 [i_1] [i_1])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (arr_10 [i_1] [i_1] [i_1] [i_1]))))));
        var_23 += ((/* implicit */long long int) (-((-(1399944624U)))));
    }
}
