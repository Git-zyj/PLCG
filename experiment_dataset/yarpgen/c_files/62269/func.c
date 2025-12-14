/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62269
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
    var_18 |= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_19 = ((((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-6)), (-747093144)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -747093144)) ? (var_11) : (-747093141)))) : (9802359155135778643ULL))) | (((/* implicit */unsigned long long int) ((747093130) << (((8644384918573772956ULL) - (8644384918573772955ULL)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    var_20 = ((/* implicit */long long int) -1);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)125)) * (((int) (!(((/* implicit */_Bool) -747093136)))))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    arr_15 [i_0 - 2] [i_2] = ((/* implicit */unsigned int) ((short) (unsigned char)128));
                    arr_16 [i_0] [i_0] [i_2] [i_4 + 1] [8U] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(arr_11 [i_0] [(unsigned short)3] [i_2] [(unsigned short)0] [(unsigned short)0] [i_0])))) & (((3921730552U) << (0LL)))));
                    var_22 += ((/* implicit */unsigned short) (+(var_11)));
                    var_23 = ((/* implicit */int) var_4);
                }
                arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) min((var_2), (747093137)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)14))))) : (max((8644384918573772956ULL), (((/* implicit */unsigned long long int) 7832032834091259729LL))))))));
                arr_18 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [i_2])), (-3426383084334920931LL)));
            }
            arr_19 [i_0 - 1] [i_1] = (((!(((/* implicit */_Bool) -747093138)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 747093148)))))))) : (7245687547359362524LL));
        }
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((747093148), (((/* implicit */int) (_Bool)1)))))));
        var_25 = ((/* implicit */int) 6604572854926488846ULL);
    }
}
