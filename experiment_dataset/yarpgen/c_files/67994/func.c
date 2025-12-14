/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67994
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
    var_12 = (((-(((/* implicit */int) ((4294967276U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))))) <= (max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (short)32761)))));
    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!((!((_Bool)1))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 *= ((/* implicit */unsigned char) (!((((-(((/* implicit */int) (_Bool)0)))) <= ((~(((/* implicit */int) (short)9359))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_15 = (-(((/* implicit */int) (signed char)108)));
            var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) (unsigned short)50438))), (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (short)-32762))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) ((unsigned long long int) 2129873668739681506LL));
                        var_18 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_4 + 1]))));
                    }
                    var_19 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                }
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)46)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
                            var_22 = ((/* implicit */unsigned short) ((int) arr_4 [i_0] [i_0] [(signed char)12] [i_6]));
                            arr_17 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 - 3] [i_2 + 3] [i_0])) ? (((((/* implicit */_Bool) 7680ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (9223372036854775808ULL))) : (((/* implicit */unsigned long long int) var_3))));
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) var_5)))));
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(max((var_10), (((/* implicit */unsigned int) var_11)))))))));
            var_25 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_15 [i_0] [3] [i_0] [3] [i_7]))) >> (((((/* implicit */int) var_5)) - (24419))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_0] [i_0] [i_0] [i_7])), (var_5)))))));
            var_26 += ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_12 [i_0] [i_7] [i_7] [i_7] [i_7] [i_0])) >> (((((/* implicit */int) var_6)) - (82)))))));
            arr_22 [i_0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (short)32757))))));
            var_27 = max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2129873668739681506LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0])))) & (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_9)))))))), (arr_9 [i_0] [i_0] [i_0] [i_7] [i_7]));
        }
        for (int i_8 = 3; i_8 < 16; i_8 += 4) 
        {
            var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) (signed char)-92))))) ? (1848504526U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)4)), (var_2))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_8] [i_8 - 2])))));
            var_29 = ((unsigned int) var_7);
            var_30 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        arr_25 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (+((~((+(((/* implicit */int) var_4)))))))))));
        arr_26 [i_0] = ((/* implicit */int) var_4);
    }
    for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
    {
        arr_30 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33187))) + (1LL)));
        arr_31 [i_9] [i_9] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) ((short) (_Bool)1))))), (((_Bool) (_Bool)1))));
        arr_32 [i_9] = var_8;
        var_32 ^= ((/* implicit */unsigned short) ((_Bool) (short)-17464));
    }
    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        var_33 = ((/* implicit */unsigned int) var_2);
        arr_36 [i_10] = ((/* implicit */unsigned int) min((((/* implicit */int) var_1)), ((~(8160)))));
        var_34 = ((/* implicit */unsigned int) (short)-16905);
    }
    var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20535))) : (3709153291U))) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
}
