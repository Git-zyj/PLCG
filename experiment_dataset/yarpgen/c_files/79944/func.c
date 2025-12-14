/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79944
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            arr_6 [(unsigned short)5] [i_0] [i_1] = ((/* implicit */signed char) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (268431360ULL))) * (min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_0])))))), (((/* implicit */unsigned long long int) (+(1U))))));
            var_19 = ((/* implicit */signed char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
            arr_7 [i_0] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_11)))))), (min((19ULL), (((/* implicit */unsigned long long int) var_14))))));
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_4 [i_0] [i_0])))))) : ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_0 [(unsigned short)17] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [(short)10] [i_0] [i_0]), (((/* implicit */signed char) arr_1 [15ULL]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 15U)) + (arr_3 [i_0] [i_0]))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_2))))));
        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!(var_10)))))) & (max((((/* implicit */unsigned int) ((var_7) / (((/* implicit */int) var_16))))), (arr_0 [i_0] [i_0]))));
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) arr_1 [(unsigned char)17]))))), (((((/* implicit */_Bool) (short)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))) : (0ULL))))), (((/* implicit */unsigned long long int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)0)))))));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) ((_Bool) min((min((var_18), ((unsigned short)1024))), (min(((unsigned short)0), (((/* implicit */unsigned short) var_15)))))));
        var_22 -= ((/* implicit */unsigned long long int) ((signed char) ((short) min((var_14), (((/* implicit */unsigned int) var_16))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (unsigned short)17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_1)), (var_9))))) : (((((/* implicit */_Bool) 18446744073441120255ULL)) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-128)))))));
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_24 -= ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (short)32761)), (max((((/* implicit */unsigned int) var_0)), (4294967295U))))), ((+(1022U)))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max((max((arr_16 [i_4] [i_3]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) arr_9 [i_3] [i_4]))))) ? (((/* implicit */int) arr_4 [i_3] [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))))));
            arr_18 [i_4] = ((/* implicit */_Bool) (+((+(arr_2 [i_3] [i_4])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_5 = 3; i_5 < 18; i_5 += 3) 
            {
                arr_22 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (1048320U)))));
                var_26 &= ((/* implicit */_Bool) ((268431334ULL) % (arr_3 [i_5 + 2] [i_5 - 3])));
            }
        }
        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            arr_25 [15ULL] |= ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(1048319U)))), ((+(18446744073709551592ULL)))));
            arr_26 [i_3] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_16)), (var_17))), (((/* implicit */unsigned long long int) ((var_1) ? (arr_19 [i_3] [i_3] [(_Bool)1] [i_6]) : (((/* implicit */int) var_4))))))))));
            arr_27 [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (short)-1))))))));
            var_27 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_16)))) >> (((/* implicit */int) ((_Bool) min(((short)32760), (((/* implicit */short) var_4))))))));
        }
        var_28 |= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_24 [(short)16])) < (((/* implicit */int) var_1))))), ((+(((/* implicit */int) var_4))))));
        arr_28 [14ULL] = ((/* implicit */short) min(((+(((4294967272U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))))))));
        var_29 = ((/* implicit */unsigned long long int) ((int) ((2143289344) < (((((/* implicit */int) (short)32748)) ^ (((/* implicit */int) (unsigned short)64512)))))));
    }
    var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) / (var_7))) << (((((/* implicit */int) ((unsigned char) var_11))) - (235)))))) ^ (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (72057594037927936ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (var_14))))))));
    var_31 = ((/* implicit */int) max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) var_4))));
}
