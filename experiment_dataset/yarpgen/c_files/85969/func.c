/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85969
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
    var_10 = ((/* implicit */long long int) ((unsigned int) var_7));
    var_11 = ((/* implicit */long long int) (unsigned short)45434);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0]))));
        var_13 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 23ULL)) || (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) ((arr_3 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20681))))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) 960298679))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned short) arr_8 [i_2] [13U]);
                            arr_17 [i_2] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) arr_6 [i_2] [i_3]);
                            arr_18 [i_5] [i_6] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned short)45428)), (-960298675))) * (((/* implicit */int) (!(((/* implicit */_Bool) -960298676)))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (arr_12 [i_3] [i_4 + 3] [(unsigned short)9]))))));
                            arr_19 [i_2] [3LL] [i_6] [i_3] [i_6] = ((/* implicit */long long int) 11814833514778001507ULL);
                            var_18 = ((/* implicit */unsigned int) arr_11 [i_5] [5LL]);
                        }
                    } 
                } 
            } 
            arr_20 [i_3] = ((/* implicit */short) min((((/* implicit */long long int) arr_5 [i_2])), ((-(arr_8 [i_3 - 2] [i_3 - 2])))));
        }
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (long long int i_8 = 2; i_8 < 12; i_8 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) 11814833514778001527ULL))));
                    var_20 = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) (unsigned short)6550)) ? (1639302544579505024LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))));
                    var_21 = ((/* implicit */short) (~(((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned char)4)), (6631910558931550089ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
                }
            } 
        } 
        arr_25 [i_2] [i_2] = var_2;
        arr_26 [i_2] = ((/* implicit */unsigned char) arr_7 [i_2] [i_2]);
    }
    for (signed char i_9 = 2; i_9 < 11; i_9 += 3) 
    {
        arr_30 [i_9] = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) (unsigned short)6)) != (((/* implicit */int) (unsigned short)20106)))) ? (-1639302544579505025LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [(short)13]))))))), (((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_9 - 2] [i_9] [i_9] [i_9])) ^ (((/* implicit */int) var_1)))) == ((-(-1400695721))))))));
        var_22 = ((/* implicit */short) min(((+(212154312577402339LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1432)) ? (524287) : (((/* implicit */int) (unsigned short)41368)))))));
        var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) arr_8 [i_9 + 2] [i_9 + 2])) % ((~(23ULL)))))));
    }
}
