/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9904
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
    var_12 = ((/* implicit */unsigned char) (((-(var_11))) + (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))));
    var_13 = (+(((((15146394463107612768ULL) == (3300349610601938847ULL))) ? (min((15146394463107612758ULL), (var_10))) : ((+(4593671619917905920ULL))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_14 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15146394463107612768ULL)))))) & (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (18ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (unsigned char)148)))));
                    arr_9 [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) arr_7 [i_2] [i_0]);
                    arr_10 [i_0] [i_1] [i_0] = 7143788968172248460ULL;
                    var_16 = ((/* implicit */_Bool) var_6);
                    arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_7 [i_0 + 1] [i_0])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_1))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */int) 11302955105537303155ULL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 23; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                {
                    arr_18 [i_0] = (+(((/* implicit */int) arr_1 [i_0])));
                    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8918215108399178738ULL)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2]))));
                    arr_19 [i_4] [i_0] [i_3] = ((/* implicit */short) (+((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
                }
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 4; i_7 < 23; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */short) var_0);
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_2)))))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) (short)28719));
                        var_21 *= ((/* implicit */long long int) ((18446744073709551585ULL) > (9528528965310372860ULL)));
                    }
                    var_22 = ((/* implicit */long long int) min((var_22), (arr_20 [i_4] [i_0 + 2] [i_6] [18] [i_4 + 1])));
                    var_23 = ((/* implicit */unsigned short) arr_12 [i_0]);
                }
                arr_28 [i_0] = ((/* implicit */unsigned short) (~(arr_26 [i_0 + 1] [i_0 - 2] [i_4] [i_4 + 1] [i_4 + 1])));
                var_24 -= ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (short)6770)))));
            }
            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
        }
    }
    var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
    var_26 ^= ((((/* implicit */_Bool) (-(((long long int) var_9))))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_9))) ? ((-(((/* implicit */int) (signed char)-85)))) : (((/* implicit */int) var_8))))));
}
