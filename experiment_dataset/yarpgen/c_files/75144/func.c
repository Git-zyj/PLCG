/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75144
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((((/* implicit */_Bool) 6949034222163612400ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))) : (18446744073709551615ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_17 *= ((/* implicit */signed char) ((_Bool) ((int) min((2305843009205305344LL), (((/* implicit */long long int) arr_1 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_14)))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((arr_4 [i_0] [i_0] [i_0]) + (((/* implicit */int) var_11))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (2305843009205305341LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (max((((/* implicit */int) arr_3 [i_1] [i_2])), (var_10))) : (arr_1 [i_0 + 2]))))));
                        arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2305843009205305327LL))))) < (((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (2685771122U))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (arr_8 [i_0]))) + (((/* implicit */unsigned long long int) ((long long int) (unsigned short)27415)))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4412907823441506089LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (unsigned short)26530)))))) : ((+(1609196172U)))));
            arr_16 [i_0] [i_4] = ((/* implicit */_Bool) ((1598207121) / (((/* implicit */int) (unsigned char)244))));
            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2685771111U)) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1])))));
        }
        arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (max((3941747653U), (((/* implicit */unsigned int) var_1)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (3941747653U)))))) : ((((_Bool)1) ? (-36921270593962923LL) : (6074376902003036830LL)))));
        arr_18 [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_1));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2305772640469516288LL)) ? (((/* implicit */int) var_0)) : (134086656)))))) ? (((((/* implicit */_Bool) -2305843009205305345LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 - 1] [i_0 + 1]))) : (var_2))) : (((/* implicit */unsigned long long int) (-(var_12))))));
                    arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) + (-2305843009205305342LL)));
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) 1196755025);
        arr_27 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7])))))));
    }
}
