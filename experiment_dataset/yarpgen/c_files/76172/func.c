/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76172
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)52)), ((-(((/* implicit */int) var_7))))))) ? ((+(var_13))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (var_2)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (((~(9ULL))) == (min((arr_4 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
                            arr_13 [i_2] [i_2] [i_2] [i_3] |= ((/* implicit */unsigned short) (+(-1844182319)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((max((((((/* implicit */int) var_17)) * (((/* implicit */int) (unsigned char)34)))), (((/* implicit */int) (signed char)-13)))) >> (((((((/* implicit */_Bool) arr_2 [i_5 - 1])) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_0] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))) : (var_9))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)34145))))))) - (173LL))))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                            {
                                var_21 = (+(var_13));
                                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_5])) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1]))))) < ((~(-943661065225591823LL)))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? ((~(var_9))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_5 - 1] [i_1] [i_0 - 1]), (((/* implicit */unsigned short) arr_1 [i_1]))))))));
                            }
                            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                            {
                                var_24 ^= ((/* implicit */unsigned short) (signed char)0);
                                arr_25 [i_0] [(_Bool)1] [i_1] [i_5] [i_7] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_4]);
                                var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31410)) & (((/* implicit */int) (unsigned short)34145))))) : (((long long int) arr_14 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1]))));
                            }
                            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                            {
                                arr_29 [i_1] [i_1] [(unsigned short)11] [(signed char)7] [i_5] [(_Bool)1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1]))) < (((long long int) arr_9 [i_0 + 1] [i_0 + 1]))));
                                var_26 = ((/* implicit */unsigned short) ((long long int) var_10));
                                var_27 = max((((/* implicit */unsigned long long int) arr_0 [i_4] [i_8])), (0ULL));
                            }
                            /* LoopSeq 2 */
                            for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                            {
                                var_28 *= ((/* implicit */unsigned char) max((12619727022119414105ULL), (((/* implicit */unsigned long long int) 1721215230))));
                                arr_32 [i_0] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */long long int) var_2);
                                var_29 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_28 [i_5] [i_1] [i_4] [i_1] [(unsigned short)10] [i_5])) : (((/* implicit */int) ((_Bool) var_13)))))));
                                var_30 = ((/* implicit */int) min((var_30), ((+(((/* implicit */int) (unsigned char)23))))));
                            }
                            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                            {
                                var_31 = var_2;
                                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) min((max((((((/* implicit */int) var_12)) * (((/* implicit */int) (signed char)20)))), (((/* implicit */int) ((unsigned short) (unsigned short)17))))), ((~(((/* implicit */int) (unsigned short)35479)))))))));
                            }
                        }
                    } 
                } 
                var_33 = ((/* implicit */_Bool) (((~(arr_16 [i_0] [i_0 + 1] [(unsigned short)5] [i_0]))) << (((((arr_0 [i_0 - 1] [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9))) - (63498LL)))));
            }
        } 
    } 
}
