/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7121
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) var_10);
        arr_4 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((arr_2 [i_0]) >> (((arr_2 [i_0]) - (6126055018322099361ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) 1508983636U))));
    }
    var_21 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-12575)) : (((/* implicit */int) (_Bool)1))));
    var_22 -= ((/* implicit */unsigned int) ((var_10) != ((+(((/* implicit */int) ((_Bool) 53250548U)))))));
    /* LoopSeq 3 */
    for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = (((~(var_5))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))));
        arr_10 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
        var_23 = ((/* implicit */short) var_7);
        arr_11 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1]))) : (3214531104U))))))) : (((/* implicit */int) var_4))));
    }
    for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28116))) < (1898378090U)));
            arr_17 [i_2 + 2] [i_2 + 2] = ((/* implicit */unsigned int) arr_8 [1U] [i_3]);
            var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -603293197)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_17)))) : (((arr_6 [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))))));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_16)))))))));
        }
        arr_18 [i_2] = ((/* implicit */int) var_5);
        var_27 = ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)8191))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (4294967295U))))));
    }
    for (unsigned int i_4 = 3; i_4 < 16; i_4 += 3) /* same iter space */
    {
        arr_22 [i_4] = ((/* implicit */short) (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-32763))))));
        arr_23 [i_4 + 2] [i_4 + 2] = min((var_0), (((/* implicit */unsigned short) (_Bool)1)));
        var_28 = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_13 [i_4])) ? (var_7) : (((/* implicit */unsigned long long int) var_13)))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7)) ? (min((arr_20 [i_4]), (((/* implicit */int) arr_8 [i_4] [i_4])))) : (((/* implicit */int) var_17)))))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)62573)))) - (((arr_2 [i_4 + 1]) ^ (arr_2 [i_4 - 3])))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 3; i_5 < 17; i_5 += 4) 
        {
            arr_28 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) var_7);
            arr_29 [i_5] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_20 [i_5 - 3])))), ((!(((/* implicit */_Bool) arr_20 [i_5 + 1]))))));
            var_30 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) arr_25 [i_5] [i_5])))))))), (min((((/* implicit */int) arr_1 [i_5 - 1])), (((((/* implicit */_Bool) (short)7168)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (_Bool)1))))))));
            arr_30 [i_5 - 3] [i_5] [i_4] = ((/* implicit */unsigned char) 3038166053U);
        }
    }
    /* LoopSeq 1 */
    for (signed char i_6 = 2; i_6 < 10; i_6 += 4) 
    {
        arr_34 [i_6] = ((/* implicit */short) min((((((((/* implicit */int) (short)18015)) * (((/* implicit */int) (signed char)10)))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)8191))))))), (((((((/* implicit */_Bool) arr_3 [i_6 - 1])) ? (var_13) : (((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6 - 2])))))))));
        var_31 = ((/* implicit */signed char) (+(max((arr_16 [i_6 + 1] [i_6 - 2] [(_Bool)0]), (arr_16 [i_6 - 2] [i_6 - 2] [i_6])))));
    }
}
