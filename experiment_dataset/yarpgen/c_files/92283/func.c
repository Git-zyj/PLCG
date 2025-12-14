/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92283
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = max((((/* implicit */unsigned long long int) (~(((long long int) var_14))))), (((((9965713596231483719ULL) << (((4139720695467174766ULL) - (4139720695467174709ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [9U] [i_0]))))));
        var_21 = ((/* implicit */unsigned char) arr_1 [5LL] [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_1]))))));
            arr_10 [(short)5] [i_1] [(short)5] = ((/* implicit */unsigned char) var_17);
            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_1] [i_1 - 1]))));
        }
        for (short i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)120))))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))));
            arr_13 [i_1] = ((long long int) var_7);
        }
        var_25 = ((/* implicit */unsigned char) 14712811298640069276ULL);
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1] [i_1 + 1])) >> (((((/* implicit */int) var_0)) + (21392)))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_1] [(short)18] [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 24; i_4 += 4) 
        {
            for (unsigned char i_5 = 2; i_5 < 24; i_5 += 1) 
            {
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4 + 1])) ? (-2451356989596039147LL) : (3259389150155225394LL)));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_29 &= ((/* implicit */unsigned char) var_11);
                                var_30 = ((/* implicit */short) ((long long int) (-9223372036854775807LL - 1LL)));
                                var_31 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_4] [i_4])) % (((/* implicit */int) arr_8 [i_4] [i_4]))));
                                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (~((+((-9223372036854775807LL - 1LL)))))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_3 [i_1])))));
                }
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        var_34 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)2)) / (((/* implicit */int) max((((/* implicit */short) arr_26 [i_8])), ((short)-28201))))));
        /* LoopNest 3 */
        for (unsigned int i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            for (unsigned int i_10 = 1; i_10 < 9; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    {
                        var_35 = (((+(var_15))) ^ (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_9])) || (((/* implicit */_Bool) var_8))))), (arr_29 [i_8] [i_10 + 3]))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_10 + 1] [i_10] [i_10 - 1])) ? (3259389150155225394LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10 + 1] [4LL] [i_10 - 1])))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_10 + 1] [21LL] [i_10 - 1])), (arr_19 [i_10 + 1] [i_10] [i_10 - 1] [i_10] [i_10 + 1]))))));
                        arr_35 [i_11] [i_10] [(_Bool)1] [i_10] [9U] = arr_11 [i_8] [i_10 + 3] [i_10];
                        arr_36 [i_11] [i_10] [0U] [i_8] [i_8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (min((arr_5 [i_8] [11ULL] [24LL]), (((/* implicit */unsigned int) var_11))))))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_6), (min((var_7), (((/* implicit */unsigned short) arr_18 [i_11] [i_10] [i_9] [i_9] [(_Bool)1] [i_8]))))))))));
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) max((max((var_0), (var_13))), (((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_8] [i_9 - 1] [i_9 + 3] [i_9 + 3] [i_10 + 1])) || (((/* implicit */_Bool) arr_17 [(short)5] [i_8] [i_9 + 2] [i_10 + 2]))))))))));
                    }
                } 
            } 
        } 
    }
    var_38 += ((/* implicit */unsigned char) var_14);
    var_39 = ((/* implicit */short) ((((/* implicit */int) (short)27184)) <= (((/* implicit */int) var_3))));
    var_40 = max((var_10), (var_10));
}
